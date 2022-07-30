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
    int a[5], n;

    cout<<"size of array: ";
    cin>>n;

    cout<<"array elements: ";
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }

    cout<<"sum of array elements: ";
    cout<<getsum(a,n);
    return 0;
}