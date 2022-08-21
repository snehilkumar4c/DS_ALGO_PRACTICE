#include<iostream>

using namespace std;

int prime(int a) {
    
    if(a == 1) cout<<"no";

    for(int i = 2; i < a; i++) {
        if(a % i == 0)  {cout<<"no";}
    
        else {cout<<"yes";}
    }
}


int main() {
    int a;

    cout<<"enter a number: ";
    cin>>a;

    prime(a);
    return 0;
}