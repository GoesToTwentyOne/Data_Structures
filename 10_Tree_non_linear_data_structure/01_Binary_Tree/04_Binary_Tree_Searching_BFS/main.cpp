#include<bits/stdc++.h>
using namespace std;
class NODE{
public:
  int Node_id;
  int value;
  NODE* left;
  NODE* right;
  NODE*parent;
};
class BINARY_TREE{
public:
  NODE* root;
  BINARY_TREE(){
    root=NULL;
  }
  NODE* createNewNode(int id,int value){
    NODE* newnode= new NODE;
    newnode->Node_id=id;
    newnode->value=value;
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->parent=NULL;
    return newnode;
  }
  //Insertion using BFS
  void Insertion(int Note_id,int value){
    NODE* newnode=createNewNode(Note_id,value);
    if(root==NULL){
      root=newnode;
      return;
    }
    queue<NODE*> q;
    q.push(root);
    while(!q.empty()){
      NODE* a= q.front();
      q.pop();
      if(a->left != NULL){
        q.push(a->left);
      }else{
        a->left=newnode;
        newnode->parent=a;
        return;
      }
      if(a->right !=NULL){
        q.push(a->right);
      }else{
        a->right=newnode;
        newnode->parent=a;
        return;
      }
    }

  }
  void BFS_Traversing_with_value(){
    if(root==NULL){
      return;
    }
    queue<NODE*> q;
    q.push(root);
    while(!q.empty()){
      NODE* a= q.front();
      q.pop();
      int p=-1,l=-1,r=-1,v=-1;
      if(a->left != NULL){
        l=a->left->Node_id;
        q.push(a->left);
      }
      if(a->right !=NULL){
        r=a->right->Node_id;
        q.push(a->right);
      }
      if(a->parent != NULL){
        p=a->parent->Node_id;
      }
      if(a->value != 0){
        v=a->value;
      }
      cout<<"Node id :"<<a->Node_id<<",  Value:  "<<v<<", Left Node :"<<l<<", Right Node :"<<r<<", Parent id :"<<p<<'\n';
    }
  }
  //searching using DFS
  void searching(NODE *a,int value){
    if(a==NULL){
      return;
    }
    if(a->value== value){
      cout<<"Founding :"<<a->Node_id<<" ";
    }
    searching(a->left,value);
    searching(a->right,value);
  }


};
int main(){
  BINARY_TREE bt;
  bt.Insertion(0,0);
  bt.Insertion(1,1);
  bt.Insertion(2,2);
  bt.Insertion(3,3);
  bt.Insertion(4,4);
  bt.Insertion(5,5);
  bt.Insertion(6,6);
  bt.Insertion(7,7);
  bt.Insertion(8,8);
  bt.Insertion(9,3);
  bt.BFS_Traversing_with_value();
  bt.searching(bt.root,3);

}
