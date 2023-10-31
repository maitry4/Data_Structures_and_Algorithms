#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
// FOR NOW I FOUND A BRUTE FORCE SOLUTION FOR THE PROBLEM BUT I WANT TO AIM TO GO ADVANCED.
// SO I AM ADDING IT TO REVIEW ONCE.
// https://www.codingninjas.com/studio/problems/triplets-with-given-sum_893028?
/*you are given an array/list arr consisting of n integers. your task is to find all th distinct triplets present in the array which adds up to a given number K. An array is said to have a triplet with sum = 'K' if there exists three indices i,j,k such that i!=j, j!=k and i!=j */
// I solved this question this way but it exceeds the time limits.
// Through GPT I got an insight to do it with *TWO POINTER* approach.
// I'll try it tomorrow with a fresh mind.
// I'll also try to improve pairsum question.
vector<vector<int>> findTriplets(vector<int>arr, int n, int K)
{
    /*vector<vector<int>> ans;
    set<vector<int>> unique;
    for(int i = 0; i <arr.size(); i++)
    {
        for(int j = (i+1); j <arr.size(); j++)
        {
            for(int k = (j+1); k <arr.size(); k++)
            {
                if(arr[i]+arr[j]+arr[k] == K)
                {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    unique.insert(temp);
                }
            }
        }
    }
    ans.assign(unique.begin(), unique.end());
    return ans;*/
    // Two pointer approach.
    // instead of running a whole new loop we keep going here as we did in pair sum approach.
    // there we looked for pair and here we look for a triplet.
    vector<vector<int>> ans;
    set<vector<int>> unique;
    sort(arr.begin(), arr.end());
    for(int i = 0; i <arr.size(); i++)
    {
        int left = i+1;
        int right = arr.size()-1;
        
        while(left<right)
        {
            if(arr[i]+arr[left]+arr[right] == K)
            {
                vector<int> temp = {arr[i], arr[left], arr[right]};
                unique.insert(temp);
                left++;
                right--;
            }
            else if(arr[i]+arr[left]+arr[right] > K)
            {
                right--;
            }
            else if(arr[i]+arr[left]+arr[right] < K)
            {
                left++;
            }
        }
    }
    ans.assign(unique.begin(), unique.end());
    return ans;
}
int main()
{
    vector<int> arr{1,2,3,1,2,3};
    vector<vector<int> > ans = findTriplets(arr,6, 6);
    for (const vector<int>& triplet : ans) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}