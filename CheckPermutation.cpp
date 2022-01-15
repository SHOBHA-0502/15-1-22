#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    bool t ;
    if(strlen(input1)!=strlen(input2)){
        return false ;
    }
     

    for(int i =0 ; input1[i]!='\0';i++){
        for(int j =0 ; input2[j] !='\0';j++){
           // cout<<input2[j]<<"//"<<endl;
            t=false;
            if(input1[i] ==input2[j]){
                t = true;
                //cout<<";;"<<input1[i]<<endl;
                break;
                
                
                
            } 
            

            
            
        }
        //cout<<t<<endl;
        if(t==false){
            
        return false;
        break;
            
        }
        
        
        
    }
    if(t ==true ){
        return "true";
    }
    
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}