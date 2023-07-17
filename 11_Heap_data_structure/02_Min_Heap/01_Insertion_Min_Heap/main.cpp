#include<bits/stdc++.h>
using namespace std;
class MinHeap{
public:
  vector<int> node;
  MinHeap(){

  }
  //complexity O(logn)
  void upheapify(int index){
    while(index>0 && node[index]< node[(index-1)/2]){
      swap(node[index],node[(index-1)/2]);
      index=(index-1)/2;
    }
  }
  //complexity O(logn)
  void insertion_MinHeap(int data){
    node.push_back(data);
    upheapify(node.size()-1);
  }
  void printMinHeap(){
    for(int i=0;i<node.size();i++){
      cout<<node[i]<<" ";
    }
    cout<<'\n';
  }
};
int main(){
  MinHeap heap;
  heap.insertion_MinHeap(50);
  heap.insertion_MinHeap(40);
  heap.insertion_MinHeap(10);
  heap.insertion_MinHeap(80);
  heap.insertion_MinHeap(90);
  heap.insertion_MinHeap(20);
  heap.insertion_MinHeap(50);
  heap.printMinHeap();


}
