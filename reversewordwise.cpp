#include<bits/stdc++.h>
using namespace std ;
void reverseStringWordWise(char input[]) {

    
    // Write your code here
    int i=0,j=0;
    int n=strlen(input);
    
    for(int i=0;i<=n;i++)
    {
        if(input[i]==' ' || input[i]=='\0')
        {
            int k=i-1;
            
            while(j<k)
            {
                char temp=input[j];
                input[j]=input[k];
                input[k]=temp;
                j++;
                k--;
            }
            j=i+1;
        }
    }
}
    




int main(){
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
