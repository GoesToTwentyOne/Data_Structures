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
void DFS_traversing(NODE *a){
  if(a== NULL){
    return;
  }
  cout<<a->Node_id<<"  ";
  DFS_traversing(a->left);
  DFS_traversing(a->right);
}
};
int main(){
  BINARY_TREE bt;
  bt.build_tree();
  bt.DFS_traversing(bt.root);
}
