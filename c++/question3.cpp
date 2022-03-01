#include<iostream>
using namespace std;


int main(){
    int t, arr[100], k=1;
    cin>>t;

    for(int j=1; j<=t ;j++){
        int n;
        cin>>n;

        int cnt = 0;
        while(n>0){
            n=n/2;
            cnt++;

        }
        arr[k]=cnt;
        k++;

    }

    for(int i = 1; i<k;i++){
        cout<<endl<<arr[i];
    }

    return 0;
}