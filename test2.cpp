#include<iostream>
#include<string.h>
using namespace std;

int fact(int n) {
    if(n == 0) {
        return 1;
    }

    return n * fact(n - 1);
}

int factdigits(int n) {
    int res = 0;
    int c = 0;

    res = fact(n);

    int *len = new int(res);

    for(int i = 0; i < len; i++) {

    }

    while(len > 0) {
        c++;
        len--;
    }
    cout<<c;
}

int main() {

    int n;

    cout<<"enter the number: ";
    cin>>n;

    factdigits(n);
    return 0;
}