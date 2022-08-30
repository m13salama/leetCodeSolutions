#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)



class Solution {
public:
    vector<int> res;
    vector<int> preorder(Node* root) {
        init;
        pre(root);
        return res;
    }
    void pre(Node* root){
        if(root == nullptr) return;
        res.push_back(root->val);

        for(auto u: root->children){
            pre(u);
        }

    }
};