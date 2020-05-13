#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};
struct node * top ;
void push (int val){
    struct node * newnode = (struct node*) malloc (sizeof(struct node));
    newnode -> data = val;
    newnode ->next = top;
    top = newnode;
}
void pop(){
    if (top == NULL)
    {
        cout << "Stack is empty." <<endl;
    }
    else 
    {
        top = top->next;
    }
}
void display(){
    {
        while(top!=NULL)
        {
            cout << top->data << endl;
            top = top->next;
        }
        
    }
    
}
int main(){
    push(10);
    push(20);
    push(30);
    display();
    pop();
    pop();
    display();
    return 0;

}