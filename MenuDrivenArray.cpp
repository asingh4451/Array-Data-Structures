#include <iostream>
using namespace std;
class Array
{
    private:
    int size;
    int p;
    int *A;
    public :
    Array(int size)
    {
        this->size=size;
        this->p=0;
        A=new int[size];
    }
    void Insert(int x);
    void Delete(int pos);
    void Display();
    void Search(int x);
};
void Array::Insert(int x)
{
    A[p]=x;
    p++;
}
void Array::Display()
{
    for(int i=0;i<p;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
void Array::Delete(int pos)
{
    int x;
    if(pos>=0&&pos<size)
        x=A[pos];
    for(int i=pos;i<size-1;i++)
    {
        A[i]=A[i+1];
    }
    size=size-1;
}
void Array ::Search(int x){
    bool flag = false ;
    int po;
    for(int i=0;i<p;i++)
    {
        if(A[i]==x)
        {
        flag=true;
        po=i;
    }
    }
    if(!flag)cout<<"Element not found "<<endl;
    else
    cout<<" Element found at "<<po<<" position in Array "<<endl;
}
int main()
{
    int n;
    cout<<
    cin>>n;
    Array a(n);
    int x;
    int ele;
    cout<<" Enter your choice which You want to execute "<<endl;
    cout<<" 1. CREATE /n 2. Display /n 3. Insert /n 4. DELETE /n 5. Search /n 6. EXIT "<<endl;
    do
    {
        if(x==1)
        {
            Array a(n);
            for int i=0;i<n;i++
        else if (x == 2 )
        {
            a.Display();
        }
        else if (x == 3 ){

    } while (x!=6);
    
return 0;
}