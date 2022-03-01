#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
    int n;
    cin>>n;

    while(n!=0){
        string P, Q;
        vector<int>v;
        cin>>P;
        cin>>Q;

        for(int i=0; i<P.size(); i++){
            for(int j=0; j< Q.size(); j++){
                if(P[i]==Q[j]){
                    v.push_back(i);
                }
            }
        }
        sort(v.begin(),v.end());
        for(int k=0; k<v.size(); k++){
            cout<<P[v[k]];
        }
        n--;
    }
    return 0;
}