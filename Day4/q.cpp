#include <iostream>

using namespace std;

class queue{
    private :
        int front;
        int rear;
        int arr[5];

    public :
        queue(){
            front=0;
            rear=0;
            for (int i=0;i<6;i++)
            {
                arr[i]=0;
            }
        }
};
