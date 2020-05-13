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
            d -> next = d1;
    struct demo *d2 = (struct demo* )malloc (sizeof(struct demo));
            d2 -> data=30;
            d1 -> next = d2;
struct demo *d3 = (struct demo* )malloc (sizeof(struct demo));
            d3 -> data=40;
            d2 -> next = d3;                                    

    cout << d->data << endl;
    cout <<d->next <<endl;
    cout <<d->next->data <<endl;
    cout <<d->next->next <<endl;
    cout <<d->next->next->data <<endl;
    cout <<d->next->next->next <<endl;
    cout <<d->next->next->next -> data <<endl;
    cout <<d->next->next->next -> next <<endl;
    return 0;
}