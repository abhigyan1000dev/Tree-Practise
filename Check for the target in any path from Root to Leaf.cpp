/
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;

        if(targetSum==root->val and  root->left==NULL and root->right==NULL)
        {
            return true;
        }

        return hasPathSum(root->left,targetSum-root->val)  or hasPathSum(root->right,targetSum-root->val);

    }
};


//Steps to Approach

1.  if root==NUll return false;
2.    Base case yh ( if meri leaf node ho aur us node ki value aur target ki value same hogi to mtlb match hogya  jo ham baar baar TargetSum - root->val kr rhe hai)
  3.  calll recursive jahan se match kra jae ya to left subTree ya to rightSubTree
