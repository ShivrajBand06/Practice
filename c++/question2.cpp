#include<iostream>
using namespace std;


int main(){
    int size, num, subset ;
    bool found =false;
    cin>>size;
    int arr[size];
    for(int i=0; i<size;i++){
        cin>>arr[i];
    }
    cin>>num;
    cin>>subset;

    for(int i=0; i<size; i+=subset){
        for(int j=i; j<i+subset ; j++){
            if(arr[j] == num){
                found = true;
            }
        }
        if(found){
            continue;
        }
        else{
            cout<<found;
        }
    }
    
    return 0;
}