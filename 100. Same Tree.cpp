/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(NULL == p && NULL == q)
        return true;
    
    if(NULL == p)
        return false;
        
    if(NULL == q)
        return false;
    
    if(p->val != q->val)
        return false;
    
    if(false == isSameTree(p->left, q->left))
        return false;
        
    if(false == isSameTree(p->right, q->right))
        return false;
        
    return true;
}