class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
       int n = pushed.size();
       int m = popped.size();

    //    int  i=0,j=0;
    //    for(int x=0;x<pushed.size();x++){
    //     pushed[i++]=pushed[x];

    //     while(i-1>=0 &&j<m && pushed[i-1]==popped[j]){
    //         i--;
    //         j++;
    //     }
    //    }
    int j =0;
    stack<int>st;
    for(int i=0;i<n&&j<m;i++){
        st.push(pushed[i]);
        
        while(!st.empty() && j<m && st.top()==popped[j]){
            st.pop();
            j++;
        }
    }
       return j==m;
    }
};