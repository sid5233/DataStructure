#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
};
class linked{
    node * head;
    node * tail;

    public :
        linked(){
            head= NULL;
            tail = NULL;
        }
        void add_node(int n){
            node * temp = new node;
            temp-> data= n;
            temp -> next = NULL;

        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = tail ->next;
        }
        
}

};