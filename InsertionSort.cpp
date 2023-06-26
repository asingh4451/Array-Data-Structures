#include <iostream>
using namespace std;
class Array
{
    private:
    int size;
    int p;
    int *A;
    public:
    Array(int size)
    {
        A=new int[size];
        this->size=size;
        this->p=0;
    }
    void Insert(int x);
    void Print();
    void InsertionSort();
    void Reverse();
};
void Array::Insert(int x)
{
    A[p]=x;
    p++;
}
void Array::Print()
{
    for(int i=0;i<p;i++)
        cout<<A[i]<<" ";
}
void Array::InsertionSort()
{
    int i,j,temp;
    for(i=1;i<p;i++)
    {
        int j=i-1;
        int x=A[i];
        while(j>=0 && A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}
void Array::Reverse()
{
    for(int i=p-1;i>=0;i--)
        cout<<A[i]<<" ";
}
int main()
{
cout<<" Enter the size of Array "<<endl;
int n;
int x;
cin>>n;
Array arr(n);
cout<<" Enter the elements of Array "<<endl;
for(int i=0;i<n;i++)
{
    cin>>x;
    arr.Insert(x);
}
cout<<" Entered Array is "<<endl;
arr.Print();
// arr.InsertionSort();
// cout<<" The sorted Array is "<<endl;
// arr.Print();
cout<<"The reverse of Array is "<<endl;
arr.Reverse();
return 0;
}