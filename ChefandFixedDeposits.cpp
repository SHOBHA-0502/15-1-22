#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t;
    while(t--){
        int n ,x;
        int sum =0;
        cin>>n>>x;
        vector<int>v;
        for(int i=0 ; i<n; i++){
            int a ;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        for(int i =0 ;i<n ;i++){
            sum = sum + v[i];
            if(sum>=x){
                cout<< i+1<<endl;
                break;
            }
        }
        if(sum<x){
            cout<<"-1"<<endl;
        }

    }
}