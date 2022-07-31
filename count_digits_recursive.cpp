#include<iostream>

using namespace std;

int count(int n) {
    int c = 0;

    if(n == 0) {
        return 0;
    }
    return 1 + count(n/10);
}

int main() {
    int n;

    cout<<"enter numbers: ";
    cin>>n;

    cout<<count(n);
    return 0;
}