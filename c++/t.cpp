#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int>v;
    v.push_back(8);
    v.push_back(7);
    v.push_back(99);
    v.push_back(328);
    v.push_back(778);

    for(int i=0; i< 5; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.erase(v.begin());
    v.erase(v.begin()+1);
for(int i=0; i< 5; i++){
        cout<<v[i]<<" ";
    }
cout<<endl;
    v.erase(v.begin()+3);
    v.erase(v.begin()+4);

for(int i=0; i< 5; i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}