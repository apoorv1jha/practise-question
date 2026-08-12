class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int maxlen = 0;
        int j = 0;
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;

            while(freq[nums[i]]>k){
                freq[nums[j]]--;
                j++;
            }
            maxlen = max(maxlen,i-j+1);
        }
        return maxlen;
    }
};