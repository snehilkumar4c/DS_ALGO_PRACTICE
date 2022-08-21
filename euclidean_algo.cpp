// Euclidean's Algorithm is basically an another methodology to find a GCD of two numbers.

#include<iostream>

using namespace std;

// optimized implementation
int gcd(int a, int b) {
    if(b == 0) return a;
    
    else {
        return gcd(b, a % b);
    }
}

// generalized method
// int gcd(int a , int b) {
//      if(a > b) {
//         a -= b;
//         cout<<a;
//      } 
//      else if(b > a) {
//         b-= a;
//         cout<<b;

//      }
// }

int main() {
    int a,b;

    cout<<"Enter 2 numbers: ";
    cin>>a>>b;

    cout<<gcd(a,b);
    return 0;
}