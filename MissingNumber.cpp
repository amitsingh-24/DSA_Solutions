#include <iostream>
using namespace std;
 
int FindMissingNo(int a[], int n){
    int total = (n) * (n + 1) / 2;
    for (int i = 0; i < n-1; i++)
        total -= a[i];
    return total;
}

int main(){
    int arr[] = { 1, 2, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int miss = FindMissingNo(arr, n);
    cout << miss;
}
