#include<iostream>
#include<vector>

using namespace std;

int main() {

    int n;

    int a[n];

    cout<<"enter the size: ";
    cin>>n;

    cout<<"enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }

    cout<<"array elements are: "<<"\n";
    for(int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    } 

    cout<<"reverse of an array is: ";
    for(int i = n - 1; i >= 0; i--) {
        cout<<a[i]<<" ";
    }
    return 0;
}