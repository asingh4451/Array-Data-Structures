#include <iostream>
using namespace std;
class Ament
{
    public:
    int i;// row number
    int j;// column number
    int el;// Ament itself
};
class Sparse
{
    private:
    int m; //dimension of row
    int n;//dimension of column
    int num;// number of non zero Ament
    Ament *A;
    public:
    Sparse(int m,int n,int num)
    {
        this->m=m;
        this->n=n;
        this->num=num;
        A=new Ament[num];
    }
    void read();
    void print(Sparse &s);
    Sparse Add(Sparse&s);
};
void Sparse::read()
{
    cout<<"Enter Non Zero Aments"<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>A[i].i>>A[i].j>>A[i].el;
    }
}
Sparse Sparse::Add(Sparse&s)
{
int i,j,k=0;
i=0;
j=0;
Sparse *sum=new Sparse(m,n,num+s.num);
if(m!=s.m || n!=s.n)
return Sparse(0,0,0);
 while(i<num && j<s.num)
 {
 if(A[i].i<s.A[j].i)
 sum->A[k++]=A[i++];
 else if(A[i].i > s.A[j].i)
 sum->A[k++]=s.A[j++];
 else
 {
 if(A[i].j<s.A[j].j)
 sum->A[k++]=A[i++];
 else if(A[i].j > s.A[j].j)
 sum->A[k++]=s.A[j++];
 else
 {
 sum->A[k]=A[i];
 sum->A[k++].el=A[i++].el+s.A[j++].el;
 }
}
}
 for(;i<num;i++)sum->A[k++]=A[i];
 for(;j<s.num;j++)sum->A[k++]=s.A[j];
 sum->num=k;
 return *sum;
}
void Sparse::print(Sparse &s)
{
    int k=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s.A[k].i==i && s.A[k].j==j)
                cout<<s.A[k++].el<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}
int main()
{
Sparse s1(5,5,5);
Sparse s2(5,5,5);
Sparse s3= s1.Add(s2);
s1.read();
s2.read();
s1.print(s1);
s2.print(s2);
s3.print(s3);
return 0;
}