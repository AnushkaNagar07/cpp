// A B C
// D E F
// G H I

# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    char ch;
    for (int i=1; i<=n;i++){
        ch= 'A';
        for (int j=(1+(n*(i-1))); j<=(n*i); j++){
            cout<<ch <<" ";
            ch=ch+1;
        }
        cout<<endl;
    }

    return 0;
}