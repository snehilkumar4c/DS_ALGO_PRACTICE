#include<iostream>

using namespace std;

int power(int x, int n) {
    int res = 1;

    for(int i = 1; i <= n; i++) {
        res = res * x;
    }
    return res;
}

int main() {

    int a,n;

    cout<<"enter a number and it's computing power: ";
    cin>>a>>n;

    cout<<"the result is: "<<power(a,n);
    return 0;
}