#include<iostream>

using namespace std;
// efficient way
int gcd(int a, int b) {
    if(b == 0) return a;

    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a*b) / gcd(a,b);
}

// time complexity for this efficient function is O(log(min(a,b)))


// int lcm(int a, int b) {
    
//     int res = max(a,b);

//     while(true) {
//         if(res % a == 0 && res % b == 0) {
//             return res;
//         }
//         res++;
//     }
//     return res;
// }

// time complexity of this function is O(a*b-max(a,b))

int main() {
    int a,b;
    
    cout<<"enter 2 numbers: ";
    cin>>a>>b;

    cout<<lcm(a,b);
    return 0;
}