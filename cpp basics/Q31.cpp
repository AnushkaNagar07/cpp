// Linear Search

# include <iostream>
using namespace std;
int main(){
    int arr[]={4,2,7,8,1,2,5};
    int key= 8;
    for (int i=0; i< (sizeof(arr)/sizeof(int));i++){
        if (arr[i]==key){
            cout<<"Index of the required element is "<<i<<endl;
            break;
        }
        
    }
    return 0;
}