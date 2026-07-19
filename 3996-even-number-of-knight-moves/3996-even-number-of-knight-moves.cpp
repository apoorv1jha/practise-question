class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int moves = abs(start[0]-target[0])+abs(start[1]-target[1]);
        if(moves%2==0){
            return true;
        }
        return false;
    }
};