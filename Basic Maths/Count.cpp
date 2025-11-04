#include<iostream>
using namespace std;
int main(){
    int w = 12345;
    int count =0;
    int n;
    if(w==0){
        count = 0;
    }else{
        while(w>0){
            w = w/10;
            count++;
        }
    }

    cout << " there are " <<  count << " " << "number" ; 

}


