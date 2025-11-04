#include<iostream>
using namespace std;

string Checkprime(int n ){
    for(int i=2; i*i<=n; i++){

        if(n%i==0){
            return " non prime";
        }

    }

    return "prime" ;
}

int main(){

    int n=57;
    cout << Checkprime(n) << endl;
   
}


