#include<iostream>
using namespace std;
class Array
{
    private:
    int *a;
    int size;
    int p;
    public:
     Array(int size=5)
     {
        a=new int[size];
        this->size=size;
        this->p=0;
     }
     void create(int o);
     int deleteelement(int d);
     void display();
};
void Array::create(int b)
{
    a[p]=b;
    p++;
}
int Array::deleteelement(int ind)
{
    int x;
    if(ind>=0 && ind<size){
        x=a[ind];
for(int i=ind;i<size-1;i++)
{
    a[i]=a[i+1];
}
size=size-1;
}
return x;
}
void Array::display()
{
    for(int j=0;j<size;j++)
    {
        cout<<a[j]<<" ";
    }
}
int main()
{
    int size;
    char choice;
    cout<<"Enter the size of array you want"<<endl;
    cin>>size;
    Array a(size);
    for(int i=0;i<size;i++)
    {
        int b;
        cout<<"Enter element ";
        cin>>b;
        a.create(b);
    }
    a.display();
    cout<<endl;
    cout<<"If you want to Delete the Array enter Y else enter N ";
    cin>>choice;
    while(choice!='N')
    {
        int x,ind;
        cout<<"Enter the index of the element you want to delete "<<endl;
        cin>>ind;
        x=a.deleteelement(ind);
        cout<<"The element deleted is "<<x<<endl;
        cout<<"If you want to Delete the Array enter Y else enter N ";
        cin>>choice;
    }
    a.display();
}