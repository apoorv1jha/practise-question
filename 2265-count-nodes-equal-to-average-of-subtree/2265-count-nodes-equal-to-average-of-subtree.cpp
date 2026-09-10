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
    int sum(TreeNode* root,int & count){
        if(root == nullptr){
            return 0;
        }
        int left = sum(root->left,count);
        int right = sum(root->right,count);
        count++;
        return left+right+root->val;
    }
    int averageOfSubtree(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        int count = 0;
        int total = sum(root,count);
        int ans = 0;
        if(total/count == root->val){
            ans =1;
        }
        
        return ans + averageOfSubtree(root->left) + averageOfSubtree(root->right);
    }
};