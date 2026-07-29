// WAF to swap the max & min number of an array.

# include <iostream>
using namespace std;
void swap (int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int arr[]= {23,34,45,56,67,78};
    int n= 6;
    int max= 0;
    int min= 0;
    for (int i=0; i<n; i++){
        if (arr[max]<arr[i]){
            max=i;
        }
        else if (arr[min]>arr[i]){
            min=i;
        }
    }

    swap (arr[max], arr[min]);
    for (int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }
    return 0;
    
}
// call by reference
