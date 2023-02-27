#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin >>n>>k;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  int low=0;
  int high=n-1;
  int counter=0;
  for(int i=0;i<n;i++){
    int mid=(low+high)/2;
    cout<<"Low "<<low<<" Hight "<<high<<" Mid "<<mid<<'\n';
    if(a[mid]==k){
      cout<<"Index is :"<<mid<<" value is: "<<a[mid]<<'\n';
      counter=1;
      break;
    }
    if(a[mid]>k){
      high=mid-1;
    }
    else{
      //a[mid]<k
      low=mid+1;
    }
  }
  if (counter==0){
    cout << "You value isn't exixst here" << '\n';
  }


}
