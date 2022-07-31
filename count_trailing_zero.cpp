#include<iostream>

using namespace std;

int count(int n) {
    int c = 0;  


    int f = 1;

    //computing factorial initially
    for(int i = 2; i <= n; i++) { 
        f *= i;
    }
    
    // computing trailing 0's in factorial result
    while(f % 10 == 0) {
        c++;
        f /= 10;
    }

    cout<<c;
}

int main() {
    int n;

    cout<<"enter number: ";
    cin>>n;

    count(n);
    return 0;
}