
class Solution {


public:
    bool compareVal(TreeNode *a,TreeNode *b)
    {
        if(a->val==b->val)
        return true;

        return false;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL and q!=NULL)
         {    
        return false;
         }
        if(p!=NULL and q==NULL)
        {
            return false;
        }
        if(p==NULL and q==NULL)  return true;
        
       return  compareVal(p,q) and isSameTree(p->left,q->left) and isSameTree(p->right,q->right);
    }
};
