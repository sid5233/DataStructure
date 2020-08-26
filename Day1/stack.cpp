#include <iostream>
using namespace std;
int arr[5],input;
int count=0;

int isfull(){
    if (count==5)
    {
        cout << "The stack is full" << endl;
        return 0;
    }
    return 1;
}
int isempty(){
    if (count == 0)
    {
        cout << "Stack is empty." << endl;
        return 0;
    }
    return 1;
}
void push(){
    isfull();
    if (isfull() == 1)
    
        cout << "Enter an element : " << endl;
        cin >> input;
        arr[count]=input;
        count++;
    }
void pop(){
    isempty();
    if (isempty() == 1)
    {
        count--;
        cout << "Element removed." << endl;
    }


}

int main()
{
    push();
    push();
    push();
    push();

    cout << "The elements are : " ;
    for ( int i = 0; i < count; i++)
    {
        cout << arr[i] << "," << endl;
    }
    pop();
        cout << "The elements are : ";
    for ( int i = 0; i < count; i++)
    {
        cout << arr[i] << ",";
    }
    return 0;
}
