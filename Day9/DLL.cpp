#include <iostream>
#include <stdlib.h>
using namespace std;

struct node{
    int data;
    node *prev;
    node *next;
};
class  doubly{
    struct node *front;
    struct node *end;
    public :
    doubly(){
        front = NULL;
        end = NULL;
    }
    void addfront(int );
    void addafter(node *,int);
    void addbefore(node*,int);
    void addend(int );
    void deletenode(node *);
    void forwardtraverse();
    void backwardtraverse();
};
void doubly :: addfront(int d){
    node *temp;
    temp = new node();
    temp->data=d;
    temp->prev=NULL;
    temp->next = front;
    
    if (front=NULL)
        end=temp;
    else
    {   front->prev=temp; }
}
void doubly ::addbefore( node *n, int d)
{
    node *temp;
    temp = new node();
    temp->data = d;
    temp->next=n;
    temp->prev = n->prev;
    n->prev = temp;

    if (n->prev = NULL)
        front = temp;
}

void doubly :: addafter(node *n, int d)
{
    node *temp;
    temp = new node();
    temp ->data = d;
    temp ->prev=n;
    temp->next= n->next;
    n->next=temp;

    if (n->next == NULL)
        end=temp;
}
void doubly :: addend(int d){
    node *temp;
    temp = new node();
    temp->data = d;
    temp->prev = end;
    temp-> next = NULL;

    if (end = NULL)
        front = temp;
    else
    {
        end->next = temp;
        end=temp;
    }
}
void doubly :: deletenode(node *n)
{
    if (n->prev==NULL)
    {
        front =n->next;
        front-> prev = NULL;
    }
    else if (n->next == NULL){
        end = n->prev;
        end->next=NULL;
    }
    else {
        n->prev->next = n->next;
        n->next->prev = n->prev;
    }
    delete(n);
}
void doubly :: forwardtraverse()
{
	node *trav;
	trav = front;
	while(trav != NULL)
	{
		cout<<trav->data<<endl;
		trav = trav->next;
	}
}


int main()
{
    doubly l1;
    l1.addfront(10);
    l1.addfront( 20);
    l1.addfront(30);
    l1.addfront( 40);
    l1.forwardtraverse();
}