class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
      if(root==NULL)  return NULL;
  
      // Check if its NULL return NULL;
         then swap(root->left and root->right)
         // then recursively call for lower levels
      swap(root->left,root->right);
      invertTree(root->left);
      invertTree(root->right);
      return root;   
    }
};
