#include <iostream>
using namespace std;

struct demo 
{
    int data ;
    struct demo * next ;
}; 

struct demo * firstnode(int input)
{
    struct demo * node = (struct demo* )malloc (sizeof(struct demo));
            node-> data=input;
            node -> next = NULL;
            return node;
}
 struct demo * createnode(int input){  
   struct demo * node1 = (struct demo* )malloc (sizeof(struct demo));
            node1 -> data=input;
            node1 -> next = NULL;
            return node1;
}

void connection (struct demo *n1,struct demo *n2)
{
    n1 -> next = n2;
}
void traverse (struct demo *temp)
{  
    while (temp!=NULL)
    {
        cout << temp -> data <<endl;
        temp = temp ->next;
    }
}
int main(){
    struct demo *d =firstnode(10);
    struct demo *d1=createnode(20);
    struct demo *d2 = createnode(30);
    connection(d,d1);
    connection(d1,d2);
    traverse(d);
}

