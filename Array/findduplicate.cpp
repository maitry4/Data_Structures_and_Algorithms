// https://www.codingninjas.com/studio/problems/duplicate-in-array_893397?
// It's quite similar to find_unique
#include<iostream>
#include<vector>
using namespace std;
int finddup(vector<int> arr, int n) {
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans ^= arr[i];
        if((i+1)!=arr.size())
        {
            ans^=(i+1);
        }
    }
    return ans;
}
int finddup_another(vector<int> arr, int n)
{
    for(int i=0;i<arr.size();i++)
	{
		int ind = arr.size()-abs(arr[i]);
		if(arr[ind]<0)
		{
			return abs(arr[i]);
		}
		arr[ind]*=-1;
	}
}
int main() {
    vector<int> a{1,2,3,4,3,5};
    cout<<finddup_another(a, 6);
    return 0;
}