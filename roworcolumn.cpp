#include <iostream>
using namespace std;
int findLargest(int **input, int nRows, int mCols)
{
    
    long long x = -2147483648;
    if(nRows ==0){
        return x;
        
    }
    else{
    int sum1=0;
    int sum2 =0;
    int count =0;
    int k ,l;

    for(int i =0 ; i<nRows ; i++){
        for(int j =0; j<mCols ; j++){
           // cout<<input[i][j]<<"// "<<count<<endl;
            count += input[i][j];
        }
        if(count>sum1){

            sum1=count;
            //cout<<sum1<<"]]]"<<endl;
            k = i;
           
        }
         count =0;
        
        
    }
    count =0;
    for(int i =0 ; i<mCols; i++){
        for(int j =0; j<nRows ; j++){
            //cout<<input[j][i]<<" ;;"<<count<<endl;
            count += input[j][i];
        }
        if(count>sum2){
            sum2=count;
             l = i;
            //cout<<sum2<<endl;
            
        }
        count =0;
        
        
    }
    //cout<<count<<"pp"<<endl;
    if(sum1>=sum2){
        cout<<"row "<< k <<" "<<sum1<<endl;
    }
    else{
        cout<<"column "<< l<<" "<<sum2<<endl;
    }
    
    
    }
    
} 


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}