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
// preorder
void displaypreorder(node* root){// output 1 2 4 5 3 6 7 
 if(root==NULL) return ;
 
 cout<<root->val<<" ";
  displaypreorder(root->left);
displaypreorder(root->right);
}
// inorder
void displayinorder(node* root){// output 4 2 5 1 6 3 7
 if(root==NULL) return ;
  displayinorder(root->left);
 cout<<root->val<<" ";
 
displayinorder(root->right);
}
// postorder]
void displaypostorder(node* root){// output 4 5 2 6 7 3 1 
 if(root==NULL) return ;
  displaypostorder(root->left);
displaypostorder(root->right);
cout<<root->val<<" ";
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
    displaypreorder(a);
    cout<<endl;
    displayinorder(a);
     cout<<endl;
    displaypostorder(a);
     cout<<endl; 
    return 0;
}