#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int id;
  Node* left;
  Node* right;
  Node* parent;
};

class Binary_Tree {
  Node* root;
  Node* allnode[6];

public:
  Binary_Tree() {
    root = NULL;
  }

  Node* createNewNode(int id) {
    Node* newnode = new Node;
    newnode->id = id;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->parent = NULL;
    return newnode;
  }

  void build_Binary_Tree() {
    for (int i = 0; i < 6; i++) {
      allnode[i] = createNewNode(i);
    }

    allnode[0]->left = allnode[1];
    allnode[0]->right = allnode[2];

    allnode[1]->left = allnode[5];
    allnode[1]->parent = allnode[0];

    allnode[2]->left = allnode[3];
    allnode[2]->right = allnode[4];
    allnode[2]->parent = allnode[0];

    allnode[5]->parent = allnode[1];

    allnode[3]->parent = allnode[2];

    allnode[4]->parent = allnode[2];

    root = allnode[0];
  }

  void print_tree_info() {
    for (int i = 0; i < 6; i++) {
      int p = -1;
      int l = -1;
      int r = -1;

      if (allnode[i]->parent != NULL) {
        p = allnode[i]->parent->id;
      }
      if (allnode[i]->left != NULL) {
        l = allnode[i]->left->id;
      }
      if (allnode[i]->right != NULL) {
        r = allnode[i]->right->id;
      }

      cout << "NODE: " << i << ", parent: " << p << ", left: " << l << ", right: " << r << "\n";
    }
  }
};

int main() {
  Binary_Tree tree;
  tree.build_Binary_Tree();
  tree.print_tree_info();

  /*
             0
            / \
           1   2
          /   / \
         5   3   4
  */

  return 0;
}
