#include<iostream>

using namespace std;

int getsum(int a[], int n) {
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

int main() {
    int n;

    cout<<"enter number of elements:  ";
    cin>>n;

    int *a = new int(n); //dynamic allocation of array

    cout<<"array elements: ";
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }

    cout<<"sum of array elements: ";
    cout<<getsum(a,n);
    return 0;
}