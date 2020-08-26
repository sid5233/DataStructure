#include <iostream>
using namespace std;


struct demo
{
    int data;
    struct demo * next;
};

int main(){
    struct demo *d = (struct demo* )malloc (sizeof(struct demo));
            d -> data=10;
            d -> next = NULL;
    struct demo *d1 = (struct demo* )malloc (sizeof(struct demo));
            d1 -> data=20;
            d1 -> next=NULL;
            d -> next = d1;
    struct demo *d2 = (struct demo* )malloc (sizeof(struct demo));
            d2 -> data=30;
            d2->next=NULL;
            d1 -> next = d2;
    struct demo *d3 = (struct demo* )malloc (sizeof(struct demo));
            d3 -> data=40;
            d3-> next = NULL;
            d2 -> next = d3;                                    

    struct demo *temp=d;
    while ( temp!= NULL)
    {
        cout << temp ->data << endl;
        cout << temp -> next << endl;
        temp = temp->next; 
     
    }
    return 0;
}