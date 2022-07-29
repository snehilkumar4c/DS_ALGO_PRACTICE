#include<iostream>

using namespace std;

int lsearch(int arr[], int n, int key) {
    int i;
    for(i = 0; i < n; i++) {
        if(arr[i] == key){
            return key;
        }
    }
    return -1;
}
int main() {
    int a[5],n;
    int key;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"enter array elements: ";
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    cout<<"enter element to be searched: ";
    cin>>key;
    lsearch(a,n,key);
    cout<<"key found!";
    return 0;
}
