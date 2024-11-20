/*
 * 2461. Maximum Sum of Distinct Subarrays With Length K
 * Difficulty: Medium
 */

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int 
k) {
       long long sum=0;
       int n=nums.size();
       set<int>x;
       int l=0,r=0;
       long long maxS=0;
       while(r<n){
        sum+=nums[r];
        if(x.find(nums[r])!=x.end()){
            while(nums[l]!=nums[r]){
                x.erase(nums[l]);
                sum-=nums[l];
                l++;
            }
            sum-=nums[l];
            l++;
        }
        else if((r-l+1)==k){
            cout<<r<<" "<<sum<<endl;
            x.insert(nums[r]);
            maxS=max(sum,maxS);
            x.erase(nums[l]);
            sum-=nums[l];
            l++;
        }
        else{
            x.insert(nums[r]);
        }
        r++;
       }
       return maxS;
    }
};