#include<iostream>

using namespace std;
// more efficient way
// time complexity is one-third of the below mentioned function
int prime(int a) {
    if(a == 1) {
        cout<<"not a prime";
    }

    else if(a == 2 || a == 3) {
        cout<<"is a prime";
    }

    if(a % 2 == 0 && a % 3 == 0) {
        cout<<"not a prime";
    }

    else {
        for(int i = 5; i * i < a; i += 6) {
            if(a % i == 0 || a % (i + 2) == 0) {
                cout<<"not a prime";
            }
        }
    }
    // cout<<"is a prime";
}

// int prime(int a) {
//     if(a == 1) {
//         cout<<"not a prime";
//     }
//     else {
//         for(int i = 2; i * i < a; i++) {
//             if(a % i == 0) {
//                 cout<<"not a prime";
//             }
//         }
//         cout<<"is a prime";
//     }
// }
// time complexity of this function is O(sqrt(n))
int main() {
    int a;
    cout<<"a number: ";
    cin>>a;
    prime(a);
    return 0;
}

// there should not be a printing statement after the last condition statement
// hence it should be avoided.