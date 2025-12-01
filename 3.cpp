//check if array is sorted or not

#include <iostream>
using namespace std;

int main(){
    int arr[] = {4,2,6,8,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        if(arr[i]>=arr[i-1])
            continue;
        else
            return false;
    }
    return true;
}