// Reverse an array within the original array

# include <iostream>
using namespace std;
int swap(int &x, int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    return 0;
}

int main(){
    int arr[]={89,34,2,12,7,45};
    int n=6;
    for (int i=0; i<(n/2); i++){
        swap(arr[i],arr[n-i-1]);
    }
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}