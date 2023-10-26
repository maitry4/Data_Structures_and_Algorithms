// #include<iostream>
// #include<conio.h>
// using namespace std;
// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void swap_altr(int arr[], int n) {
//     int i;
//     for(i=0; i<n; i+=2) {
//         if((i+1)<n)
//         {
//             int t = arr[i];
//             arr[i] = arr[i+1];
//             arr[i+1] = t;
//         }
//     }
// }
// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int arr2[6] = {1, 2, 3, 4, 5, 6};
//     printArray(arr, 5);
//     swap_altr(arr, 5);
//     printArray(arr, 5);

//     printArray(arr2, 6);
//     swap_altr(arr2, 6);
//     printArray(arr2, 6);
//     return 0;
// }
// Solved using while loop
#include<iostream>
using namespace std;
void printArray(int arr[], int size) {
    cout<<endl;
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swap_alt(int arr[], int size) {
    int i = 0, j = 1;
    while(j<size) // (i+1 <size)
    {
        swap(arr[i], arr[j]); // swap(arr[i], arr[i+1]);
        i+=2;
        j+=2;
    }
}
int main()
{
    int a[5] = {0,1,2,3,4};
    int b[6] = {0,1,2,3,4,5};
    swap_alt(a, 5);
    printArray(a, 5);
    swap_alt(b, 6);
    printArray(b, 6);
    return 0;
}