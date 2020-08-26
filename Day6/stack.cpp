#include <iostream>
using namespace std;

int stack[5];
int top;
int i;
int choice;

void push();
void pop();
void display();

int main(){
    top = -1;

    do
    {
        cout << "Enter choice : " << endl ;
        cout << "1.Push" << endl << "2.Pop" << endl << "3.Display";
        cout << endl << "4.Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1 :
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
        
        default:
            cout << "Invalid choice.";
            break;
        }     
   
    } while (choice!=4);
    return 0;
}
void push(){
    int element;
    if (top == 4)
    {
        cout << "Stack overflow";
    }
    else
    {
        cout <<"Enter element : " << endl;
        cin >> element;
        top++;
        stack[top] = element;
    }
}
void pop (){   
  //  int element;
    if (top == -1)
    {
        cout << "Stack underflow." << endl;
    }
    else
    {
//        element = stack[top];
        cout << "item deleted. " << endl;
        top--;
    }
}
void display()
{
        if (top == -1)
        {
            cout << "Stack underflow."<< endl;
        }
        else if (top > 0)
        {
            for (int i = top ; i >= 0; i--)
            {
                cout << stack[i] << endl;
            }   
        }   
    }