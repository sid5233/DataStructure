#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};

class linked {

    node *head,*tail;

    public :
        linked(){
            head =NULL;
            tail = NULL;
        }

        void add_node(int n)
        {
            node *temp = new node;
            temp-> data = n;
            temp -> next = NULL;

            if (head == NULL)
            {
                head = temp;
                tail = temp;
            }

        }

};

int main(){
    linked a;
    return 0;

}
