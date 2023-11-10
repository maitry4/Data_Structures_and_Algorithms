#include<iostream>
using namespace std;
// Got to learn about integer overflow.
// if any of start or end is 2^31-1 then the sum would exceed the range of integer.
// that is why, instead of using (start+end)/2 
// start + ((end - start) / 2) is used
int binarySearch(int arr[], int size, int key)
{
    int start = 0, end = size-1;
    int mid = start + ((end - start) / 2);
    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return -1;
}
int main()
{
    int odd[] = {1,3,5,7,9};
    int even[] = {2,4,6,8,10,12};

    int ans = binarySearch(odd, 5, 7);
    cout<<ans<<endl;
    ans = binarySearch(even, 6, 7);
    cout<<ans<<endl;
    ans = binarySearch(even, 6, 10);
    cout<<ans<<endl;
    return 0;
}