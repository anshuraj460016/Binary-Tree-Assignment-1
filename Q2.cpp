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
int minvalueofnode(Node*root){

    if(root==NULL) return INT_MAX;
    int Lmin=minvalueofnode(root->left);
    int Rmin=minvalueofnode(root->right);
    return min(root->val, min(Lmin,Rmin));
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

    minvalueofnode(a);
 cout<<minvalueofnode(a);

}