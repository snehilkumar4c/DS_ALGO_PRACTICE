#include<iostream>
#include<vector>

using namespace std;

void sieve(int n) {
    vector<bool>isprime(n + 1, true);

    for(int i = 2; i * i <= n; i++) {
        if(isprime[i]) {
            for(int j = i * i; j <= n; j = j + i) {
                    isprime[j] = false;
            }
        }
    }

    for(int i = 2; i <= n; i++) {
        if(isprime[i]) {
            cout<<i<<" ";   
        }
    }
}

int main() {

    int n;

    cout<<"enter a number: ";
    cin>>n;

    sieve(5);
    return 0;
}