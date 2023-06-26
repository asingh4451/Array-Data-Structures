#include<iostream>
using namespace std;
class Array
{
    private:
    int *a;
    int size;
    int maxlength;
    public:
     Array(int maxlength=10)
     {
        a=new int[maxlength];
        this->size=0;
        this->maxlength=maxlength;
     }
     void create(int b);
     void insert(int ind,int e);
     void print();
};
void Array::create(int b)
{
    a[size]=b;
    size++;
}
void Array::insert(int ind,int e)
{
    if(ind>size){
        cout<<"Array is Full"<<endl;
    }
    else if(ind<=size && size<maxlength)
    {
        for(int j=size;j>ind;j--)
        {
            a[j]=a[j-1];
        }
        a[ind]=e;
        size++;
    } 
}
void Array::print()
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int b;
    int arrsize;
    int maxlen;
    char choice;
    int index,element;
    cout<<"Enter the maximum length of Array"<<endl;
    cin>>maxlen;
    cout<<"enter the size of array you want"<<endl;
    cin>>arrsize;
    Array a(maxlen);
    for(int i=0;i<arrsize;i++)
    {
        cout<<"Enter the element to be entered"<<endl;
        cin>>b;
        a.create(b);
    }
    cout<<"If you want to insert element in this array enter Y or N"<<endl;
    cin>>choice;
    while(choice!='N')
    {
        cout<<"Enter the index of element you want to insert"<<endl;
        cin>>index;
        cout<<"Enter the element you want to insert"<<endl;
        cin>>element;
        a.insert(index,element);
        a.print();
        cout<<endl;
        cout<<"If you want to insert element in this array enter Y or N"<<endl;
        cin>>choice;
    }
        a.print();
    return 0;
    }