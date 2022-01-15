#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(char input[]) {
    int k = strlen(input);
    while(k--){
        for(int i = strlen(input)-k-1 ; i<strlen(input);i++){
            //cout<<strlen(input)-k<<" "<<k<<strlen(input)<<";;"<<endl;
            for(int j =strlen(input)-k-1; j <=i ;j++){
                cout<<input[j];
            }
            cout<<endl;
        }
    }
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}