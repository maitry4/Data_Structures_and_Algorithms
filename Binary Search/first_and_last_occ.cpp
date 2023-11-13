#include<iostream>
#include<vector>
using namespace std;
int firstOcc(vector<int>&a, int n, int k)
{
    int s = 0;
    int e = a.size() - 1;
    int mid = s + (e-s) / 2;
    int ans = -1;
    while(s<=e)
    {
        if(a[mid]==k)
        {
            ans = mid;
            e=mid-1;
        }
        else if(a[mid]<k)
        {
            s = mid + 1;
        }
        else if(a[mid]>k)
        {
            e = mid - 1;
        }
        mid = s + (e-s) / 2;
    }
    return ans;
}
int lastOcc(vector<int>&a, int n, int k)
{
    int s = 0;
    int e = a.size() - 1;
    int mid = s + (e-s) / 2;
    int ans = -1;
    while(s<=e)
    {
        if(a[mid]==k)
        {
            ans = mid;
            s=mid+1;
        }
        else if(a[mid]<k)
        {
            s = mid + 1;
        }
        else if(a[mid]>k)
        {
            e = mid - 1;
        }
        mid = s + (e-s) / 2;
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int, int> p; 
    
    p.first= firstOcc(arr, n, k);
    p.second= lastOcc(arr, n, k);
    
    return p;

}
