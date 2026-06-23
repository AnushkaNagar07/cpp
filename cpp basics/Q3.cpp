// check if a number is prime or not.
#include <iostream>
using namespace std;
int main (){
    // try using bool function and then solve this ques.
    int n;
    bool isPrime= true;
    cout<<"Enter a number:";
    cin>>n;
    for (int i=2; i<=n/2; i++){
        if (n%i==0){
            isPrime= false;
            break;
        }
    }
    if (isPrime==false){
        cout<<"Not a prime number";
    }
    else{
        cout<<"Prime number";
    }

    return 0;
}