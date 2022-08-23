#include<iostream>
#include<vector>

using namespace std;
// simpler implementation
// void sieve(int n) {
//     vector<bool>isPrime(n + 1, true);

//     for(int i = 2; i * i <= n; i++) {
//         if(isPrime[i]) {
//             for(int j = 2 * i; j <= n; j = j + i) {
//                 isPrime[j] = false;
//             }
//         }
//     }

//     for(int i = 2; i <= n; i++) {
//         if(isPrime[i]) {
//             cout<<i<<" ";
//         }
//     }
// }


// optimized implementation

// void sieve(int n) {
//     vector<bool>isPrime(n + 1, true);

//     for(int i = 2; i * i <= n; i++) {
//         if(isPrime[i]) {
//             for(int j = i * i; j <= n; j = j + i) {
//                 isPrime[j] = false;
//             }
//         }
//     }

//     for(int i = 2; i <= n; i++) {
//         if(isPrime[i]) {
//             cout<<i<<" ";
//         }
//     }
// }

// more optimized implementation
void sieve(int n) {
    vector<bool>isPrime(n + 1, true);

    for(int i = 2; i <= n; i++) {
        if(isPrime[i]) {
            cout<<i<<" ";

            for(int j = i * i; j <= n; j += i){
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    int n;

    cout<<"enter a number: ";
    cin>>n;

    sieve(n);

    return 0;
}

// Vectors in C++ are the dynamic arrays that are used to store data. Unlike arrays, which are used to store sequential data and are static in nature.
//  Vectors provide more flexibility to the program. 
// Vectors can resize itself automatically when an element is inserted or deleted depending on the need of the task to be executed.
// Syntax:
        // vector< object_type > variable_name;