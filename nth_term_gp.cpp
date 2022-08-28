#include<iostream>
#include<math.h>

using namespace std;

int nthterm(int a, int b, int n) {
    double r = ((double)b) / a;

    double res = a * pow(r, n - 1);
    
    return res;
}

int main() {

    int a,b,n;
    
    cout<<"enter a number of terms: ";
    cin>>n;

    cout<<"enter terms of a GP series: ";
    cin>>a>>b;

    cout<<"nth term of a gp series is: "<<nthterm(a,b,n);

    return 0;
}