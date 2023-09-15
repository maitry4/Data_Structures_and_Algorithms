#include<iostream>
#include<conio.h>
using namespace std;
int findUnique(int arr[], int n) {
    int unique = 0;
    for(int i=0; i<n; i++) {
        unique = unique ^ arr[i];
    }
    return unique;
}
int main() {
    int arr[7] = {2, 3, 1, 1, 3, 6, 2};
    cout<<findUnique(arr, 7);
    return 0;
}