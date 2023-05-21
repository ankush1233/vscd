#include<iostream>
using namespace std;
int *point;    // pointer variable

struct node
{
    int data1;
    int data2;
    struct node *next;
}*ptr,*newptr,*op,*rear,*start;

struct node *createnode(int N)
{
    static int inc=0;
    inc++;
    ptr=new node();
    ptr->data1=inc;
    ptr->data2=N;
    return ptr;
}

void link(struct node *np,struct node *&start)
{ 
    if(start==NULL)start=rear=np;

    else
    {
        rear->next=np;
        rear=np;
    }
}

void display(struct node *op)
{
    while(op!=NULL)
    {
        cout<<"Here's the output : "<<op->data2<<'\n';
        op=op->next;
    }
}

int main()
{   
    struct node *start=NULL;
    int no;
    int dat;
    cout<<"How many node you wanna give : ";
    cin>>no;
    point=new int[no];
    cout<<"Give the data "<<endl;
    for(int i=0;i<no;i++)
    {   
        cin>>dat;
        newptr=createnode(dat);
        link(newptr,start);
    }
    display(start);
    delete[] point;
    return 0;
}