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

void invert_recursion(TreeNode *root)
{
    if(root==NULL)
        return;
    invert(root->left);
    invert(root->right);
    swap(root->left,root->right);
}

void invert_iterative(TreeNode *root)
{
    queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode *temp=q.front();
                q.pop();
            swap(temp->left,temp->right);
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
            
        }
}
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
        invert_recursion(root);
        //invert_iterative(root);
        return root;
    }
};
