class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n= arr.size()-1;
        for(int i=0;i<arr.size();i++){
            int max = 0;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]>max){
                    max = arr[j];
                }
            }
            arr[i] = max;
        }
        arr[n] = -1;
        return arr;
    }
};