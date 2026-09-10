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
int ans =0;
    pair<int,int> f(TreeNode * root){
        if(root ==NULL){
             return {0,0};
        }
        auto [ls,lc]=f(root->left);auto [rs,rc]=f(root->right);
        int sum = ls+rs+root->val;int div=lc+rc+1;
        if(sum/div == root->val)ans++;
        return {sum,div};
    }
    int averageOfSubtree(TreeNode* root) {
        f(root);
        return ans ;
    }
};