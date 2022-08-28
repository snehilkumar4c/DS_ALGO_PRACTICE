#include<iostream>

using namespace std;
// time complexity for this function is O(log(n)) and auxiliary space is O(1).
int iterativepower(int x, int n) {
    int res = 1;

    while(n > 0) {
        if(n & 1)  //use of bitwise operator &
            res = res * x;
        x = x * x;
        n = n >> 1; //use of bitwise operator >>(redirection)
    }
    cout<<res;
}

int main() {

    int a,n;

    cout<<"enter the number and it's computing power: ";
    cin>>a>>n;

    iterativepower(a,n);
    return 0;
}