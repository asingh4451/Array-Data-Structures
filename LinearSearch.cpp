#include <iostream>
using namespace std;
class Array
{
    private:
    int *A;
    int n;
    int p;
    public:
    Array(int n=3)
    {
        A=new int[n];
        this->n=n;
        this->p=0;
    }
    void insert(int x);
    void swap(int *x,int *y);
    int LinearSearch(int e);
    void display();
};
void Array::insert(int x)
{
    A[p]=x;
    p++;
}
void Array::swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int Array::LinearSearch(int e)
{
    for(int i=0;i<n;i++)
    {
        if(A[i]==e)
        {
            swap(&A[i],&A[i-1]);
            return i;
        }
    }
    return -1;
}
void Array::display()
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}
int main()
{
    int size;
    cout<<"Enter the size of the Array"<<endl;
    cin>>size;
    Array a(size);
    for(int i=0;i<size;i++)
    {
        int e;
        cout<<"Enter element "<<i+1<<endl;
        cin>>e;
        a.insert(e);
    }
    cout<<"Enter the element to be searched"<<endl;
    int ele;
    cin>>ele;
    int index=a.LinearSearch(ele);
    if(index!=-1)
    {
        cout<<"Element found at location "<<index+1<<endl;
        a.display();
        }
        else
        cout<<"Element not found"<<endl;
    return 0;
}