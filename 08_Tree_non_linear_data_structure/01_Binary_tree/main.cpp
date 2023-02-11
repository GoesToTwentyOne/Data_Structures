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
  NODE* allnode[6];
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
  void print_TREE(){
    for(int i=0;i<6;i++){
      int p=-1;
      int l=-1;
      int r=-1;
      if(allnode[i]->parent != NULL){
        p=allnode[i]->parent->Node_id;
      }
      if(allnode[i]->left != NULL){
        l=allnode[i]->left->Node_id;
      }
      if(allnode[i]->right !=NULL){
        r=allnode[i]->right->Node_id;
      }
      cout<<"NODE:"<<i<<" parent = "<<p<<",left = "<<l<<",right = "<<r<<'\n';
    }
  }

};
int main(){
  BINARY_TREE bt;
  bt.build_tree();
  bt.print_TREE();

}
