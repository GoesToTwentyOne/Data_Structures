#include<bits/stdc++.h>
using namespace std;
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
  void delete_Max_Heap(int index){
    if(index>=node.size()){
      return;
    }
    swap(node[index],node[node.size()-1]);
    node.pop_back();
    downhepify(index);
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
vector<int> heap_sort(vector<int> a){
  MaxHeap heap;
  heap.array_to_MaxHeap(a);
  vector<int> result;
  for(int i=0;i<a.size();i++){
    result.push_back(heap.MaxExtract());
  }
  reverse(result.begin(),result.end());
  return result;

}
int main(){
  vector<int> a={6,8,3,89,1,45,6};
  vector<int> heap_sort_result=heap_sort(a);
  for(int i=0;i<heap_sort_result.size();i++){
    cout<<heap_sort_result[i]<<"   ";
  }
  cout<<'\n';




}
