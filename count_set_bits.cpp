#include<iostream>

using namespace std;
// naive solution

// int count(int n) {
//     int res = 0;

//     while(n > 0) {
//         if(n % 2 != 0) {   // this if can be replaced by bitwise operator like - if((n & 1) == 1)
//         // also it can be rewritten as res = res + (n & 1);
//             res++;
//         }
//         n /= 2;
//     }
//     return res;
// }


// standard algorithm - Brian Kerningam Algorithm
int main() {
    
    int n;

    cout<<"number: ";
    cin>>n;

    cout<<"the result is: "<<count(n);

    return 0;
}