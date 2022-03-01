#include<iostream>
using namespace std;


int main(){
    int arr[]={2,4,8,10};
    int *ptr = (arr+1);
    cout<<*arr+5;
    return 0;
}