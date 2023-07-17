#include<bits/stdc++.h>
using namespace std;
class MaxHeap{
public:
  vector<int> node;
  MaxHeap(){}
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
  void delete_Max_Heap(int index){
    if(index>=node.size()){
      return;
    }
    swap(node[index],node[node.size()-1]);
    node.pop_back();
    downhepify(index);
  }
  void printMaxHeap(){
    for(int i=0;i<node.size();i++){
      cout<<node[i]<<" ";
    }
    cout<<'\n';
  }
  int Max(){
    if(node.empty()){
      cout<<"the heap is empty \n";
      return 0;
    }
    return node[0];
  }
  int MaxExtract(){
    if(node.empty()){
      cout<<"the heap is empty \n";
      return 0;
    }
    int rt=node[0];
    delete_Max_Heap(0);
    return rt;
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
  heap.printMaxHeap();
  heap.delete_Max_Heap(1);
  heap.printMaxHeap();


}
