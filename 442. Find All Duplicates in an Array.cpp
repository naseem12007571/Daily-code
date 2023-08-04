class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // vector created ans
        vector<int>ans;
        // element sort
        sort(nums.begin(),nums.end());

        for(int i=1;i<nums.size();i++){
            //campare element
            if(nums[i-1]==nums[i]){
                ans.push_back(nums[i]);
            }
        }
         return ans;
    }
    
};
