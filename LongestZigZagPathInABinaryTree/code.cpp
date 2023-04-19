//recursive Approach
class Solution {
public:
int pathlength=0;
    void dfs(TreeNode *node, bool goleft, int steps){
        if(node ==NULL){
            return;
        }
        pathlength=max(pathlength,steps);
        if(goleft){
            dfs(node->left,false,steps+1);
            dfs(node->right,true,steps);
        }
        else{
            dfs(node->left,false,steps);
            dfs(node->right,true,steps+1);
        }
    }
    int longestZigZag(TreeNode* root) {
        dfs(root,false,0);
        dfs(root,true,0);
        return pathlength;
        
    }
};
