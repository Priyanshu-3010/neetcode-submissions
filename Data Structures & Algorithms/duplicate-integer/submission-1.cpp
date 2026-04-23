class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    //    int i = 0;
    //    int j = 1;
    bool yes = false;

       for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]==nums[j]){
                return true;
            }
        }
       }
       return yes; 
    }
};