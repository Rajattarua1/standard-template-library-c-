  #include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
   s.insert(12);
   s.insert(13);
   // s.insert(14);
   s.insert(11);
   s.insert(15);
   s.insert(16);


   // lower_bound
   

    
     

    for(auto val:s){

        cout << val << " " ; 

       
         
    }
    cout << endl;

     cout << "lower bound = " << *(s.lower_bound(14)) << endl;
     cout << "upper bound = " << *(s.upper_bound(14)) << endl;
    
return 0 ;
}