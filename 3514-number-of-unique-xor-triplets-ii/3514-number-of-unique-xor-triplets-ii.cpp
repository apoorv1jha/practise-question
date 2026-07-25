class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_set<int>pair;
        unordered_set<int>triplet;
        int n = nums.size();
        // exp- 6^6 = 0 && 6^6^7=7
        // pehle iske pair ka xor nikalo then iske pair k saath baaki number ka xor nikal lo
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                pair.insert(nums[i]^nums[j]);
            }
        }
        for(int x:pair){
            for(int num:nums){
                triplet.insert(x^num);
            }
        }
        return triplet.size();
    }
};