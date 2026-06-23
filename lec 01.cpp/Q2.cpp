//  find character is lowercase or uppercase
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    if ((int)ch >=97 && (int)ch <=122){
        cout<<"LowerCase";
    }
    else if ((int)ch >=65 && (int)ch <=90){
        cout<<"UpperCase";
    }
    else{
        cout<<"Enter a valid character";
    }
    return 0;
}