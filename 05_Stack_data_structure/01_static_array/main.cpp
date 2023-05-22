#include<bits/stdc++.h>
using namespace std;
const int max_size=500;
class STACK{
public:
  int a[max_size];
  int stack_size;
  STACK(){
    stack_size=0;
  }
  void push(int value){
    if(stack_size+1>max_size){
      cout<<"Stack is full.<overflow>\n";
      return;
    }
    stack_size+=1;
    a[stack_size-1]=value;
  }
  void pop(){
    if(stack_size<=0){
      cout<<"Stack is empty!<underflow>\n";
      return;
    }
    //replace the value
    a[stack_size-1]=0;
    stack_size-=1;
  }
  int top(){
    if(stack_size<=0){
      cout<<"Stack is empty!\n";
      return -1;
    }
    return a[stack_size-1];
  }
};
int main(){
  STACK st;
  st.push(10);
  cout<<st.top()<<"\n";
  st.push(20);
  cout<<st.top()<<"\n";
  st.push(30);
  cout<<st.top()<<"\n";
  st.push(40);
  cout<<st.top()<<"\n";
  cout<<"\n \n \n";
  st.pop();
  cout<<st.top()<<"\n";
    cout<<"\n \n \n";
  st.pop();
  cout<<st.top()<<"\n";
    cout<<"\n \n \n";
  st.pop();
  cout<<st.top()<<"\n";
    cout<<"\n \n \n";
  st.pop();
  cout<<st.top()<<'\n';

}
