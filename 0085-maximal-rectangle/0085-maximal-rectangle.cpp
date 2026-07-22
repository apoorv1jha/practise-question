class Solution {
public:
    int largestarea(vector<int>& heights){
        int n= heights.size();
        stack<int>st;
        heights.push_back(0);
        int maxarea=0;
        for(int i=0;i<heights.size();i++){
            while(!st.empty() && heights[i]<heights[st.top()]){
                int height = heights[st.top()];
                st.pop();
                int width ;
                if(st.empty()){
                    width =i;
                }else{
                    width = i-st.top()-1;
                }
                maxarea = max(maxarea,height*width);
                
            }
            st.push(i);
        }
        return maxarea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty()){
            return 0;
        }
        int n = matrix[0].size();
        vector<int>heights(n,0);
        int maxarea =0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]=='1'){
                    heights[j]+=1;
                }else{
                    heights[j]=0;
                }
            }
            maxarea = max(maxarea,largestarea(heights));
        }
        return maxarea;
    }
};