#include<iostream>
#include<vector>

using namespace std;


int main(){
    int n, k;
    vector<int>v;
    cin>>n>>k;

    for(int i=1; i<=n; i++){
        if(n%i==0){
            v.push_back(i);
        }
    }
    if(k>v.size()){
        cout<<1;
    }
    else{
        cout<<v.at(k);
    }

    return 0;
}