#include<bits/stdc++.h>
using namespace std;
class MaxHeap{
public:
  vector<int> node;
  MaxHeap(){

  }
  void upheapify(int index){
    while(index>0 && node[index] > node[(index-1)/2]){
      swap(node[index],node[(index-1)/2]);
      index=(index-1)/2;
    }
  }
  void insertMaxHeap(int data){
    node.push_back(data);
    upheapify(node.size()-1);
  }
  void printMaxHeap(){
    for(int i=0;i<node.size();i++){
      cout<<node[i]<<" ";
    }
    cout<<'\n';
  }
};
int main(){
  MaxHeap heap;
  heap.insertMaxHeap(50);
  heap.insertMaxHeap(40);
  heap.insertMaxHeap(10);
  heap.insertMaxHeap(80);
  heap.insertMaxHeap(90);
  heap.insertMaxHeap(20);
  heap.insertMaxHeap(50);
  heap.printMaxHeap();


}
