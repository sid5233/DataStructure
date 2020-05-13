#include <iostream>
#include <stdlib.h>

#define limit 5
using namespace std;


int que[limit];
int front ,rear;
int i;
int choice;

void insert();
void delet();
void display();

int main(){

    front = rear=-1;

    do
    {
        cout<<"1. Insert\n2. Delete\n3. Display\n4. Exit\n\n";
        cout<<"Enter your choice: \n";
        cin>>choice;

        switch (choice)
        {
        case 1 :
            insert();
            break;
        case 2 :
            delet();
            break;
        case 3 :
            display();
            break;
        case 4 :
            exit(0);
            break;
        default:
            cout <<"Inavalid choice.";
            break;
        }
        
     } while (choice!=4);
    return 0;
}

void insert(){
    int element;
    if (rear == limit -1 )
    {                                                                                                                                                                           
        cout << "Queue Overflow.\n";
    }
    else
    {
    if (front == -1 )
    front=0;
    cout << "Enter element \n";
    cin >> element;
    que[rear]=element;
    rear++; 
    }
}
void delet(){
    if(front == -1 || front > rear)
    {
        cout << "Queue underflow.\n";
    }
    else
    {
        cout << "Element deleted.\n";
        front++;
    }    
}
void display(){
    if(front == -1)
    {
        cout << "Stack underflow.\n";
    }
    else
    {
        cout <<"\n elements are: \n";
        for ( i = front; i <= rear; i++)
        {
            cout << que[i] << "\n";
        }
    }
    
}

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