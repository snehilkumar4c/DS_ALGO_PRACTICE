#include<iostream>

using namespace std;


// recursive method
// int fact(int n) {
//     if(n == 0) {
//         return 1;
//     }
//     return n * fact(n-1);
// }

// iterative method
int fact(int n) {
    int res = 1;
    for(int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main() {
    int n;

    cout<<"enter number: ";
    cin>>n;

    cout<<fact(n);
    return 0;
}