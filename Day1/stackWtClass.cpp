 #include <iostream> 
using namespace std;

class stack
{
    int stck[10];
    int tos;

    public :
        void init();
        void push(int);
        int pop();
};
void stack :: init(){
    tos = 0;
}
void stack :: push(int i){
    if (tos==10)
        cout << "The stack is full";
        return ;
    stck[tos]=i;
    tos++;
}
int stack :: pop()
{
    if (tos==0)
    {
        cout<< "Stack is empty.";
        return 0;
    }
    tos--;
    return stck[tos];
}
int main(){
    stack stack1,stack2;

    stack1.init();
    stack2.init();

    stack1.push(1);
    stack1.push(2);

    stack1.push(3);
    stack1.push(4);

    cout << stack1.pop() << "\n ";
    cout << stack1.pop() << " ";
    cout << stack2.pop() << " ";
    cout << stack2.pop() << "\n";

    return 0;

}