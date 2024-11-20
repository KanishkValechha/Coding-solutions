/*
 * 2461. Maximum Sum of Distinct Subarrays With Length K
 * Difficulty: Medium
 * 
 * You are given an integer arraynumsand an integerk. Find the maximum subarray sum of all the subarrays ofnumsthat meet the following conditions:The length of the subarray isk, andAll the elements of the subarray aredistinct.Returnthe maximum subarray sum of all the subarrays that meet the conditions.If no subarray meets the conditions, return0.Asubarrayis a contiguous non-empty sequence of elements within an array.Example 1:Input:nums = [1,5,4,2,9,9,9], k = 3Output:15Explanation:The subarrays of nums with length 3 are:
- [1,5,4] which meets the requirements and has a sum of 10.
- [5,4,2] which meets the requirements and has a sum of 11.
- [4,2,9] which meets the requirements and has a sum of 15.
- [2,9,9] which does not meet the requirements because the element 9 is repeated.
- [9,9,9] which does not meet the requirements because the element 9 is repeated.
We return 15 because it is the maximum subarray sum of all the subarrays that meet the conditionsExample 2:Input:nums = [4,4,4], k = 3Output:0Explanation:The subarrays of nums with length 3 are:
- [4,4,4] which does not meet the requirements because the element 4 is repeated.
We return 0 because no subarrays meet the conditions.Constraints:1 <= k <= nums.length <= 1051 <= nums[i] <= 105
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