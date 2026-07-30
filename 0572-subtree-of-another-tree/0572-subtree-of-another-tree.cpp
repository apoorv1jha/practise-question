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
    bool isidentical(TreeNode* p,TreeNode* q){
        if(p==nullptr && q==nullptr){
            return true;
        }
        if(p==nullptr || q==nullptr){
            return false;
        }
        return p->val==q->val &&
        isidentical(p->left,q->left) && isidentical(p->right,q->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root== nullptr || subRoot == nullptr){
            return root == subRoot;
        }
        if(root->val==subRoot->val && isidentical(root,subRoot)){
            return true;
        }

        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
         
    }
};