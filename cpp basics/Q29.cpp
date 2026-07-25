// Find if a number is power of 2 without using loops.

# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int arr[n];
    int m=n;
    for (int i=2; i<=(n/2); i++){
        if (m%2 ==0){
            m=n%2;
            cin>>arr[i];
        }
    }
    for (int i=0; i<= sizeof(arr)/sizeof (arr[0]);i++){
        if (arr[i]!=2){
            cout<<"Not a power of 2";
            break;
        }
        else{
            cout<<"Power of 2";
        }
    }
    return 0;
}