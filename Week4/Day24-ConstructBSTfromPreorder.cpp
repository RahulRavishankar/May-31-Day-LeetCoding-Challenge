/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* newNode(int key)
    {
        TreeNode* node = new TreeNode;
        node->val = key;
        node->left = node->right = NULL;

        return node;
    }
    TreeNode* bstFromPreorderUtil(vector<int> &preorder,int &preIndex, int low, int high, int size)  
    {  
        // Base case  
        if (preIndex >= size || low > high)  
            return NULL;  

        // The first node in preorder traversal is root. So take the node at  
        // preIndex from pre[] and make it root, and increment preIndex  
        
        TreeNode* root = newNode( preorder[preIndex] );
        preIndex++;  

        // If the current subarry has only one element, no need to recur  
        if (low == high)  
            return root;  

        // Search for the first element greater than root  
        int i;  
        for ( i = low; i <= high; ++i )  
            if ( preorder[ i ] > root->val )  
                break;  

        // Use the index of element found in preorder to divide  
            // preorder array in two parts. Left subtree and right subtree  
        root->left = bstFromPreorderUtil ( preorder, preIndex, preIndex,  
                                             i - 1, size );  
        root->right = bstFromPreorderUtil ( preorder, preIndex, i, high, size );  

        return root;  
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n=preorder.size();
        int preIndex=0;
        return bstFromPreorderUtil(preorder,preIndex,0,n-1,n);
    }
};
