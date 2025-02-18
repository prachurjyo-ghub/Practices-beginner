#include<bits/stdc++.h>
//hederfile queue
using namespace std;
int main(){
    //first in first out
    queue<string>qe;
    qe.push("Sobar prothome dhukche");
    qe.push("2nd a dhukche");
    qe.push("3rd a dhukche ");
    

    cout<<"Front a ache > "<<qe.front()<<endl;
    cout<<"LAst a ache > "<<qe.back()<<endl;
    int count = qe.size();
    for (int i = 0; i < count; i++)
    {
       cout<<qe.front()<<"\n ";
       qe.pop();

    }
    //basically empty() show kore j stack faka ki na faka thakle 1 na thakle 0 dekhay
    if ((qe.empty()) == 1)
    {
        cout<<" STack faka "<<endl;
    }
    
    else cout<<"not faka"<<endl;
    cout<<" size "<<qe.size();
    cout<<"new queue check "<<endl;
   

    


return 0;
}