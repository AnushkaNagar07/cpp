// WAF to calculate sum & product of all numbers in an array.

# include <iostream>
using namespace std;

int add=0;
int product=1;
// calculating sum
int sum (int x){
    add+=x;
    return add;
}

// calculating product
int prod(int x){
    product*=x;
    return product;
}

int main(){
    int arr[]= {23,45,56,67,78};
    for (int i=0; i<5; i++){
        sum(arr[i]);
        prod(arr[i]);
    }
    cout<<"Sum= "<<add<<endl;
    cout<<"Product= "<<product;
    return 0;
}