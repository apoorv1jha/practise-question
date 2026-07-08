class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int>ans(n,0);
        stack<int>st;
        // vector<stack>st;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(temperatures[j]>temperatures[i]){
        //             ans[i]=j-i;
        //             break;
        //         }
        //     }
        // }
        // return ans;

       for(int i=0;i<n;i++){
        while(!st.empty() && temperatures[i]>temperatures[st.top()]){
        int idx = st.top();
        st.pop();
        ans[idx]=i-idx;
        }
        st.push(i);
       }
       return ans;
    }
};