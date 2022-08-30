// program to print the corresponding numeric values with their alphabetic names.

#include<iostream>

using namespace std;

int main() {

    string c[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int a, b;

    cin>>a>>b;

    for(int i = a; i <= b; i++) {
        if(i <= 9) {
            cout<<c[i]<<"\n";
        }

        else if(i > 9) {
            if(i % 2 == 0) {
                cout<<"even"<<"\n";
            }

            else {
                cout<<"odd"<<"\n";
            }
        }
    }

    return 0;
}