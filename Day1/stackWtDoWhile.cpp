#include <iostream>
using namespace std;
int arr[5],input;
int count=0;


void display(){
    cout << "The elements are : ";
    for ( int i = 0; i < count; i++)
    {
        cout << arr[i] << ",";
    }
}
    
int isfull()
{
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
    
void push()
    {
    isfull();
    if (isfull() == 1)
    
        cout << "Enter an element : " << endl;
        cin >> input;
        arr[count]=input;
        count++;
    }
    
void pop(){

    if (isempty() == 1)
    {
        count--;
        cout << "Element removed." << endl;
    }

}
    

int main()
{
int ch;
    cout <<"Enter your choice : " << endl;
    cout << "1.Push" << endl << "2.Pop" << endl << "3.Display" << endl << "4.Exit" << endl ;
do
    {  cin >> ch;
        switch (ch)
        {
        case 1: 
            push();
            break;
        case 2 :
            pop();
            break;
        case 3 :
            display();
            break;
        case 4 :
            exit(0);

        default :
            cout <<"Invalid command";        
        }

    } while (ch!=4);

    return 0;
}