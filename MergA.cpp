#include <iostream>
#include <cstring>
using namespace std;
class Array
{
    private:
    int *A;
    int *B;
    int size,size1;
    int p1;
    int p2;
    int p3;
    int *C;
    public:
    Array(int size,int size1)
    {
        this->size=size;
        this->size1=size1;
        A=new int[size];
        B=new int[size1];
        this->p1=0;
        this->p2=0;
    }
    void insert(int x,int a);
    void display(char a);
    void Merge();
};
void Array :: insert(int x,int a)
{
    if(a==1)
    {
    A[p1]=x;
    p1++;
    }
    if(a==2)
    {
    B[p2]=x;
    p2++;
    }
}
void Array::display(char a)
{
    if(a=='1')
    for(int i=0;i<p1;i++)
    {
        cout<<A[i]<<" ";
    }
    if(a=='2')
    for(int i=0;i<p2;i++)
    {
        cout<<B[i]<<" ";
    }
    if(a=='M')
    for(int i=0;i<p3;i++)
    {
        cout<<C[i]<<" ";
    }
}
void Array::Merge()
{
    C=new int[p1+p2];
    int i,j,k;
    i=0;
    j=0;
    k=0;
while(i<size&&j<size1)
{
 if(A[i]<B[j])
 {
    C[k++]=A[i++];
    p3++;
 }
    else
    {
    C[k++]=B[j++];
    p3++;
    }
}
for(;i<p1;i++)
C[k++]=A[i];
for(;j<p2;j++)
C[k++]=B[j];
}
int main()
{
    int size1,size2;
    cout<<"Enter the size of first array "<<endl;
    cin>>size1;
    cout<<"Enter the size of second array "<<endl;
    cin>>size2;
    Array arr(size1,size2);
    for(int i=0;i<size1;i++)
    {
        int x;
        cout<<"Enter the element of array1 "<<endl;
        cin>>x;
        arr.insert(x,1);
    }
    for(int i=0;i<size2;i++)
    {
        int x;
        cout<<"Enter the element of array2 "<<endl;
        cin>>x;
        arr.insert(x,2);
    }
    cout<<"The first Array is "<<endl;
    arr.display('1');
    cout<<"The second Array is "<<endl;
    arr.display('2');
    arr.Merge();
    cout<<"The Merged Array is "<<endl;
    arr.display('M');
return 0;
}