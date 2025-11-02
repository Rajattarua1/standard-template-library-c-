#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int>m;
    m["tv"]=1000;
    m["phone"]=1000;
    m["laptop"]=1000;
    m["gAmepad"]=1000;
    // adding element
    m.insert({"iphone",5});
    m.emplace("headphone",5);

     m.erase("iphone");  // erase the value in the table

    
    

    for(auto val:m){

        cout << val.first << " " << val.second << endl ; 
        
    }
    //count the value in the table
        cout << m.count("laptop") << endl;
        cout << m["laptop"] << endl;


     // to find the element
     if(m.find("iphone") != m.end()){
        cout << " found " << endl;
     }else{
        cout << "not found " << endl;
     }
return 0 ;
}