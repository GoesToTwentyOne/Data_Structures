#include<bits/stdc++.h>
using namespace std;

vector<int> merge_Sort(vector<int> a){
  if(a.size()<=1){
    return a;
  }
  int mid = a.size()/2;
  vector<int> b;
  vector<int> c;
  for(int i=0;i<mid;i++){
    b.push_back(a[i]);
  }
  for(int i=mid;i<a.size();i++){
    c.push_back(a[i]);
  }
  vector<int> sorted_b = merge_Sort(b);
  vector<int> sorted_c = merge_Sort(c);

  vector<int> sorted_a;
  int index1 = 0;
  int index2 = 0;
  for(int i=0;i<a.size();i++){
    if(index1 == sorted_b.size()){
      sorted_a.push_back(sorted_c[index2]);
      index2++;
    }
    else if(index2 == sorted_c.size()){
      sorted_a.push_back(sorted_b[index1]);
      index1++;
    }
    else if(sorted_b[index1] < sorted_c[index2]){
      sorted_a.push_back(sorted_b[index1]);
      index1++;
    }
    else{
      sorted_a.push_back(sorted_c[index2]);
      index2++;
    }
  }
  return sorted_a;
}

int main(){
  vector<int> a = {5,78,12,2,3,6,8,88,16};
  vector<int> result = merge_Sort(a);
  for(int i=0;i<result.size();i++){
    cout << result[i] << " ";
  }
  cout << '\n';

  return 0;
}
/*
Complexity Analysis:
Every level O(logn) for divide
Per Level O(n) for sorted
final=O(nlogn)
*/
