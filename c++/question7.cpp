#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t!=0){
        int b; 
        cin>>b;
        int time[b-1];
        int sum=0;
        
        vector<int>v;
        for(int i=0; i< b; i++){
            v.push_back(b-i);
        }
        sort(v.begin(),v.end());

        for(int j=0; j<b-1; j++){
            sum = v.at(0)+v.at(1);
            v.push_back(sum);
            time[j]=sum;
            reverse(v.begin(),v.end());

            v.pop_back();
            v.pop_back();
            sort(v.begin(),v.end());


        }
        sum=0;
        for(int k=0; k< b-1 ; k++){
            
            sum=sum+ time[k];
        }
        cout<<sum;
        t--;

    }
    
    return 0;
}