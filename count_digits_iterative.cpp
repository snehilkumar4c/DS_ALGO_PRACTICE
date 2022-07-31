#include<iostream>

using namespace std;

int count(int n) {
    int c = 0;
    while(n > 0){
        n /= 10;
        c++;
    }
    return c;
}

int main() {
    int n;

    cout<<"enter numbers: ";
    cin>>n;

    cout<<count(n);
    return 0;
}