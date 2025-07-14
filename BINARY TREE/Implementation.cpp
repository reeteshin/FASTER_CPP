#include<iostream>
#include<vector>
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

tnode* buildTree(int &i,vector<int> &a){

    if(a[i]==-1 || i>a.size()){
        i++;
        return NULL;
    }
    tnode* root = new tnode(a[i]);
    i++;
    root->left = buildTree(i,a);
    root->right = buildTree(i,a);

    return root;

}
void InorderTraversal(tnode* root){
    if(root==NULL)return;
    InorderTraversal(root->left);
    cout<<root->val<<endl;
    InorderTraversal(root->right);
}


int main(){
    vector<int> a = {2,6,9,-1,-1,-1,-1};
    int i = 0;
    tnode* root = NULL;
    root =  buildTree(i,a);
    InorderTraversal(root);


}