#include <iostream>
using namespace std;


struct LinkedList
{
    int data;
    struct LinkedList * next;
};

int main(){
    struct LinkedList d ;
    d.data =10;
    d.next = NULL;
    struct LinkedList d1 ;
    d1.data = 20;
    d1.next = NULL;
    d.next=&d1;
    struct LinkedList d2 ;
    d2.data = 30;
    d2.next = NULL;
    d1.next = &d2;

    cout << d.data << endl;
    cout <<d.next <<endl;
    cout <<d1.data <<endl;
    cout <<d1.next <<endl;
    cout <<d2.data <<endl;
    cout <<d2.next <<endl;
    return 0;
}

