#include<iostream>
using namespace std;

int sum =0;

void Digitsum(int n){
    
    while(n!=0){
       int digit = n%10;
       sum += digit;
       cout << sum ;

       n=n/10;

    }
}

int main(){
   int n =19999999;
   Digitsum(n);
}

