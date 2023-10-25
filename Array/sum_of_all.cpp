#include<iostream>
using namespace std;
// This will find sum of all the elements in an array.
int sum_array(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[10];
    fill_n(arr, 10, 5);
    
    int summation = sum_array(arr, 10);
    cout<<"Sum of all elements = "<<summation<<endl;
    return 0;
}