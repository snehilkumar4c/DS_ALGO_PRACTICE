#include<iostream>

using namespace std;

int iterativepower(int a, int n) {
    int res = 1;

    while(n > 0) {
        if(n % 2 != 0) {
            res = res * a;
            a= a * a;
            n = n / 2;
        }
    }
    return res;
}

int main() {

    int a,n;

    cout<<"enter the number and it's computing power: ";
    cin>>a>>n;

    cout<<"the result is: "<<iterativepower(a,n);
    return 0;
}