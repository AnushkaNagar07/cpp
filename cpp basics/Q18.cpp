// A
// B A
// C B A
// D C B A

# include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    
    for (int i=1; i<=n; i++){
        char ch= 'D';
        for (int j=1; j<=i; j++){
            cout<<(char)(ch-(j+2));
            ch=ch-1;
        }
        cout<<endl;
    }
}