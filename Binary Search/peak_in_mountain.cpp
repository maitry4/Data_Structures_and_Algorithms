#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;
        int mid = start + ((end-start) / 2);
        
        while(start < end)
        {   
            if(arr[mid]<=arr[mid + 1])
            {
                start = mid + 1;
            }
            else if(arr[mid]>arr[mid + 1])
            {
                if(arr[mid]>arr[mid - 1])
                {
                    return mid;
                }
                end = mid - 1;
            }
            mid = start + ((end-start) / 2);
        }
        // To handle if the last element in the array is peak
        return mid;
}
int main()
{
    vector<int> a{0,10,5,2};
    int ans = peakIndexInMountainArray(a);
    cout<<ans<<endl;
    return 0;
}
