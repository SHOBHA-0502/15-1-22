#include<iostream>
using namespace std;


int main(){

     int n ,m ;
    cin>>n>>m;
    int count = 0;
    int arr[n][m];
    for(int i =0; i<n ; i++){
        for(int j =0 ; j<m; j++){
            cin>>arr[i][j];
        }
    }
    for(int i =0; i<m ; i++){
        for(int j =0 ; j<n; j++){
            count += arr[j][i];
        }
        cout<< count<<endl;
        count =0;
    }
    
    
    
}

