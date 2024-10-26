#include<iostream>
#include<queue>
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
node* construct(int arr[],int n){
    queue<node*>q;
    node* root=new node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        node*temp=q.front();
        q.pop();
        node*l;
        node*r;
        if(arr[i]!=INT8_MIN) l=new node(arr[i]);
        else l= NULL;
        if(j!=n && arr[j]!=INT8_MIN) r=new node(arr[j]);
        else r=NULL;
        temp->left=l;
        temp->right=r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;
    }
    return root;
}


void levelorderqueue(node*root){
   queue<node*>q;
   q.push(root);
   while(q.size()>0){
    node*temp=q.front();
    q.pop();
   cout<<temp->val<<" ";
   if(temp->left!=NULL) q.push(temp->left);
    if(temp->right!=NULL) q.push(temp->right);
   }
   cout<<endl;
}

int main(){
  //construct
  int arr[] = {1,2,3,4,5,6,INT8_MIN,INT8_MIN,7,8,9 };
  int n=sizeof(arr)/sizeof(arr[0]);
  node* root=construct(arr,n);
  levelorderqueue(root);
    return 0;
}