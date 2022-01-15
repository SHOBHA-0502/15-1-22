#include<iostream>
using namespace std ;
int main(){
    int t ;
    int t1,t2;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int arr[3][3];
        for(int i =0 ; i<3;i++){
            for(int j =0 ; j<3;j++){
                cin>>arr[i][j];
            }
        }
    t1=arr[0][1]+arr[0][2]+arr[2][1];
    t2=arr[1][0]+arr[2][0]+arr[1][2];
    if(t1>t2){
        cout<<t1<<endl;
    }
    else{
        cout<<t2<<endl;
    }

    }
}