#include<iostream>
#include<math.h>

using namespace std;
// efficient way
// void primefactors(int n) {
//     if(n <= 1) {
//         return;
//     }

//     for(int i = 2; i * i <= n; i++) {
//         while(n % i == 0) {
//             cout<<i<<" ";
//             n /= i;
//         }
//     }

//     if(n > 1) {
//         cout<<n;
//     }
// }

// more efficient way
void primefactors(int n) {
   if(n <= 1) {
        return;
   }

   if(n % 2 == 0) {
        while(n % 2 == 0) {
            cout<<2<<" ";
            n /= 2;
        }
   }

   if(n % 3 == 0) {
        while(n % 3 == 0) {
            cout<<3<<" ";
            n /= 3;
        }
   }

   for(int i = 5; i < sqrt(n); i = i + 6) {
        while(n % i == 0) {
            cout<<i<<" ";
            n /= i;
        }

        while(n % (i + 2) == 0){
            cout<<i+2<<" ";
            n /= i+2;
        }
   }

   if(n > 3) {
        cout<<n<<endl;
   }
}
// time complexity for this is theta(sqrt(n))
int main() {
    int n;

    cout<<"enter a number: ";
    cin>>n;

    primefactors(n);
    return 0;
}