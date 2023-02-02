#include<bits/stdc++.h>
using namespace std;
template<class T>
class STACK{
public:
  T *a;
  int array_capcity;
  int stack_size;
  STACK(){
    a=new T[1];
    array_capcity=1;
    stack_size=0;
  }
  void increaceCapacity(){
    T *temp;
    temp=new T[array_capcity*2];
    for(int i=0;i<array_capcity;i++){
      temp[i]=a[i];
    }
    swap(a,temp);
    delete []temp;
    array_capcity=array_capcity*2;
  }
  void push(T value){
    if(stack_size+1>array_capcity){
      increaceCapacity();
    }
    stack_size+=1;
    a[stack_size-1]=value;
  }
  void pop(){
    if(stack_size<=0){
      cout<<"Stack is empty!\n";
      return;
    }
    a[stack_size-1]=0;
    stack_size-=1;
  }
  T top(){
    if(stack_size<=0){
      cout<<"Stack is empty!\n";
    }
    return a[stack_size-1];

  }
};
int main(){
  STACK<int> st;
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
