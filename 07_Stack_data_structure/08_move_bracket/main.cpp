#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char> brackets;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==')' && !brackets.empty()){
                brackets.pop();
                continue;
            }
            if(s[i]==')' && brackets.empty()){
                count++;
                continue;
            }
            brackets.push(s[i]);
        }
        cout<<count<<endl;
    }

}