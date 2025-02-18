#include<bits/stdc++.h>
using namespace std;
int main(){

   //creating int type vector
   vector<int>a;
   cout<<"Capacity mane koto space ache "<<a.capacity()<<endl;
   cout<<"Size mane koto gula element ache "<<a.size()<<endl;

    //element asign kore kmne?

    a.push_back(99);
    cout<<"element at first "<<a.at(0)<<endl;

    a.push_back(12);
    cout<<"element at 2nd "<<a.at(1)<<endl;
    /*2 ta element push korchi ekhon size 2 show korbe and 
    capaccity 2 er beshi push korle double hbe */

    cout<<"capacity "<<a.capacity()<<" \nand size after 2 insert "<<a.size()<<endl;

    a.push_back(5);
    cout<<"capacity "<<a.capacity()<<" \nand size after 3rd insert "<<a.size()<<endl;

    //element ber kore kmne?

    a.pop_back(); //eita diye last element ber kore dibe
    cout<<"capacity "<<a.capacity()<<" \nand size after 3rd one out "<<a.size()<<endl;
    cout<<a.back()<<" is the last element now "<<a.front()<<" is the first element "<<endl;

    int n;
    cout<<"Enter array size :";cin>>n;
    vector<int>ar(n);
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    cout<<"size "<<ar.size()<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<"\nprinting in a diffrent way "<<endl;
    for(int i : ar){ 
        cout<<i<<" "; 
        }
       
    
    

return 0;
}