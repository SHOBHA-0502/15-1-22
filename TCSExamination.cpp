#include<iostream>
using namespace std ;
int main(){
    int t ;
    cin>>t;
    while(t--){
        int dd,dc,dm,sd,sc,sm;
        cin>>dd>>dc>>dm>>sd>>sc>>sm;
        int td = dd+dc+dm;
        int ts = sd+sc+sm;
        if(td>ts){
            cout<<"DRAGON"<<endl;
        }
        else if(ts>td){
            cout<<"SLOTH"<<endl;
        }
        else{
            if(dd>sd){
                cout<<"DRAGON"<<endl;
            }
            else if(dd<sd){
                 cout<<"SLOTH"<<endl;
            }
            else{
                if(dc>sc){
                cout<<"DRAGON"<<endl;
                }
                else if(dc<sc){
                    cout<<"SLOTH"<<endl;
            
                }
                else{
                    if(dm>sm){
                        cout<<"DRAGON"<<endl;
                    }
                    else if(dm<sm){
                        cout<<"SLOTH"<<endl;
                        
                    }
                    else{
                        cout<<"TIE"<<endl;
                    }
                }
            }
        }
    }
}