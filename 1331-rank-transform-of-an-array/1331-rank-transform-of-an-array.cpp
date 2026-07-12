class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans=arr;
        sort(ans.begin(),ans.end());
        
        unordered_map<int,int> mp;
        int rank =1;
        for(int x: ans){
            if(mp.find(x)==mp.end()){
                mp[x]=rank;
                rank++;
            }
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=mp[arr[i]];
        }
        return arr;
    }
};