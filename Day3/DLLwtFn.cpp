#include <iostream>
using namespace std;



struct node {
        int data;
        node *next;
        node *prev;

};

node *head;
node *tail;
node *n;


int main(){
    n = new node;
    n-> data = 11;
    n->prev=NULL;
    head=n;
    tail=n;

    n = new node;
    n->data = 22;
    n->prev =tail;
}