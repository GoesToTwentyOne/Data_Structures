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
    cout<<"Low "<<low<<" Hight "<<high<<" Mid "<<mid<<'\n';go
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
/*
Binary Search Complexity Analysis:
	Operation               Array Length
	0			n =n/2^0
	1			n/2=n/2^1
	2			n/4=n/2^2
	3			n/8=n/2^3
	…
	K			n/2^k
Break,
n/2^k=1
n=2^k
k=log2^n

Note:
log a base b =c
log a base c = b
*/
