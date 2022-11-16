class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                return i;
            }
           if(nums[i]>target){
                return i;
            }
            if((i==nums.size()-1)&& target>nums[i]){
                return i+1;
            }
        }
        return 0;
    }
};
