#include <iostream>
using namespace std;

class node{
    public :  
    int data;
    node *next;
};
int main(){
    node * p = new node();
    p -> data = 10;
    p -> next = NULL;

    node * p1 = new node();
    p1 -> data = 20;
    p1 -> next = NULL;
    p->next = p1;

    node * p2 = new node();
    p2 -> data = 30;
    p2 -> next = NULL;
    p1->next = p2;

    struct node *temp = p;
    while ( temp!= NULL)
    {
        cout << temp ->data << endl;
        cout << temp -> next << endl;
        temp = temp->next; 
     
    }
    return 0;


}