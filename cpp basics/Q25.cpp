// calculate sum of numbers from 1 to N using function.

# include<iostream>
using namespace std;
int sum(int N){
    int add=0;
    for (int i=1; i<=N; i++){
        add=add+i;
    }
    return add;
}

int main(){
    cout<<"sum= "<<sum(15)<<endl;
}