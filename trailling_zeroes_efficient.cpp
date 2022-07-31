#include<iostream>

using namespace std;

int zeroes(int n) {
    int res = 0;

    for(int i = 5; i <= n; i = i * 5) {
        res += n/i;
    }
    cout<<res;
}

int main() {
    int n;

    cout<<"enter number: ";
    cin>>n;

    zeroes(n);
    return 0;
}