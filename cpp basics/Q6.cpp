// Find factorial of a number N.
# include <iostream>
using namespace std;
int main (){
    int N;
    cout<<"Enter a number:";
    cin>>N;
    int fact=1;
    for (int i=1; i<=N; i++){
        fact=fact*i;
    }
    cout<<fact;
}