class Solution {

    bool isSameTree(TreeNode *a,TreeNode *b)
    {
        if(a==NULL and b==NULL)
        {
            return true;
        }
        if(a==NULL and b!=NULL)
        {
            return false;
        }
        if(a!=NULL and b==NULL)
        {
            return false;
        }

        return (a->val==b->val) and isSameTree(a->left,b->left) and isSameTree(a->right,b->right);


    }

public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // check kro ki root ki agar empty hai to machud gyi
        if(root==NULL)
        return false;


        //Check kro ki yh same tree hai ki nahi
        if(isSameTree( root, subRoot))
        return true;

        //wrna left yaa right me call krdo jis bhi jgh se miljae true;
        return isSubtree(root->left,subRoot) ||isSubtree(root->right,subRoot); 

    }
};
