#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};
node * front = NULL;
node * rear = NULL;

int isempty(){
    if (front == NULL && rear == NULL)
    return 1;
    else 
    return 0;
}

void enqueue(int input){
    struct node * newnode = new node ();
        newnode -> data = input;
        newnode ->next = NULL;
    if (front == NULL )
       {
           front == newnode;
           rear == newnode;
       }
    else
    {
        rear -> next = newnode;
        rear = newnode;
   }
}
void dequeue(){
    int res = isempty();
    if (res == 1)
{ cout << "Queue is empty, \n"; }
  
  else if(front==rear){
      front = rear = NULL;
  }
  
  else 
  {
      node * ptr = front;
      front = front ->next;
  }
}
void displayQueue(){
     int res = isempty();
    if (res == 1)
    {
        cout << "Queue is empty.";
    }
    else {
        node *ptr = front;
        while (ptr!=NULL)
        {
            cout << ptr -> data;
            ptr = ptr->next;
        }
    }
}
int main()
{
 int choice, flag=1, value;
 while( flag == 1)
 {
        cout<<endl<<"Select An Operation : ";
    	cout<<endl<<"1. Enqueue  "<<endl;
    	cout<<"2. Dequeue"<<endl;
    	cout<<"3. Display"<<endl;
    	cout<<"4. Exit"<<endl;
  cin>>choice;
  switch (choice)
  {
  case 1: cout<<"Enter Value:\n";
          cin>>value;
          enqueue(value);
          break;
  case 2: dequeue();
          break;
  case 3: displayQueue();
          break;
  case 4: flag = 0;
          break;

  }
 }

 return 0;
}
