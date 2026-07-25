class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int x =0;
        int y =0;
        int n = nums.size();
        for(int i=1;i<=n;i++){
            int count = 0;
            for(int j=0;j<n;j++){
                if(nums[j]==i){
                    count++;
                }
            }
            if(count ==2){
                x =i; 
            }
            if(count ==0){
                y = i;  
            }
        }
        return {x,y};
    }
};




// class Solution {
// public:
//     vector<int> findErrorNums(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> result(2);
//         vector<bool> seen(n+1, false);

//         for (int num : nums) {
//             if (seen[num]) {
//                 result[0] = num; // duplicate
//             }
//             seen[num] = true;
//         }

//         for (int i = 1; i <= n; i++) {
//             if (!seen[i]) {
//                 result[1] = i; // missing
//                 break;
//             }
//         }

//         return result;
//     }
// };
