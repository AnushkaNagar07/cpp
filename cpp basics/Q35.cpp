// WAF to print all the unique values in an array. (print the values that are only present once)

# include <iostream>
using namespace std;
int main(){
    int arr[]={23,34,23,56,89,98,34,98};
    int n= 8;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if ((arr[i]!=arr[j]) and (i !=j)){
                cout<< arr[i];
            }
        }
    }
    return 0;
}