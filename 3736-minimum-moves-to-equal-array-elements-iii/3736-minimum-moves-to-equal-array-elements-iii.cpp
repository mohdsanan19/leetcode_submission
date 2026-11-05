class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max = INT_MIN;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] >= max){
                max = nums[i];
            }
        }
        for(int j=0;j<nums.size();j++){
            while(nums[j] < max){
                nums[j] += 1;
                count++;
            }
        }
        return count;
    }
};