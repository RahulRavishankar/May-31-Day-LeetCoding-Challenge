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
    void inorder(TreeNode* root,int k,int &val,int &curr)
    {
        if(root!=NULL)
        {
            inorder(root->left, k, val, curr);
            ++curr;
            if(curr==k)
            {
                val=root->val;
                return;
            }
            //printf("%d ",root->val); 
            
            inorder(root->right,k, val, curr);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        
        int curr=0;
        int val=-1;
        inorder(root,k,val,curr);
        return val;
    }
};
