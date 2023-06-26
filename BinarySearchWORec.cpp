#include <iostream>
using namespace std;
class Array
{
    public:
    int *A;
    int size;
    int p;
    public:
    Array(int size=5)
    {
        A=new int[size];
        this->size=size;
        this ->p=0;
    }
    void insert(int x);
    void print();
    int RbinSearch(int *a,int key,int l,int h);
};
void Array::insert(int x)
{
    A[p]=x;
    p++;
}
void Array::print()
{
    for(int i=0;i<p;i++)
    cout<<A[i]<<" ";
cout<<endl;
}
int Array::RbinSearch(int *A,int key,int l,int h)
{
int mid=l+h/2;
if(key==A[mid])
return mid;
if(key !=A[mid])
{
    if(key<A[mid])
    return RbinSearch(A,key,l,mid-1);
    if(key>A[mid])
    return RbinSearch(A,key,mid+1,h);
}
return -1;
}
int main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    Array arr(size);
    int x,key;
    cout<<"Enter elements in Ascending order or Sorted Order: ";
    for(int i=0;i<size;i++)
    {
        int a;
        cout<<"Enter Element"<<endl;
        cin>>a;
        arr.insert(a);
    }
    arr.print();
    cout<<"Enter the number to be searched"<<endl;
    cin>>key;
    int ans=arr.RbinSearch(arr.A,key,0,arr.p-1);
    cout<<" The number is found at "<<ans+1<<" Position"<<endl;
return 0;
}