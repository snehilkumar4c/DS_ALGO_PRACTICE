#include<iostream>

using namespace std;

int exactly3divisors(int n) {

   int count = 0;

   for(int i = 2; i * i <= n; i++) {

        bool isprime = true;

        if(i == 2 || i == 3) {
            isprime;
        }

        else if(i % 2 == 0 || i % 3 == 0) {
            isprime = false;
        }

        else {
            for(int j = 5; j * j <= i; j = j + 6) {
                if(i % j == 0 || i % (j + 2) == 0) {
                    isprime = false;
                }
            }
        }

        if(isprime) {
            count++;
        }
   } 
   return count;
}

int main() {

    int n;
    
    cout<<"enter a number: ";
    cin>>n;

    cout<<"numbers with exactly 3 divisors: "<<exactly3divisors(n);

    return 0;
}