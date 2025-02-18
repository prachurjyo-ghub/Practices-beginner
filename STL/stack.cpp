#include<bits/stdc++.h>
//last in first out
using namespace std;
int main(){
    stack<int>st;
    st.push(5);
    st.push(2);
    st.push(1);
    st.push(0);
    st.push(4);
    cout<<"top element "<<st.top()<<endl;

    cout<<"elements in order "<<endl;
    int n = st.size();
    for (int i = 0; i < n; i++)
    {
       cout<<st.top()<<" ";
       st.pop();
    }

    cout<<"again building a stack of 5 ele"<<endl;
    for (int i = 0; i < 5; i++)
    {
       int a; cin>>a;
       st.push(a);
    }
    cout<<"again poping in order "<<endl;

    for (int i = 0; i < n; i++)
    {
       cout<<st.top()<<" ";
       st.pop();
    }

    
    
return 0;
}