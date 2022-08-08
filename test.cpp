#include<iostream>
#include<string.h>

using namespace std;

int main() {
    int n;
    int res = 0;
    cin>>n;

    while(n > 0) {
        int rev = n % 10;
        res = res * 10 + rev;
        n /= 10;
    }
    cout<<res;
    return 0;
}