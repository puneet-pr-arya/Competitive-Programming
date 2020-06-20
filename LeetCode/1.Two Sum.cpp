class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int> arr;
        int sumCheck =0;
        for(int i=0; i<=nums.size()-2;i++){
            for(int j=i+1; j<=nums.size()-1;j++){
                sumCheck=nums.at(i)+nums.at(j);
                if(sumCheck == target){
                   arr.push_back(i);
                     arr.push_back(j);
                }
            }
            
            
        }
        return arr;
    }
};