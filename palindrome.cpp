#include<iostream>

using namespace std;

int palindrome(int n) {
    int rev = 0,digit;
    while(n != 0) {
        digit = n % 10;
        rev = (rev * 10) + digit;
        n /= 10;
    }
    return rev;
}

int main() {
    int n;

    cout<<"number: ";
    cin>>n;

    int num = n;

    if(num == palindrome(n)) cout<<"palindrome";
    else cout<<"not palindrome";
    return 0;
}