class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0;
        int right = height.size()-1;
        int res = 0;
      
        while(left<right){
           int store = min(height[left],height[right])*(right- left);
            res = max(res,store);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return res;
    }
};