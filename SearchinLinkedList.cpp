#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
}
*first;
void Create(int A[],int n)
{
    Node *t,*last;
    int i;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
Node* Search(Node *head,int key)
{
    Node *p=head;
    while(p!=NULL)
    {
        if(p->data==key)
        {
            cout<<"\nElement found";
            return;
        }
        p=p->next;
    }
}
Node* RecSearch(Node *head,int key)
{
    Node *p=head;
    if(p==NULL)
    return NULL;
    if(p->data==key)
    return p;
    else
    return RecSearch(p->next,key);
}
int main()
{
return 0;
}