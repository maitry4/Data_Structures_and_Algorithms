#include<iostream>
#include<conio.h>
using namespace std;
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swap_altr(int arr[], int n) {
    int i;
    for(i=0; i<n; i+=2) {
        if((i+1)<n)
        {
            int t = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = t;
        }
    }
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[6] = {1, 2, 3, 4, 5, 6};
    printArray(arr, 5);
    swap_altr(arr, 5);
    printArray(arr, 5);

    printArray(arr2, 6);
    swap_altr(arr2, 6);
    printArray(arr2, 6);
    return 0;
}