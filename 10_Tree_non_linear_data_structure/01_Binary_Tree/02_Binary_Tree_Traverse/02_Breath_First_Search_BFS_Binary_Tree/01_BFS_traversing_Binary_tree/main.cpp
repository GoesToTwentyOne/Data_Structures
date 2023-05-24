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
  void build_tree(){
    NODE* allnode[6];
    for(int i=0;i<6;i++){
      allnode[i]=createNewNode(i);
    }
    allnode[0]->left=allnode[1];
    allnode[0]->right=allnode[2];
    //allnode[0].parent=NULL;
    allnode[1]->left=allnode[5];
    allnode[1]->parent=allnode[0];
    allnode[2]->left=allnode[3];
    allnode[2]->right=allnode[4];
    allnode[2]->parent=allnode[0];
    allnode[5]->parent=allnode[1];
    allnode[3]->parent=allnode[2];
    allnode[4]->parent=allnode[2];
    root=allnode[0];
  }
  void BFS_Traversing(){
    if(root == NULL){
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
  bt.build_tree();
  bt.BFS_Traversing();

  /*
             0
            / \
           1   2
          /   / \
         5   3   4
  */

}
