class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = 0;
        vector<bool>ans;
        for(int i=0;i<candies.size();i++){
            if(candies[i] > max){
                max = candies[i];
            }
        }
        for(int j=0;j<candies.size();j++){
            if((candies[j] + extraCandies) >= max){
                ans.push_back(1);
            }else{
                ans.push_back(0);
            }
        }
        return ans;
    }
};