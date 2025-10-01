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
tnode* buildTree(vector<int> &a,int &i){

    if(i>=a.size()|| a[i]==-1){
        i++;
        return NULL;
    };
    tnode* node = new tnode(a[i]);
    i++;
    node->left = buildTree(a,i);
    node->right = buildTree(a,i);

    return node;
}
int heightOfBinaryTree(tnode* root){

    if(root==nullptr)return 0;
    int leftHeight = heightOfBinaryTree(root->left);
    int rightHeight = heightOfBinaryTree(root->right);
    return max(leftHeight,rightHeight)+1;
     
}


bool isBalanceTree(tnode* root){
    if(root==nullptr) return true;
    int leftheight  = heightOfBinaryTree(root->left);
    int rightheight = heightOfBinaryTree(root->right);

    if(abs(leftheight-rightheight)>1){
        return false;
    }else{
        bool leftAns = isBalanceTree(root->left);
        bool rightAns = isBalanceTree(root->right);

        if(leftAns && rightAns){
            return true;
        }else{
            return false;
        }
    }
}
void PrintTree(tnode* root,int sum){
    if(root==nullptr)
    {
        return;
    }
    
    sum  = sum + root->val;
    if(root->left==NULL && root->right ==NULL){
        cout<<"SUM--->  "<<sum<<endl;
        sum = 0;
        return;
    }
    
    
    // cout<<"ROOT val"<<sum<<endl;
    // cout<<root->val<<endl;
    PrintTree(root->left,sum);
    PrintTree(root->right,sum);
    //  cout<<"ROOT RIGHT"<<root->val<<endl;
}

int main(){


//    vector<int> a = {  1, 2,-1,-1, 3,4,-1,-1,5,-1,-1};
   vector<int> a = { 1,2,3,4,5};
   int i = 0;
   tnode* root = buildTree(a,i);
   int sum = 0 ;
   PrintTree( root,sum);

   cout<<"FINAL SUM"<<sum<<endl;

//    cout<<heightOfBinaryTree(root)<<endl;
  



}