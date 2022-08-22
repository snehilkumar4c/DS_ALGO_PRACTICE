#include<iostream>

using namespace std;

// Naive solution
// void divisors(int n) {
//     for(int i = 1; i <= n; i++) {
//         if(n % i == 0) {
//             cout<<i<<" ";
//         }
//     }
// }

// efficient solution but not in sorted order
// void divisors(int n) {
//     for(int i = 1; i * i <= n; i++) {
//         if(n % i == 0) {
//             cout<<i<<" ";

//             if(i != (n / i)) {
//                 cout<<(n / i)<<" ";
//             }
//         }
//     }
// }

// efficient order but in sorted order
void divisors(int n) {
    int i;
    // this loop initially prints the possible number which will divide the numbers
    for(i = 1; i * i < n; i++) {
        if(n % i == 0) {
            cout<<i<<" ";
        }
    }
    // this loop then moves backwards and prints the remainders for each possible iteration value
    for(; i >= 1; i--) {
        if(n % i == 0) {
            cout<<(n / i)<<" ";
        }
    }
}
// time complexity of this function is O(sqrt(n))
int main() {
    int n;

    cout<<"enter a number: ";
    cin>>n;

    divisors(n);

    return 0;
}