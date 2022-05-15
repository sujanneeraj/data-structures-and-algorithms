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
    int deepestLeavesSum(TreeNode* root) {
     
        int sum = 0;
        
        queue<TreeNode *> Q;
        Q.push(root);
        
        while(!Q.empty()) {
            
            int size = Q.size();
            sum = 0;
            
            for(int i = 0;  i < size; i++) {
                
                auto front = Q.front();
                Q.pop();
                
                sum += front->val;
                
                if(front->left) {
                    Q.push(front->left);
                }
                
                if(front->right) {
                    Q.push(front->right);
                }
                
            }
        }
        
        return sum;
        
        
        
        
    }
};