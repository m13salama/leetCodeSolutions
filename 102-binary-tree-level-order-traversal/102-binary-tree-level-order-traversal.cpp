#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        init;
        vector<vector<int>> res;
        queue<TreeNode*> qoqo;
        map<TreeNode*, int> visited;
        map<TreeNode*, int> distance;

        if(root == nullptr) return res;
        qoqo.push(root);
        visited[root]++;
        distance[root] = 0;

        while(!qoqo.empty()){
            TreeNode* s = qoqo.front();
            qoqo.pop();
            if(distance[s]>=res.size()) res.push_back(vector<int>());
            res[distance[s]].push_back(s->val);

            if(s->left != nullptr && !visited[s->left]){
                visited[s->left]++;
                qoqo.push(s->left);
                distance[s->left] = distance[s]+1;
            }

            if(s->right != nullptr && !visited[s->right]){
                visited[s->right]++;
                qoqo.push(s->right);
                distance[s->right] = distance[s]+1;
            }
        }
        return res;
    }
};