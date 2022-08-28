#include<iostream>

using namespace std;

int zeroes(int n) {
    int res =0;

    for(int i = 5; i <= n; i = i * 5) {
        res = res + (n / i);
    }
    return res;
}

int main() {

    int n; 

    cout<<"enter a number: ";
    cin>>n;

    cout<<"no of trailing zeroes of a factorial are: "<<zeroes(n);

    return 0;
}