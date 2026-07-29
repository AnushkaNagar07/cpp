// Linear Search

# include <iostream>
using namespace std;
int search(int ar[],int k){
    for (int i=0; i<7 ;i++){
        if (ar[i]==k){
            return i;
        }
        
    }
    return -1;
}

int main(){  
    int arr[]={4,2,7,8,1,2,5};
    int key= 5;
    cout<< search (arr,key)<<endl;
}