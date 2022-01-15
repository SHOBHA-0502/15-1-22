#include<bits\stdc++.h>
using namespace std;
// void reverseStringWordWise(char input[]) {
//     char temp ;
//     for(int i =0 ; input[i]!='\0' ;i++){
//         //cout<< input[strlen(input)-i-1] <<';'<<endl;
//           temp =  input[strlen(input)-i-1];
//           //cout<< temp<<"--"<<input[strlen(input)-i-1]<<endl;
//          //cout<<temp <<endl ;
//           input[strlen(input)-i-1] = input[i];
//           //cout<<input[strlen(input)-i-1]<<"||"<<input[i]<<endl;
//          input[i] = temp;
//          //cout<<input[i]<<"-|"<<temp<<endl;
//         //cout<< input[strlen(input)-i-1] <<';'<<endl;
        
//     }
//     cout<<input;
// }
void reverseStringWordWise(char input[]) {
    char temp ;
     int k = strlen(input)-1;
    for(int i =0 ; i<k ;i++){
        //cout<< input[strlen(input)-i-1] <<';'<<endl;
          // temp =  input[strlen(input)-i-1];
          temp =  input[k];
          //cout<< temp<<"--"<<input[strlen(input)-i-1]<<endl;
        
         //cout<<temp <<endl ;
          input[k] = input[i];
          //cout<<input[strlen(input)-i-1]<<"||"<<input[i]<<endl;
         input[i] = temp;
        k--;
         //cout<<input[i]<<"-|"<<temp<<endl;
        //cout<< input[strlen(input)-i-1] <<';'<<endl;
        
    }
    cout<<input;
}


int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
