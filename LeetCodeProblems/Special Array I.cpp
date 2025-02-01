// Problem Link
// https://leetcode.com/problems/special-array-i/


// Source Code

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        bool flag = true;
        
        for(int i = 0;i < nums.size()-1;i++){
            if((nums[i]%2 == 0 && nums[i+1]%2 == 0) || (nums[i])%2 == 1 && nums[i+1]%2 == 1){
                flag = false;
            }
        }
        
        return flag;
        
    }
};