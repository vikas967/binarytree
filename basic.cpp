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
void displaytree(node* root){
 if(root==NULL) return ;
 cout<<root->val<<" ";
 displaytree(root->left);
displaytree(root->right);
}

int sum(node* root){            // sum of all element in tree
    if(root==NULL) return 0;
int leftsum=sum(root->left);
int rightsum=sum(root->right);
int ans= root->val +leftsum+ rightsum;
return ans;
}
int product(node* root){            // product of all element in tree
    if(root==NULL) return 1;
int leftproduct=product(root->left);
int rightproduct=product(root->right);
int ans= root->val *leftproduct* rightproduct;
return ans;
}
int size(node* root){ 
if(root==NULL) return 0;         // for size
int leftsize=size(root->left);
int rightsize=size(root->right);
int ans= 1 +leftsize+ rightsize;
return ans;

}
int maxintree(node* root){ 
if(root==NULL) return INT8_MIN;         // for max in tree
int leftmax=maxintree(root->left);
int rightmax=maxintree(root->right);
int ans= max(root->val,max(leftmax,rightmax));
return ans;

}
int minintree(node* root){ 
if(root==NULL) return INT8_MAX;         // for min in tree
int leftmin=minintree(root->left);
int rightmin=minintree(root->right);
int ans= min(root->val,min(leftmin,rightmin));
return ans;

}
int level(node* root){ 
if(root==NULL) return 0;         // for levels in tree 
int leftlevel=level(root->left);
int rightlevel=level(root->right);
int ans= 1+max(leftlevel,rightlevel);
return ans;

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
    // cout<<a->left->left->val;  // output 4
    displaytree(a);
    cout<<endl;
    cout<<sum(a);
     cout<<endl;
    cout<<size(a);
    cout<<endl;
    cout<<maxintree(a);
     cout<<endl;
    cout<<product(a);
      cout<<endl;
    cout<<minintree(a);
       cout<<endl;
    cout<<level(a);
}
