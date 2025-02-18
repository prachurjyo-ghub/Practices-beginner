#include<bits/stdc++.h>
using namespace std;
int main(){
   set<int>s;
   //set a insert hoy r eita by default sort kore only unique elements
   s.insert(5);
   s.insert(5);
   s.insert(4);
   s.insert(3);
   s.insert(3);
   s.insert(9);
   s.insert(1);
   s.insert(8);
   cout<<"printing elements "<<endl;
   for ( auto i : s)
   {
    cout<<i<<" ";
    
   }
   cout<<"\nprinting elements after deleting 1st "<<endl;
   s.erase(s.begin());// removing 1st element
   for ( auto i : s)
   {
    cout<<i<<" ";
    
   }
   cout<<endl;
   if (  s.count(5) == 1 ) //count diye khujbe j set a 5 ache ki na thakle 1 dibe mane true or 0 mane na 
   {
    cout<<"5 Exsist \n";
   }
   else cout<<" nai ";
   cout<<endl;
   if (  s.count(99) == 1 ) //count diye khujbe j set a 5 ache ki na tghakle 1 dibe mane tru or 0 mane na 
   {
    cout<<"99 Exsist \n";
   }
   else cout<<"99 nai ";
  




return 0;
}