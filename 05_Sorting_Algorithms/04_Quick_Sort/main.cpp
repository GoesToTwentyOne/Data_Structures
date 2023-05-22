#include<bits/stdc++.h>
using namespace std;
vector<int> quick_Sort(vector<int> a){
  if(a.size()<=1){//base case
    return a;
  }
  int pivot=rand() % (a.size());
  //int pivot=a.size()-1;
  //divide part
  vector<int>b;
  vector<int>c;
  for(int i=0;i<a.size();i++){
    if(i==pivot){
      continue;
    }
    if(a[i]<a[pivot]){
      b.push_back(a[i]);
    }else{
      c.push_back(a[i]);
    }
  }
  vector<int> sorted_b=quick_Sort(b);
  vector<int> sorted_c=quick_Sort(c);
  vector<int> sorted_a;
  //conquer part
  for(int i=0;i<sorted_b.size();i++){
    sorted_a.push_back(sorted_b[i]);
  }
  sorted_a.push_back(a[pivot]);
  for(int i=0;i<sorted_c.size();i++){
    sorted_a.push_back(sorted_c[i]);
  }
  return sorted_a;
}
int main(){
  vector<int>a={3,67,4,5,23,1,5,77,9};
  vector<int> result= quick_Sort(a);
  for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
  }
  cout<<'\n';

}
