#include<iostream>

using namespace std;

void update(int *a, int *b) {
    int temp = *a;

    *a += *b;

    *b = temp - *b;

    if(*b < 0) {
        *b = -(*b);
    }
}

int main() {

    int a, b;

    cout<<"two values: ";
    cin>>a>>b;

    int *pa = &a;
    int *pb = &b;

    update(pa,pb);
    
    printf("%d\n%d",a,b);

    return 0;
}