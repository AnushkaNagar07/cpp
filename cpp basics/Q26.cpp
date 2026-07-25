// Calculate sum of digits of a number.

#include <iostream>
using namespace std;
int main (){
    int n, sum=0;
    cout<<"Enter a number:";
    cin>>n;
    int temp=n;
    int d;
    while (temp!=0){
        d=temp%10;
        sum=sum+d;
        temp=temp/10;
    }
    cout<<"Sum= "<<sum;
    return 0;
}