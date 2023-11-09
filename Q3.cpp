#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;
class Node{
    public:
    int val;
  Node*left;
  Node* right;
   Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
int height(Node*root){
    if(root==NULL) return 0;
    return 1+max(height(root->left),height(root->right));
}
    bool isBalanced(Node* root) {
        if(root==NULL) return true;
        int leftheight=height(root->left);
        int rightheight=height(root->right);
        if(abs(leftheight-rightheight)>1) return false;
        bool leftans=isBalanced(root->left);
        if(leftans==NULL) return false;
        bool rightans=isBalanced(root->right);
        if(rightans==NULL) return false;
         return true;
    }


int main(){
    Node*a=new Node(-2);
    Node*b=new Node(2);
    Node*c=new Node(-1);
    Node*d=new Node(50);
    Node*e=new Node(0);
    Node*f=new Node(6);
    Node*g=new Node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;

  cout<<isBalanced(a);

}