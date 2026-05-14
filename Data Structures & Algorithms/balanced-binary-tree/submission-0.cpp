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

    int depth(TreeNode* root){
        if( !root ) return 0 ;

        int leftDepth = depth( root->left );
        int rightDepth = depth( root->right );

        // if already inbalabced
        if( leftDepth==-1 || rightDepth==-1 )
            return -1 ;

        // 當前 node 不平衡
        if ( abs(leftDepth - rightDepth) > 1 )
            return -1;

        return  max(leftDepth, rightDepth) + 1 ;                                                                 
    }

    bool isBalanced(TreeNode* root) {
        return !( depth(root) == -1 );
    }
};
