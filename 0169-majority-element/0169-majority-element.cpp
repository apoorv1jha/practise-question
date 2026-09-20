class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();

        //brute-force
        // for(int i=0;i<n;i++){
        // int count =0;
        //     for(int j=0;j<n;j++){
        //         if(nums[i]==nums[j]){
        //             count++;
        //         }
        //     }
        //     if(count>n/2){
        //         return nums[i];
        //     }
        // }
        //     return 0;

        // hashing
        // unordered_map<int,int>mp;
        // for(int num:nums){
        //     mp[num]++;
        // }
        // for(auto & it:mp){
        //     if(it.second>n/2)
        //     return it.first;
        // }
        // return -1;

        // boyer-moore problem
        int count =0;
        int elm ;
        for(int i=0;i<n;i++){
            if(count==0){
                count =1;
                elm = nums[i];
            }
            else if(elm == nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        int count1=0;
        for(int i=0;i<n;i++){
            if(nums[i]==elm){
                count1++;
            }
        }
        if(count1>n/2){
            return elm;
        }
        return -1;
    }
};