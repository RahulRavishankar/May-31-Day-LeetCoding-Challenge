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
    int parentx=-1; int parenty=-2; 
    int depthx=0, depthy=0;
    bool search(TreeNode* root, int parent,int depth,int val,int &fparent, int &fdepth)
    {
        if(root==NULL)
            return false;
        if(root->val==val)
        {
            fparent=parent;
            fdepth=depth;
            return true;
        }
    
        if(search(root->left,root->val,depth+1,val,fparent,fdepth))
            return true;
        
        return search(root->right,root->val,depth+1,val,fparent,fdepth);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        
        search(root,-1,0,x,parentx,depthx);  
        search(root,-2,0,y,parenty,depthy);
        
        if(depthx==depthy && parentx!=parenty)
            return true;
        
        return false;
    }
};
