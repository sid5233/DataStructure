
#include <iostream>
using namespace std;

void swap(int arr[], int asize)
{
    int low=0;
    int mid = 0;
    int high = asize-1;

    while (mid <=high)
    {
        switch(arr[mid])
        {
        case 0 :
         swap(arr[low++],arr[mid++]);
            break;
        case 1 :
           mid++;
           break; 
        case 2 :
            swap(arr[mid],arr[high--]);
         }    
    }
}
void print(int arr[], int asize)
{
    for (int i=0;i< asize; i++)
        cout << arr[i] << " ";
}
int main() {
int arr[10]={0,2,2,1,1,1,2,1,2,1};
   int n = sizeof(arr)/sizeof(arr[0]);
   swap(arr,n);
   print(arr,n);
    return 0;
}
