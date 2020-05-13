//ReVERSE the Linked LIST pending
#include <iostream>
using namespace std;

struct node {
    int data;
    struct node * next;
    struct node * prev;
};
int main(){
struct node *first = (struct node *)malloc (sizeof(struct node));
        first->data = 11;
        first->next = NULL;
        
        first -> prev = NULL;

struct node *second = (struct node *)malloc (sizeof(struct node));
        second -> data = 22;
        second -> next = NULL;
        second -> prev = NULL;
        
        first -> next = second;
        second -> prev = first;
struct node *third = (struct node *)malloc (sizeof(struct node));
        third -> data = 33;
        third -> next = NULL;
        third -> prev = NULL;

        second -> next =third;
        third -> prev = second;

struct node *temp =NULL;
 
  for(temp=first;temp!=NULL; temp=temp->next)

  //  while(temp!=NULL)
        {
        cout << temp->data << endl;
        }
        cout << "The reverse order is " << endl;    
//struct node *temp;
   //     temp = temp ->next;
        for (temp=temp->next; temp!=NULL;temp=temp->prev);
        while (temp!=NULL)
        {
             cout << temp->data;
             temp = temp->prev;
        }
        

return 0;    
}