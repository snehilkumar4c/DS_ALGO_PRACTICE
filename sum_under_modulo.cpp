#include<iostream>

using namespace std;

long long additionundermodulo(long long a, long long b) {
    const unsigned int M = 1000000007;

    long long res = (((a % M) + b) % M);

    return res;
}

int main() {

   unsigned long long a,b;

    cout<<"enter two number: ";
    cin>>a>>b;

    cout<<"the sum under modulo is : "<<additionundermodulo(a,b);
    return 0;
}