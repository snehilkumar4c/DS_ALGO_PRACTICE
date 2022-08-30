#include<iostream>

using namespace std;

int main() {
// implementation of left shift operator
// also after the left shift operation the value can be determined by (x * (2^y))
    // int x = 3;

    // cout<<(x << 1)<<"\n";

    // cout<<(x << 2)<<"\n";

    // int y = 4;

    // int a = (x << y);

    // cout<<a<<"\n";

// implementation of right shift operator
// also after the right shift operation the value can be determined by (x / (2^y))
    // int x = 33;

    // cout<<(x >> 1)<<"\n";

    // cout<<(x >> 2)<<"\n";

    // int y = 4;

    // int a = (x >> y);

    // cout<<a<<"\n";


    // bitwise not operator
    // basically in this operation we will have the negation of the number 
    // that means whenever a number is inputted then it's binary representatiion will
    // negated and will then be converted to decimal representation and output will be provided.
    // this method can include two ways of depicting the output of bitwise not operation
    // initially with the unsigned int method

    // unsigned int has a range from 0 to ((2^n)-1)
    
    unsigned int x = 1;

    cout<<(~x)<<"\n";

    x = 5;

    cout<<(~x)<<"\n";

    // signed int has range from (-2 ^ n) to ((2 ^ n) -1) 
    // here n represents the compiler size 
    return 0;
}