#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

node *GetNode()
{
    node *p;
    p=(node *)malloc(sizeof(struct node));
    return p;
}

node *InsBeg(node *Head,int x)
{
    node *p;
    p=GetNode();
    p->data=x;
    p->next=Head;
    Head=p;
    return Head;
}

void Traverse(node *Head)
{
    node *p;
    p=Head;
    while(p!=NULL)
    {
        cout<<p->data<<", ";
        p=p->next;
    }
}

node *InsEnd(node *Head, int x)
{
    node *q;
    q=GetNode();
    q->data=x;
    q->next=NULL;
    if(Head==NULL)
        Head=q;
    else
    {
    node*p;
    p=Head;
    while(p->next!=NULL)
        p=p->next;
    
    p->next=q;
    }
    return Head;
}


node *InsAft(node *Head,node *p,int x)
{
    node *q,*r;
    r=GetNode();
    r->data=x;
    
    q=p->next;
    p->next=r;
    r->next=q;
    return Head;
}

node *DelBeg(node *Head)
{
    node *p;
    p=Head;
    Head=Head->next;
    int x=p->data;
    free(p);
    //cout<<"Deleted node is:=> "<<x<<endl;
    return Head;
}
/*********************/
bool IsEmpty(node *Top)
{
    if(Top==NULL)
        return true;
    else
        return false;
}
/*********************/
node* Push(node *Top,int x)
{
    node *p;
    p=GetNode();
    p->data=x;
    p->next=Top;
    Top=p;
    return Top;
}

/*********************/
int StackTop(node *Top)
{
    return Top->data;
}

/*********************/
node* Pop(node *Top)
{
   if(Top==NULL)
   {
    cout<<"Statck Underflows";
    exit(1);
   }
    node *p;
   p=Top;
   Top=Top->next;
    int x=p->data;
    cout<<"Popped Element is: "<<x<<endl;
   free(p);
    return Top;
}


int main()
{
    node *Top=NULL;
    Top=Push(Top,1);
    Top=Push(Top,2);
    Top=Push(Top,3);
    Top=Push(Top,4);
    Top=Push(Top,5);
    cout<<StackTop(Top)<<endl;
    Top=Pop(Top);
    Top=Pop(Top);
    Top=Pop(Top);
    Top=Pop(Top);
    Top=Pop(Top);
    Top=Pop(Top);
    
}