//       *
//     *   *
//   *       *
// *           *
//   *       *
//     *   *
//       *

# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for (int i=0; i<n; i++){
        // Top portion part 01
        for (int spaces= n-i-1; spaces>=0; spaces--){
            cout<<" ";
        }
        if (i!=0){
            for (int spaces=(2*i-1); spaces>=1; spaces++){
                cout<<" ";
            }
        }
        else{
            cout<<"*";
        }
        cout<< endl;
    }
}