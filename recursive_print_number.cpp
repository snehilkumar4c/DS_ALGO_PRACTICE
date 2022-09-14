#include<iostream>

using namespace std;

int oneton(int n) {

    if(n == 0) return -1;
    oneton(n - 1);
    cout<<n<<" ";

}

int main() {

    int n = 4;
    oneton(n);
    return 0;
}