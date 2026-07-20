class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
 
        // brute force 3 loops :-

        // set<vector<int>> st;
        // for(int i=0;i<n;i++){
        //     // int sum = 0;
        //     // int k = 2;
        //     for(int j=i+1;j<n;j++){
        //         for(int k=j+1;k<n;k++){
        //             if(nums[i]+nums[j]+nums[k]==0){
        //                 vector<int> temp = {nums[i],nums[j],nums[k]};
        //                 sort(temp.begin(),temp.end());
        //                 st.insert(temp);
        //             }                 
        //         }
        //     }
        // }
        // vector<vector<int>> result(st.begin(),st.end());
        // return result;

        // optimal 2 pointer approch :-
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){

            // handling duplicates
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int left = i+1;
            int right = n-1;

            while(left<right){
                int sum = nums[i]+nums[left]+nums[right];
                if(sum<0){
                    left++;
                }
                else if(sum>0){
                    right--;
                }
                else{
                    ans.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;

                    while(left<right && nums[left]==nums[left-1]){
                        left++;
                    }

                    while(left<right && nums[right]==nums[right+1]){
                        right--;
                    }

                }
            }

        }
        return ans;
    }
};
