#include <iostream>
using namespace std;
class Element
{
    public:
    int i;// row number
    int j;// column number
    int el;// element itself
};
class Sparse
{
    private:
    int m; //dimension of row
    int n;//dimension of column
    int num;// number of non zero element
    Element *A;
    public:
    Sparse(int m,int n,int num)
    {
        this->m=m;
        this->n=n;
        this->num=num;
        A=new Element[num];
    }
    void read();
    void print();
};
void Sparse::read()
{
    cout<<"Enter Non Zero elements"<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>A[i].i>>A[i].j>>A[i].el;
    }
}
void Sparse::print()
{
    int k=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[k].i==i && A[k].j==j)
                cout<<A[k++].el<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}
int main()
{
Sparse s1(5,5,5);
s1.read();
s1.print();
return 0;
}