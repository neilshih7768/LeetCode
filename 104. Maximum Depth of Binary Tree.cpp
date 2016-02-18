/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

 
 int Max(int a, int b) {
     return (a > b) ? (a) : (b);
 }
 
 int Search(struct TreeNode* node) {
    int left  = 0;
    int right = 0;
    
    if(node->left != NULL) {
        left += 1;
        left += Search(node->left);
    }
        
    if(node->right != NULL) {
        right += 1;
        right += node->right;
    }
    
    return Max(left, right);
 }
 
int maxDepth(struct TreeNode* root) {
    return Search(root);
}