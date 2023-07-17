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
  void downhepify(int index){
    int smallest=index;
    int left=(index*2)+1;
    int right=(index*2)+2;
    while(1){
      if(left< node.size() && node[smallest]> node[left] ){
        smallest=left;
      }
      if(right< node.size() && node[smallest]> node[right] ){
        smallest=right;
      }
      if(node[smallest]== node[index]){
        break;
      }
      swap(node[index],node[smallest]);
      index=smallest;
      left=(index*2)+1;
      right=(index*2)+2;
      }
    }
  void delete_Min_Heap(int index){
    if(index>=node.size()){
      return;
    }
    swap(node[index],node[node.size()-1]);
    node.pop_back();
    downhepify(index);
  }
  void printMinHeap(){
    for(int i=0;i<node.size();i++){
      cout<<node[i]<<" ";
    }
    cout<<'\n';
  }
  int Min(){
    if(node.empty()){
      cout<<"the heap is empty \n";
      return 0;
    }
    return node[0];
  }
  int MinExtract(){
    if(node.empty()){
      cout<<"the heap is empty \n";
      return 0;
    }
    int rt=node[0];
    delete_Min_Heap(0);
    return rt;
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
  heap.delete_Min_Heap(0);
  heap.printMinHeap();


}
