// remove duplicates from sorted array

#include <iostream>
using namespace std;

int main(){
    int arr[] = {9,3,4,5,1,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int i=0, j=1;
    while(j<n){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]= arr[j];
        }
        j++;
    }
    return i+1;
}