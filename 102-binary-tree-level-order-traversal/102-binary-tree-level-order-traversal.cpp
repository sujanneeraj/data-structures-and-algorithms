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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        
        if(root == nullptr) {
            return {};
        }
        
        queue<TreeNode *> Q;
        vector<vector<int>> result;
        Q.push(root);
        
        while(!Q.empty()) {
            int n = Q.size();
            vector<int> temp;
            for(int i = 0; i < n; i++) {
                TreeNode *front = Q.front();
                Q.pop();
                temp.push_back(front->val);
                if(front->left) {
                    Q.push(front->left);
                }
                if(front->right) {
                    Q.push(front->right);
                }
            }
            
            
            result.push_back(temp);
        }
        
        return result;
        
    }
};