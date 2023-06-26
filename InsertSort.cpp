#include <iostream>
using namespace std;
class Array
{
    public:
    int *A;
    int size;
    int p;
    Array(int size)
    {
        this->size = size;
        A = new int[size];
        this->p=0;
    }
    void insert(int x);
    void print();
    void reverse();
    void InsertSort(int x);
};
void Array::insert(int x)
{
A[p]=x;
p++;
}
void Array::print()
{
for(int i=0;i<p;i++)
{
    cout<<A[i]<<" ";
}
}
void Array::reverse()
{
for(int i=0,j=p-1;i<j;i++,j--)
{
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;

}
}
void Array::InsertSort(int x)
{
    int i=p-1;
    while(i>=0 && A[i]>x)
    {
        A[i+1]=A[i];
        i--;
        }
        A[i+1]=x;
        p++;
}
int main()
{
int size;
cout<<"Enter size of array : ";
cin>>size;
Array arr(size);
cout<<"Enter elements of Array: ";
for(int i=0;i<size;i++)
{
    int ins;
    cin>>ins;
    arr.insert(ins);
}
arr.print();
cout<<endl;
arr.print();
int id;
cout<<"Enter the element to be entered "<<endl;
cin>>id;
arr.InsertSort(id);
arr.print();
return 0;
}