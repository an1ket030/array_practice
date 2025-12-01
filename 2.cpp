// Second largest element in an array without sorting

#include <iostream>

using namespace std;

int main() {
    int arr[] = {2,5,7,1,3,9,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l= arr[0];
    int sl= -1;

    for(int i=0; i<n; i++){
        if(arr[i]>l)
            l= arr[i];
    }

    for (int i = 0; i < n; i++){
        if (arr[i]<l && arr[i]>sl)
            sl= arr[i];
    }
    printf("The second largest element in the array is: %d\n", sl);
    return 0;
    
}