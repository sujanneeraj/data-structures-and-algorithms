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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
     
        
        if(root == nullptr) {
            return {};
        }
        
        vector<vector<int>> result;
        
        stack<pair<int, int>> S;
        queue<TreeNode*> Q;
        
        Q.push(root);
        int level = 0;
        while(!Q.empty()) {
            
            
            int size = Q.size();
            
            for(int i = 0; i < size; i++) {
                
                auto node = Q.front();
                Q.pop();
                
                if(node->right) {
                    Q.push(node->right);
                }
                if(node->left) {
                    Q.push(node->left);
                }
                
                S.push({node->val, level});
            }
            
            level +=1;
            
            
            
        }
        
        
        while(!S.empty()) {
            
            auto node = S.top();
            int currentLevel = node.second;
            vector<int> temp;
            temp.push_back(node.first);
            S.pop();
            if(currentLevel > 0) {
                 while(S.top().second == currentLevel) {
                auto top = S.top();
                S.pop();
                temp.push_back(top.first);
            }
            }
            
           
            
            result.push_back(temp);
            
        }
        
        return result;
        
        
        
        
        
    }
};