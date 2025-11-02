#include <iostream>
using namespace std;
int main(){

    //sorting

    int arr[5]={4,5,7,3,5};
     sort(arr,arr +5);

     for(int val : arr){
        cout << val << " ";
     }
     cout  << endl ;



    return 0;

}

