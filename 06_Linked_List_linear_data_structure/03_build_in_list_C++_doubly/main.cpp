#include<bits/stdc++.h>
using namespace std;
void print(list<int> l){
  //point to head
  list<int>:: iterator a = l.begin();
  //auto a=l.begin();
  while(a!=l.end()){
    //data print
    cout<<*a<<" ";
    //a=a->a->next_pointer
    a++;
  }
  cout<<'\n';
}
//call by ref.
void insert(list<int> &l,int index,int value){
  list<int>::iterator a=l.begin();
  advance(a,index);
  l.insert(a,value);
}

//delete at any pos
void Delete(list<int> &l,int index){
  list<int>::iterator a=l.begin();
  advance(a,index);
  l.erase(a);
}
int main(){
  list<int> l;
  //insert at head O(1)
  l.push_front(4);
  l.push_front(5);
  l.push_front(7);
  l.push_front(8);
  //O(n)
  print(l);
  //delete at head O(1)
  l.pop_front();
  l.pop_front();
  print(l);
  //insert at last O(1)
  l.push_back(8);
  l.push_back(9);
  l.push_back(10);
  l.push_back(11);
  print(l);
  //delete at last O(1)
  l.pop_back();
  l.pop_back();
  print(l);

  //insert at any pos
  list<int>::iterator a= l.begin();
  //travel pos
  advance(a,1);
  l.insert(a,23);
  print(l);
  //insert
  insert(l,2,75);
  print(l);
  //delete at any pos
  Delete(l,1);
  print(l);

  cout<<l.size()<<'\n';


}
