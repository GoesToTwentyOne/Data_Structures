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
  void delete_BST(int value){
    if(root == NULL){
      cout<<"The tree hasn't node\n";
      return;
    }
    NODE *current=root;
    NODE *previous= NULL;
    while(current !=NULL){
      if(value> current->value){
        previous=current;
        current=current->right;
      }
      else if(value< current->value){
        previous=current;
        current=current->left;
      }
      else{
        break;
      }
    }
    if(current == NULL){
      cout<<"your value doesn't exist in the tree\n";
      return;
    }
    //handle Case 1 | both chile are NULL/empty----> NO CHILD STATE
    if(current->left == NULL && current->right== NULL){
      if(previous->left != NULL && previous->left->value == current->value){
        previous->left= NULL;
      }
      else{
        previous->right=NULL;
      }
      delete current;
      return;
    }
    // //handle Case 2 | one  child has  here | here right child present----> ONE CHILD STATE
    if(current->left == NULL && current->right != NULL){
      if(previous->left != NULL  && previous->left->value == current->value){
        previous->left= current->right;
      }
      else{
        previous->right=current->right;
      }
      delete current;
      return;

      if(current-> left != NULL && current -> right == NULL){
        if(previous->left != NULL && previous->left->value == current-> value){
          previous->left= current->left;
        }
        else{
          previous->right= current->left;
        }
        delete current;
        return;
      }
    }
    // //handle Case 3 | both  child has  here | here right child present----> TWO CHILD STATE
    NODE *inorder_Successor=current->right;
    while(inorder_Successor->left != NULL){
      inorder_Successor=inorder_Successor->left;
    }
    int inorder_Successor_saved= inorder_Successor->value;
    delete_BST(inorder_Successor_saved);
    current->value=inorder_Successor_saved;



  }
  void searching_BST(int data){
    if(root==NULL){
      cout<<"Tree hasn't node"<<'\n';
      return;
    }
    NODE *current=root;
    bool counter=false;
    while(current != NULL){
      if(data>current->value){
        current=current->right;
      }
      else if(data<current->value){
        current=current->left;
      }
      else{
        //equal | find the values
        //return true
        counter=true;
        break;
      }
    }
    //Not match | the value doesn't exists
    //return false
    if(counter== false){
      cout<<"Your value doesn't exist | invalid search"<<'\n';
    }else{
      cout<<"Your value exist | valid search"<<'\n';
    }
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
  //delete case 1
  bst.delete_BST(8);
  bst.BFS_Traverse();
  //delete case 2
  bst.delete_BST(7);
  bst.BFS_Traverse();
  //delete case 3
  bst.delete_BST(6);
  bst.BFS_Traverse();
  bst.searching_BST(0);
  bst.searching_BST(4);

}
