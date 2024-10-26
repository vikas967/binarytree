#include<iostream>
using namespace std;
class node{          // this is a tree n0de
    public:
    int val;
    node* right;
    node* left;
   node(int val){
    this->val=val;
    this->left=NULL;
    this->right=NULL;
   }
}; 


void displaynth(node* root,int curr,int level){// left to right 
     if(root==NULL) return ; 
if(curr==level){
    cout<<root->val<<" ";
    return;
    }
  
  displaynth(root->left,curr+1,level);
  displaynth(root->right,curr+1,level);
}
void displaynth1(node* root,int curr,int level){// right to left 
     if(root==NULL) return ; 
if(curr==level){
    cout<<root->val<<" ";
    return;
    }
  displaynth1(root->right,curr+1,level);
  displaynth1(root->left,curr+1,level);
  
}


int level(node* root){ 
if(root==NULL) return 0;         // for levels in tree 
int leftlevel=level(root->left);
int rightlevel=level(root->right);
int ans= 1+max(leftlevel,rightlevel);
return ans;
}
void levelorder(node*root){
    int n=level(root);            // printing for left to right
    for(int i=1;i<=n;i++){
        displaynth(root,1,i);
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        displaynth1(root,1,i);
        cout<<endl;
    }
}

int main(){
    node* a= new node(1);
    node* b= new node(2);
    node* c= new node(3);
    node* d= new node(4);
    node* e= new node(5);
    node* f= new node(6);
    node* g= new node(7);
    a->left=b;                  // linkimg of trees
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
   displaynth(a,1,3);
   cout<<endl;
   levelorder(a);
    return 0;
}