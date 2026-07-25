// A A A A
//   B B B
//     C C
//       D

# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    char ch='A';
    for (int i=1; i<=n; i++){
        for (int space=1; space<=(i-1);space++){
            cout<<" ";
        }
        
        for (int j=(n-i+1); j>=1; j--){
            cout<<ch;
        }
        ch=ch+1;
        cout<<endl;
    }
}