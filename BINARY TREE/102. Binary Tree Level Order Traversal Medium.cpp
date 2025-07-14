#include<iostream>
#include<queue>
using namespace std;

class tnode{
    public:
        int data;
        tnode* left;
        tnode* right;
        tnode(int val){
            this->data = val;
            this->left = nullptr;
            this->right = nullptr;
        }
};

tnode * build(vector<int> &a,int &i){
    if(a[i] == -1 || i>=a.size() ){
        i++;
        return nullptr;
    }
    tnode* root = new tnode(a[i]);
    i++;
    root->left = build(a,i);
    root->right = build(a,i);
    return root;
}
void LevelOrder(tnode* root){
    if(root == NULL)return;
    queue<tnode*> q;
    q.push(root);
    while(!q.empty()){
        tnode* node = q.front();
    q.pop();
        cout<<node->data<<endl;
        if(node->left){
            q.push(node->left);
        }
        if(node->right){
            q.push(node->right);
        }
    }
}
int main(){

    vector<int> a={1,2,3,4,-1,-1,-1,-1,5,6,-1,-1};
    int i = 0 ;
    tnode* root = NULL;
    root = build(a,i);
    LevelOrder(root);


}