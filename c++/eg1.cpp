#include<iostream>
using namespace std;


int main(){
    int i;
    const char *arr[] = {"c","C++","Java","Python","perel"};
    const char *(*ptr)[5]=&arr;
    cout<<++(*ptr)[3];
    return 0;
}