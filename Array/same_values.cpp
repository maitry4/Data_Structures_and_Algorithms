#include<iostream>
using namespace std;
//To fill whole array with a non-zero value.
int main()
{
    int arr[10];
    fill_n(arr, 10, 5);
    
    for(int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}