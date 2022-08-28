#include<iostream>

using namespace std;
// efficient solution having a time complexity as T[n] = T(n/2) + theta(1) which can be further stated as theta(log(n   ))
int power(int a, int n) {
    if(n == 0) {
        return 1;
    }

    int temp = power(a,n/2);

    temp = temp * temp;

    if(n % 2 == 0) {
        return temp;
    }

    else {
        return temp * a;
    }
}

// naive solution
// int power(int a, int n) {
//     int res = 1;

//     for(int i = 1; i <= n; i++) {
//         res *= a;
//     }
//     return res;
// }

int main() {
    int a, n;

    cout<<"enter a number and it's computing power: ";
    cin>>a>>n;

    cout<<"the result is : "<<power(a,n);

    return 0;
}