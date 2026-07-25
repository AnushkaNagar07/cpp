// Calcuate nCr binomial coefficient for n & r.
// nCr= (n!)/(r!)(n-r)!

# include <iostream>
using namespace std;
double fact (int N){
    int fac=1;
    for (int i=1; i<=N; i++){
        fac=fac*i;
    }
    return fac;
}

int main(){
    int n,r;
    cout<<"Enter the values of n & r respectively:";
    cin>>n>>r;
    int nCr= fact(n)/(fact(r)* fact(n-r));
    cout<<"nCr= "<<nCr;
    
    return 0;
}