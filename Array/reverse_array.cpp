#include<iostream>
using namespace std;
//To reverse a given array.
void rev_arr(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;
    while(start<=end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[10] = {1,2,3,4,5,-6,7,12,-10,10};
    rev_arr(arr, 10);
    for(int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}