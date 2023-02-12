#include<bits/stdc++.h>
using namespace std;
class NODE{
public:
  int Node_id;
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
  NODE* createNewNode(int id){
    NODE* newnode= new NODE;
    newnode->Node_id=id;
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->parent=NULL;
    return newnode;
  }
  void BFS_Insertion(int value){
    NODE* newnode=createNewNode(value);
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
  void BFS_Traversing(){
    if(root==NULL){
      return;
    }
    queue<NODE*> q;
    q.push(root);
    while(!q.empty()){
      NODE* a= q.front();
      q.pop();
      int p=-1,l=-1,r=-1;
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
      cout<<"Node id :"<<a->Node_id<<" Left Node :"<<l<<" Right Node :"<<r<<" Parent id :"<<p<<'\n';
    }

  }


};
int main(){
  BINARY_TREE bt;
  bt.BFS_Insertion(0);
  bt.BFS_Insertion(1);
  bt.BFS_Insertion(2);
  bt.BFS_Insertion(3);
  bt.BFS_Insertion(4);
  bt.BFS_Insertion(5);
  bt.BFS_Insertion(6);
  bt.BFS_Insertion(7);
  bt.BFS_Insertion(8);
  bt.BFS_Traversing();
}
