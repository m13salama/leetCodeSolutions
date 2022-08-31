#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    map<Node*, Node*> momo;

    Node* cloneGraph(Node* node) {
        init;
        if(node == NULL) return NULL;
        return dfs(node);

    }
    Node* dfs(Node* root){
        if(momo[root]) return momo[root];

        Node* copy = new Node(root->val);
        momo[root] = copy;
        for(auto x: root->neighbors){
            copy->neighbors.push_back(dfs(x));
        }
        return copy;
    }
};