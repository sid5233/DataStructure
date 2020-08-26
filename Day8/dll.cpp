// INCOmplete
#include <iostream>
using namespace std;

struct node{
    int data;
    struct node*next;
    struct node*prev;
};
struct node *head=NULL;

void addnode(int n)
{
    struct node* newnode = new node();
    newnode->data=n;
    newnode->next=NULL;
    newnode ->prev= NULL;
    if (head == NULL)
    {
       head = newnode;
    }
    else {
        head->next=newnode;
        newnode->prev=head;
        newnode=head;
    }
}
void deletef(){
    struct node *temp;
    if (head==NULL)
    {
        cout << "list is empty";
    }
    else
    {
        temp=head;
        head=head->next;
        head->prev=NULL;

    }
}
void view(){
    struct node *view;
    if (head=NULL)
    {
        cout <<"Empty.";
    }
    else
    {
        view=head;
        while (view->prev != NULL)
        {
            cout << view->data << " ";
            view=view->prev;
        }   
    }
}
int main(){
    addnode(10);
    addnode(20);
    addnode(30);
    addnode(40);
    view();
    deletef();
    view();
}