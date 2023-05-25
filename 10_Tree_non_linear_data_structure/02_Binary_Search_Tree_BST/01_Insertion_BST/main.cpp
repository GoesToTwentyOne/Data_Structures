#include<bits/stdc++.h>
using namespace std;
class NODE {
public:
  int value;
  NODE *left;
  NODE *right;
};
class Binary_Search_Tree{
public:
  NODE* root;
  Binary_Search_Tree(){
    root=NULL;
  }
  NODE* createNewNode(int data){
    NODE *newnode = new NODE;
    newnode->value=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
  }
  void insert_BST(int data){
    NODE* newnode=createNewNode(data);
    if(root==NULL){
      root=newnode;
      return;
    }
    NODE *current=root;
    NODE *previous=NULL;
    while(current != NULL){
      if(newnode->value > current->value){
        previous=current;
        current=current->right;
      }else{
        previous=current;
        current=current->left;
      }
    }
    if(newnode->value > previous->value){
      previous->right=newnode;
    }else{
      previous->left=newnode;
    }

  }
  void BFS_Traverse(){
    if(root==NULL){
      cout<<"Tree hasn't node"<<"\n";
      return;
    }
    queue<NODE*> q;
    q.push(root);
    while(!q.empty()){
      NODE *a=q.front();
      q.pop();
      int l,r,v=-1;
      if(a->left!= NULL){
        l=a->left->value;
        q.push(a->left);
      }
      if(a->right != NULL){
        r=a->right->value;
        q.push(a->right);
      }
      if(a->value !=0){
        v=a->value;
      }
      cout<<"Value :"<<v<<"  Left :"<<l<<"Right :"<<r<<'\n';
    }

  }
  void searching_BST(){

  }

};
int main(){
  Binary_Search_Tree bst;
  bst.insert_BST(5);
  bst.insert_BST(9);
  bst.insert_BST(6);
  bst.insert_BST(4);
  bst.insert_BST(1);
  bst.insert_BST(3);
  bst.insert_BST(2);
  bst.insert_BST(8);
  bst.insert_BST(7);
  bst.insert_BST(6);
  bst.insert_BST(4);
  bst.insert_BST(3);
  bst.insert_BST(5);
  bst.insert_BST(7);
  bst.insert_BST(8);
  bst.BFS_Traverse();

}
