#include <iostream>
using namespace std;

class node{
    public :
   int data;
   struct node *next; 
};
struct node *head= NULL;
void addnode(int n){
    struct node* newnode = new node();
        newnode->data = n;
        newnode->next=head;
        head=newnode;
}
void display(){
    struct node *temp;
    while (temp!=NULL)
    {
        cout << temp->data << "\n";
        temp = temp->next;
    }
}
int main(){
    addnode(10);
    addnode(20);
    addnode(30);
    addnode(40);   
    display();
}