#include<iostream>

using namespace std;

int nto1(int n) {
    if(n == 0) {
        return -1;
    }

    cout<<n<<" ";
    nto1(n - 1);
}

int main() {

    int n = 5;

    nto1(n);

    return 0;


}