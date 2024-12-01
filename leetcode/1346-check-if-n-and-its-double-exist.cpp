/*
 * 1346. Check If N and Its Double Exist
 * Difficulty: Easy
 * 
 * Given an arrayarrof integers, check if there exist two indicesiandjsuch that :i != j0 <= i, j < arr.lengtharr[i] == 2 * arr[j]Example 1:Input:arr = [10,2,5,3]Output:trueExplanation:For i = 0 and j = 2, arr[i] == 10 == 2 * 5 == 2 * arr[j]Example 2:Input:arr = [3,1,7,11]Output:falseExplanation:There is no i and j that satisfy the conditions.Constraints:2 <= arr.length <= 500-103<= arr[i] <= 103
 */

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
                if(i!=j && arr[i]==2*arr[j]){
            }
        }
                    cout<<i<<j<<endl;
                }
    }
        return false;
                    return true;
};