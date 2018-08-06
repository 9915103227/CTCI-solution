TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t1==NULL&&t2==NULL)
        {
            return NULL;
        }
        if(t1==NULL)
        {
            return t2;
        }
        if(t2==NULL)
            return t1;
        struct TreeNode *tmp=(struct TreeNode *)malloc(sizeof(struct TreeNode));
        tmp->val=t1->val+t2->val;
        tmp->left=mergeTrees(t1->left,t2->left);
        tmp->right=mergeTrees(t1->right,t2->right);
        return tmp;
    }
