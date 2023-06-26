#include <iostream>
using namespace std;
class Array
{
    private:
    int *A;
    int size;
    int i;
    public:
    Array(int size=3)
    {
        A=new int[size];
        this->size=size;
        this->i=0;
    }
    void insert(int d);
    void print();
    };
void Array::insert(int d)
{
    if(i<size){
        A[i]=d;
        i++;
    }
}
void Array::print()
{
    for(int j=0;j<size;j++){
        cout<<A[j]<<" ";
    }
}
int main()
{
    int d;
    Array a=(5);
    for(int i=0;i<5;i++){
        cout<<"Enter the element: ";
        cin>>d;
        a.insert(d);
    }
    a.print();

}