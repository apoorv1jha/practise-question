class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int hi = *max_element(piles.begin(),piles.end());
        while(l<hi){
            int mid = l+(hi-l)/2;
            int hr = 0;
            for(int pile:piles){
                hr += (pile+mid-1)/mid;
            }
            if(hr<=h){
                hi = mid;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
};