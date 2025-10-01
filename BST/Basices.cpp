#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;

class Node{
    public:
     int data;
     Node* left;
     Node* right;
     Node(int value){
        this->data= value;
        this->left = nullptr;
        this->right = nullptr;
     }
};
Node* buildTree(Node* root,int value){
    if(root==nullptr){
        root = new Node(value);
        return root;
    }else{
        if(root->data<value){
            root->right = buildTree(root->right,value);
        }else{
            root->left = buildTree(root->left,value);
        }
        return root;
    }

}

int getMax(Node* root){
    if(root==nullptr) return 0;
    
    // cout<<"getInt"<<root->data<<endl;
    int getInt = getMax(root->right);
    return max(getInt,root->data);
   
}
int getMin(Node* root){
    if(root==nullptr) return INT_MAX;
    
    // cout<<"getInt"<<root->data<<endl;
    int getInt = getMin(root->left);
    return min(getInt,root->data);
   
}

void SearchInBST(Node* root,int val){
    if(root==nullptr)return ;
    if(root->data == val){
        cout<<"value found"<<root->data<<endl;
    }
    if(val>root->data){
        SearchInBST(root->right,val);
    }else{
        SearchInBST(root->left,val);
    }
}

void PrintTree(Node* root){
    if(root==nullptr) return;
    PrintTree(root->left);
    PrintTree(root->right);
    cout<<"root-value--> "<<root->data<<endl;
}

void LevelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node * front = q.front();
        q.pop();
        if(front==nullptr){

            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
            }
        }else{
            cout<<front->data<<" ";
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
        
    }
}

int main(){

 vector<int> a = {80,50,60,20,100,120,160,150,-1};
 int i = 0 ;
 Node* root = NULL;
 while(a[i]!=-1){
    root = buildTree(root,a[i]);
    i++;
 }
LevelOrderTraversal(root);
 
//   cout<<"Maximum - > "<< getMax(root);
//   cout<<"Minimum - > "<< getMin(root);
SearchInBST(root,160);


}