class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // int sum =0 ;
        // for(int i=0;i<n;i++){
        //    for(int j=i+1;j<n;j++){
        //     sum = nums[i]+nums[j];
        //     if(sum ==target){
        //         return {i,j};
        //     }
        //    }
        // }
        // return {};
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int comp = target - nums[i];
            if(mp.find(comp)!=mp.end()){
                return {mp[comp],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};