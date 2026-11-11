class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n= nums.size();
        vector<int> freq(n+1,0);
        int missing = 0;
        int repeat = 0;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(freq[i] > 1){
                repeat = i;
            }
            if(freq[i] == 0){
                missing = i;
            }
        }
        return {repeat,missing};
    }
};