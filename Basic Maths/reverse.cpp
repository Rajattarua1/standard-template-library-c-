#include<iostream>
using namespace std;

void reverse(int n ){
    while(n!=0){

      int digit = n%10;
      cout<<digit;
      n=n/10;
      

    }
}

int main(){
   int n= 78;
   reverse(n);
}

