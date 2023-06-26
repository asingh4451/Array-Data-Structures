#include <iostream>
using namespace std;
class Diagnol
{
    private:
    int n;
    int *A;
    public:
    Diagnol(int n)
    {
        this->n=n;
        A=new int[n];
    }
    void Insert(int i,int j,int x);
    int Extract(int i,int j);
    void display();
};
void Diagnol::Insert(int i,int j,int x)
{
    if(i==j)
    A[i-1]=x;
}
int Diagnol::Extract(int i,int j)
{
    if(i==j)
    return A[i-1];
    else
    return 0;
}
void Diagnol::display()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            cout<<A[i-1]<<" ";
            else
            cout<<'0'<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int size;
    cout<<"Enter size of Matrix"<<endl;
    cin>>size;
    int ele;
    cout<<"Enter element "<<endl;
Diagnol Dm(size);
for(int i=0;i<size;i++)
{
    for(int j=0;j<size;j++)
    {
        if(i==j)
        {
        cout<<"Enter element for "<<i+1<<" "<<j+1<<" "<<endl;
        cin>>ele;
        }
        Dm.Insert(i,j,ele);
    }
}
cout<<"The mAtrix is  "<<endl;
Dm.display();
return 0;
}