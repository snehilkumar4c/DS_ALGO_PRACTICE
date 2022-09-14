#include<iostream>

using namespace std;
// method 1 : using left shift operator
// int kthset(int n, int k) {
//     if(n & (1 << (k - 1)) != 0) {
//         cout<<"yes";
//     }

//     else {
//         cout<<"no";
//     }
// }


// method 2 : using right shift operator
int kthset(int n, int k) {
    if((n >> (k - 1) & 1) == 1) {
        cout<<"yes";
    }

    else {
        cout<<"no";
    }
}
int main() {

    int n, k;

    cout<<"number and check position: ";
    cin>>n>>k;

    kthset(n,k);

    return 0;
}