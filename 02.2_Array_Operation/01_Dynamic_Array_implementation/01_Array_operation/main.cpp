#include<bits/stdc++.h>
using namespace std;
class Array_Operations{
private:
  int *arr;
  int size;
  int capacity;
  //time complexity = n log n
  void increaseCapacity(){
    capacity=capacity*2;
    int *temp=new int[capacity];
    for(int i=0;i<size;i++){
      temp[i]=arr[i];
    }
    delete []arr;
    arr=temp;
  }
  //time complexity = n log n
  void decreaseCapacity(){
      capacity=capacity/2;
      int *temp=new int[capacity];
      for(int i=0;i<size;i++){
        temp[i]=arr[i];
      }
      delete []arr;
      arr=temp;
  }

public:
  Array_Operations(){
    arr=new int[1];
    capacity=1;
    size=0;
  }
  //time complexity=O(n)
  void insertAtFirst(int value){
    if(capacity==size){
      increaseCapacity();
    }
    for(int i=size-1;i>=0;i--){
      arr[i+1]=arr[i];
    }
    arr[0]=value;
    size++;

  }
    //time complexity=O(pos-size)
  void insertAtPosition(int pos,int value){
    if(capacity==size){
      increaseCapacity();
    }
    for(int i= size-1;i>=pos;i--){
      arr[i+1]=arr[i];
    }
    arr[pos]=value;
    size++;

  }
  //time complexity=O(1)
  void insertAtLast(int value){
    if(capacity==size){
      increaseCapacity();
    }
    arr[size]=value;
    size++;
  }
  //time complexity = O(n)
  void deleteAtFirst(){
    if(size==0){
      cout<<"underfllow\n";
    }
    if(size==capacity/2){
      decreaseCapacity();
    }
    for(int i=0;i<size;i++){
      arr[i]=arr[i+1];
    }
    size--;
  }
  //time complexity = O(size-pos)
  void deleteAtPosition(int pos){
    if(size==0){
      cout<<"underfllow\n";
    }
    if(pos>size){
      cout<<"index is over\n";
    }
    if(size==capacity/2){
      decreaseCapacity();
    }
    for(int i=pos+1;i<size;i++){
      arr[i-1]=arr[i];
    }
    size--;
  }
  //time complexity=O(1)
  void deleteAtLast(){
    if(size==0){
      cout<<"underfllow\n";
    }
    if(size==capacity/2){
      decreaseCapacity();
    }
    size--;
  }
  //time complexity=O(n)
  void traverse(){
    for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
    }
    cout<<'\n';
  }
  void update(int pos, int value){
    if(size==0){
      cout<<"underfllow\n";
    }
    arr[pos] = value;
  }
  void search(int value){
    if(size==0){
      cout<<"underfllow\n";
    }
    for(int i=0;i<size;i++){
      if(arr[i] == value){
        cout<<i<<"\n";
      }
    }


  }

};
int main(){
  Array_Operations ao;
  ao.insertAtLast(20);
  ao.traverse();
  ao.insertAtLast(20);
  ao.traverse();
  ao.insertAtPosition(1,45);
  ao.traverse();
  ao.insertAtFirst(78);
  ao.traverse();
  ao.deleteAtPosition(2);
  ao.traverse();
  ao.deleteAtFirst();
  ao.traverse();
  ao.update(2,78);
  ao.traverse();
  ao.search(78);

}
