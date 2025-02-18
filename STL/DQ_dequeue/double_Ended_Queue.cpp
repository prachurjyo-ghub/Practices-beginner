#include<bits/stdc++.h>
#include<deque>
//array jeitar front and back both side diye insert and out kora jay
using namespace std;
int main(){
    
    deque<int>dq;
    //array er 1st and last a insert 
    dq.push_front(2);
    dq.push_back(9);
    dq.push_front(1);
    for ( int i : dq)
    {
        cout<<i<<" ";
    }
    //pop
    dq.pop_back();
    cout<<endl<<"after poping from back \n";
    for ( int i : dq)
    {
        cout<<i<<" ";
    }

    //direct accessing 
    cout<<endl<<dq.at(1);


    


    

return 0;
}