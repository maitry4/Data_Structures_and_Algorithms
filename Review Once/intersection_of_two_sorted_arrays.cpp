// https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149?
#include<iostream>
#include<vector>
using namespace std;
// This was a good and an easy problem but I'll look at it once again so I add it to a new category.
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i = 0, j = 0;
	vector<int> intersection;
	while(i<n && j<m) {
		if(arr1[i]==arr2[j]) {
			intersection.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr1[i]<arr2[j]) {
			i++;
		}
		else {
			j++;
		}
	}
	return intersection;
}
int main()
{
    vector<int> a1{1,2,2,2,3,4};
    vector<int> a2{2,2,3,3};

    vector<int> ans = findArrayIntersection(a1, 6, a2, 4);
    for(int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}