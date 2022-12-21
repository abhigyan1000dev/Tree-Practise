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
    int height(TreeNode *root)
    {
        if(root==NULL) return 0;
        return 1+ max(height(root->left),height(root->right));
    }
    bool isBalanced(TreeNode* root) {
        bool flag=false;
        if(root==NULL)
        return true;

        int hLeft=height(root->left);
        int hRight=height(root->right);

        if(abs(hRight-hLeft)<=1 and isBalanced(root->left) and isBalanced(root->right))
       {
        flag=true;
       return flag;
        
       }


       return flag;
    }
};
