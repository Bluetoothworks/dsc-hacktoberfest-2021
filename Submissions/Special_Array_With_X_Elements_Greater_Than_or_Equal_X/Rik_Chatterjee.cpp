#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        int cur = 0;
        for(int x = 0; x <= n; ++x){
            while(cur < n && nums[cur] < x){
                ++cur;
            }
            
            if(n-cur == x) return x;
        }
        
        return -1;
    }
};
int main()
{
    Solution ob;
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        a.push_back(k);
    }
    int l=ob.specialArray(a);
    if(l!=-1)
        cout<<l;
    else    
        cout<<"Element not found";
}