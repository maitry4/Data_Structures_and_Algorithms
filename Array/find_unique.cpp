// #include<iostream>
// #include<conio.h>
// using namespace std;
// int findUnique(int arr[], int n) {
//     int unique = 0;
//     for(int i=0; i<n; i++) {
//         unique = unique ^ arr[i];
//     }
//     return unique;
// }
// int main() {
//     int arr[7] = {2, 3, 1, 1, 3, 6, 2};
//     cout<<findUnique(arr, 7);
//     return 0;
// }
#include<iostream>
using namespace std;
int findUnique(int arr[], int size) {
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }
    return ans;
}
int main() {
    int a[9] = {1,1,2,3,4,3,4,5,5};
    cout<<findUnique(a, 9);
    return 0;
}