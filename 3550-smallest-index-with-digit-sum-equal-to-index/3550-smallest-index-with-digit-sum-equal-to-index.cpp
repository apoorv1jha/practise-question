class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int x = nums[i];
            int sum = 0;
            while(x>0){
                int y = x%10;
                sum+=y;
                x/=10;
            }
            if(sum == i){
                return sum;
            }
        }
        return -1;
    }
};