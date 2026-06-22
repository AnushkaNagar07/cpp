// calculator program that performs sum, difference, product, divison, modulo
# include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"Sum:"<<a+b<<endl;
    cout<<"Difference:"<<a-b<<endl;
    cout<<"Product:"<<a*b<<endl;
    if (b==0){
        cout<<"Division and modulo by zero cannot be performed."<<endl;
    }
    else{
        cout<<"Division:"<<a/b<<endl;
        cout<<"Modulo:"<<a%b<<endl;
    }
    return 0;
}