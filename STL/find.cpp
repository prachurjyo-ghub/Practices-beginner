#include<bits/stdc++.h>
using namespace std;
int main(){
    string given ,p ="1111111", q="00000000";
   
    cin>> given;
  
    if(given.length()>=7){
    if(given.find(p)|| given.find(q) ){
        cout<<"YES\n";
    }else {
        cout<<"NO\n";
    }}else {
        cout<<"NO\n";
    }
    
return 0;
}