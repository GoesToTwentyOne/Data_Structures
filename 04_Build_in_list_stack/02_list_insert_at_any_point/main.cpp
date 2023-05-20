#include<bits/stdc++.h>
using namespace std;
void insertAtanyPoint(list<int> &l,int index,int value){
  //list<int>::iterator a=l.begin();
  auto a=l.begin();
  advance(a,index);
  l.insert(a,value);
}
void deleteAtanyPoint(list<int> &l,int index){
  //list<int>::iterator a=l.begin();
  auto a=l.begin();
  advance(a,index);
  l.erase(a);
}
void print(list<int> l){
  list<int>:: iterator a = l.begin();
  while(a!=l.end()){
    cout<<*a<<" ";
    a++;
  }
  cout<<'\n';

}
int main(){
  list<int> l;
  l.push_front(4);
  l.push_front(5);
  l.push_front(7);
  l.push_front(8);
  print(l);
  l.pop_front();
  l.pop_front();
  print(l);
  l.push_back(8);
  l.push_back(9);
  l.push_back(10);
  l.push_back(11);
  print(l);
  l.pop_back();
  l.pop_back();
  print(l);

  l.insertAtanyPoint(l,2,200);
  print(l);
  l.deleteAtanyPoint(l,2);
  print(l);
}
