// 1  2  3  4
// 5  6  7  8
// 9  10 11 12
// 13 14 15 16

# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for (int i=1; i<=n; i++){
        for (int j= (1+(n*(i-1))) ; j<=(n*i); j++){
            cout<< j<<" ";
        }
        cout<<endl;
    }
    return 0;
}