#include<iostream>

using namespace std;

int gcd(int a, int b) {
    int res = min(a,b);

    while(res > 0) {
        if(a % res == 0 && b % res == 0) {
            break;
        }
        res--;
    } 
    cout<<res;
}

int main() {
    int a,b;

    cout<<"enter two numbers: ";
    cin>>a>>b;

    gcd(a,b);
    return 0;
}