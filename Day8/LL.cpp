#include <iostream>
using namespace std;

class node{
    public :
    int data;
    node *next;
};
void print(node *n){
    while (n!=NULL)
    {
       cout << n->data << " ";
       n=n->next;
    }
    
}
void inserA(struct node *prev_node ,int new_data){
    if (prev_node = NULL)
    {
        cout << " Error is there.\n";
        return;
    }
    node* new_node = new node();
    new_node->data=new_data;
    new_node->next=prev_node->next;
    prev_node->next = new_node;
}
void push(node** head_ref,int new_data){
    node *new_node = new node();
    new_node->data=new_data;
    new_node->next = (*head_ref);
    (*head_ref)=new_node;
}

void append(node** head_ref, int newdata){
    node * new_node = new node();
    node *last = *head_ref;
    new_node->data = newdata;
    new_node->next = NULL; 

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return ;
    }
    while (last->next != NULL)
        last = last->next;
    last->next=new_node;
    return;
}

int main(){

    node* head = NULL;
    append(&head, 6);
    push(&head, 7);
    push(&head,1);
    append(&head,4);
    inserA(head->next,8);

    cout << "Created Linked list is : \n";
    print(head);
    
return 0;

}