// create a function to calculate minimum of 2 nums

# include <iostream>
using namespace std;
int minimum(int a, int b){
    if (a>b) {
        return b;
        
    }
    else{
        return a;
    }
}


int main(){
    cout << "min= "<< minimum (78, 89)<<endl;
    return 0;
}