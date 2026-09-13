class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        int ans = 0 ;
        for(int dx = -(n-1);dx<=(n-1); dx++){
            for(int dy = -(n-1);dy<=(n-1);dy++){
                int count = 0;
                for(int i=0;i<n;i++){
                    for(int  j=0;j<n;j++){
                        if(img1[i][j]==1){
                            int n1 = i+dx;
                            int n2 = j+dy;
                            if(n1>=0 && n1<n && n2>=0 && n2<n){
                                if(img2[n1][n2]==1){
                                    count++;
                                }
                            }
                        }
                    }
                }
                ans = max(ans,count);
            }
        }
        return ans;
    }
};