class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int>st;
       heights.push_back(0);
    int mxarea=0;
        for(int i=0;i<heights.size();i++){
            while(!st.empty() && heights[i] <heights[st.top()]){
                int height=heights[st.top()];
                st.pop();
                int width;
                if(st.empty()){
                    width = i;
                }else{
                    width = i-st.top()-1;
                }
                mxarea = max(mxarea,height*width);
            }
            st.push(i);
        }
        return mxarea;
    }
};