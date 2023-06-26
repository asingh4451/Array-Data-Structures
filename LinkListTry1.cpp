#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
}*first;

void Create(int A[],int n)
{
    int i;
    Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(Node *head)
{
    Node *p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
void Rdisplay(Node *head)
{
    Node *p=head;
    if(p!=NULL)
    {
        //cout<<p->data<<" "; // if It is written before it linked List is printed in forward direction else backwards
        Rdisplay(p->next);
        cout<<p->data<<" ";
    }
}
int LinkListCount(Node *head)
{
    Node *p=head;
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}
int RecLinkListCount(Node *head)
{
    Node *p=head;
    if(p!=NULL)
    return 1+ RecLinkListCount(p->next);
    else
    return 0;
}
int SumOfVariables(Node *head)
{
    Node *p=head;
    int sum=0;
    while(p!=NULL)
    {
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}
int RecSumofvariables(Node *head)
{
    Node *p=head;
    if(p!=NULL)
        return p->data+RecSumofvariables(p->next);
    else
        return 0;
}
int MaximumEle(Node *head)
{
    int max=-9999;
    Node *p=head;
    while(p!=NULL)
    {
        if(p->data>max)
        max=p->data;
    p=p->next;
    }
    return max;
}
int MaximumEleRec(Node *head)
{
    Node *p=head;
    if(p!=NULL)
    {
        int x=MaximumEleRec(p->next);
        if(x>p->data)
        {
            return x;
        }
        else
        {
            return p->data;
        }

    }
    else
    {
        return -9999 ;
    }
}
int main()
{
    int n,i,a[100];
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Create(a,n);
    display(first);
    Rdisplay(first);
    cout<<endl;
    cout<<"The Number of Nodes in the Linked List are "<<LinkListCount(first)<<endl;
    cout<<"The Number of Nodes in the Linked List are using Recursion are "<<RecLinkListCount(first)<<endl;
    cout<<" The sum of variables of Linked List is "<<SumOfVariables(first)<<endl;
    cout<<" The sum of variables of Linked List is using Recursion is "<<RecSumofvariables(first)<<endl;
    cout<<"The Maximum Element in the Linked List is "<<MaximumEle(first)<<endl;
    cout<<"The Maximum Element in the Linked List using recursion is  "<<MaximumEleRec(first)<<endl;
return 0;
}