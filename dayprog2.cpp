//Reverse array without using extra array.
#include <iostream>
using namespace std;
int main(){
    int arr[5]={2,4,8,12,16};
    for(int i=4; i>=0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}