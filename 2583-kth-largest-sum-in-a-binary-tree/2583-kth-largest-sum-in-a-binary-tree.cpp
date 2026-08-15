/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        if(root==nullptr){
            return -1;
        }
        queue<TreeNode*>q;
        q.push(root);
        vector<long long> levelsum;
            
        while(!q.empty()){
            long sum =0;
            int size = q.size();
            for(int i=0;i<size;i++){
            TreeNode* x = q.front();
            q.pop();
               
                    sum+=x->val;
                
                if(x->left!=nullptr){
                    q.push(x->left);
                }
                if(x->right!=nullptr){
                    q.push(x->right);
                }
            }
                levelsum.push_back(sum);
        }
         if(levelsum.size() < k)
            return -1;
        sort (levelsum.rbegin(),levelsum.rend());
            return levelsum[k-1];
    }
};