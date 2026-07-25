// 1 1 1 1
//   2 2 2
//     3 3
//       4

# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for (int i=1; i<=n; i++){
        for (int space=1; space<=(i-1);space++){
            cout<<" ";
        }
        for (int j= i; j<=n; j++){
                cout<<i;
        }
        cout<<endl;
    }
}