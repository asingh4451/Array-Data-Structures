#include <iostream>
using namespace std;
class Matrice
{
    private:
    int n;
    int *A;
    public:
    Matrice(int n=1)
    {
        this->n=n;
        int size=(n*(n+1)/2);
        A=new int[size];
    }
    void set(int i,int j,int x);
    int Get(int i,int j);
    void display();
};
void Matrice::set(int i,int j,int x)
{
    if(i>=j)
    {
        A[i*(i-1)/2+j-1]=x;
    }
}
int Matrice::Get(int i,int j)
{
    if(i>=j)
    {
        return A[i*(i-1)/2+j-1];
    }
    return 0;
}
void Matrice::display()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i>=j)
                cout<<Get(i,j)<<" ";
            else
            cout<<'0'<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int size;
    cout<<" Enter size of The Lower triangular Matrices "<<endl;
    cin>>size;
Matrice Mar(size);
cout<<" Enter "<<size*(size+1)/2<<" Elements of Lower triangular Matrix "<<endl;
for(int i=1;i<=size;i++)
{
    for(int j=1;j<=size;j++)
    {
        if(i>=j)
        {
            int x;
            cin>>x;
            Mar.set(i,j,x);
        }
}
}
Mar.display();
return 0;
}