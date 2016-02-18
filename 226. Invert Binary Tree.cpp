/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 
struct TreeNode* invertTree(struct TreeNode* root) {
    struct TreeNode *tempNode;
    if(NULL == root)
        return root;
        
    tempNode = root->left;
    root->left = root->right;
    root->right = tempNode;
    
    invertTree(root->left);
    invertTree(root->right);
    
    return root;
}