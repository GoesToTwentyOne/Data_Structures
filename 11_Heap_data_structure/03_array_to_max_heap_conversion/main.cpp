#include<bits/stdc++.h>
using namespace std;
class MaxHeap{
public:
  vector<int> node;
  MaxHeap(){}
  void downhepify(int index){
    int largest=index;
    int left=(2*index)+1;
    int right=(2*index)+2;
    while(1){
      if(left < node.size() && node[largest]< node[left]){
        largest=left;
      }
      if(right < node.size() && node[largest]<node[right]){
        largest=right;
      }
      if(largest ==index){
        break;

      }
      swap(node[index],node[largest]);
      index=largest;
      left=(2*index)+1;
      right=(2*index)+2;
    }
  }
  void printMaxHeap(){
    for(int i=0;i<node.size();i++){
      cout<<node[i]<<" ";
    }
    cout<<'\n';
  }
  void array_to_MaxHeap(vector<int> &a){
    node=a;
    int n=node.size();
    int last_leaf_node=n/2-1;
    for(int i=last_leaf_node;i>=0;i--){
      downhepify(i);
    }
  }

};
int main(){
  MaxHeap heap;
  vector<int> a={6,8,3,89,1,45,6};
  heap.array_to_MaxHeap(a);
  heap.printMaxHeap();


}
