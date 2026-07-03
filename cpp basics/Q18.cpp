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
    char ch='A';
    for (int i=1; i<=n; i++){
        
        for (int j=i; j>=1; j--){
            cout<<ch<<" ";
            ch=ch-1;
        }
        
        cout<<endl;
    }
}