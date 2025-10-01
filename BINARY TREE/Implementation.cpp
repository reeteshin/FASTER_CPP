#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class tnode{
    public:
        int val;
        tnode* left;
        tnode* right;

        tnode(int d){
           this->left = nullptr;
           this->right = nullptr;
           this->val = d;
        }
};

tnode* buildTree(int &i, vector<int> &a){
    if(i >= a.size() || a[i] == -1){
        i++;
        return NULL;
    }

    tnode* root = new tnode(a[i++]);
    root->left = buildTree(i, a);
    root->right = buildTree(i, a);

    return root;
}
void LevelOrderTraversal(tnode* root) {
    if (root == NULL) return;

    queue<tnode*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();  // Number of nodes at current level

        for (int i = 0; i < levelSize; i++) {
            tnode* node = q.front();
            q.pop();

            cout << node->val << " ";

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        cout << endl;  // Move to next line after printing one level
    }
}
void PathSum(tnode* root, int sum){
    if(root == nullptr) return;
    sum = sum + root->val;

    if(root->left == NULL && root->right == nullptr){
        cout << "sum: " << sum << endl;
        return;
    }

    PathSum(root->left, sum);
    PathSum(root->right, sum);
}
//         5
//        / \
//       4   8
//      /   / \
//     11 13   4
//    /  \       \
//   7    2       1
int main(){
    vector<int> a = {5, 4, 8, 11, -1, 13, 4, 7, 2, -1, -1, -1, 1};
    int i = 0;
    tnode* root = NULL;
    root =  buildTree(i,a);
    LevelOrderTraversal(root);
    int sum = 0;
    PathSum(root,sum);


}