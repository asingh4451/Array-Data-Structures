#include <iostream>
using namespace std;
class Array
{
    public:
    int *A;
    int size;
    int p;
    Array(int size=1)
    {
    A=new int[size];
    this->size=size;
    this->p=0;
    }
    void insert(int x);
    void print();
    int get(int x);
    void set(int x,int loc);
    int Max();
    int Mini();
    int sum();
    int Average();
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
int Array::get(int x)
{
    int ind;
    for(int i=0;i<p;i++)
    {
        if(A[i]==x)
        ind=i;
    }
    return ind;
}
void Array::set(int x,int loc)
{
    A[loc]=x;
}
int Array::Max()
{
    int m=A[0];
    for(int i=0;i<p;i++)
    {
        if(A[i]>m)
        m=A[i];
    }
    return m;
}
int Array::Mini()
{
    int m=A[0];
    for(int i=0;i<p;i++)
    {
        if(A[i]<m)
        m=A[i];
    }
    return m;
}
int Array::sum()
{
    int Sum=0;
    for(int i=0;i<p;i++)
    {
        Sum+=A[i];
    }
    return Sum;
}
int Array::Average()
{
    int Average;
    int Sum=0;
    for(int i=0;i<p;i++)
    {
        Sum+=A[i];
    }
    Average=Sum/p;
    return Average;
}
int main()
{
int size;
cout<<"Enter size of array : ";
cin>>size;
Array arr(size);
for(int i=0;i<size;i++)
{
    int ins;
    cout<<"Enter Element of the Array "<<endl;
    cin>>ins;
    arr.insert(ins);
}
char Choice;
cout<<"If you want a particular Element to be entered at a location enter Y else ignore"<<endl;
cin>>Choice;
if(Choice=='Y')
{
    int loc;
    cout<<"Enter the Location : ";
    cin>>loc;
    int el;
    cout<<"Enter the element "<<endl;
    cin>>el;
    arr.set(el,loc);
}
cout<<"Maximum Element : "<<arr.Max()<<endl;
cout<<"Minimum Element : "<<arr.Mini()<<endl;
cout<<"Sum of Elements : "<<arr.sum()<<endl;
cout<<"Average of Elements : "<<arr.Average()<<endl;
return 0;
}