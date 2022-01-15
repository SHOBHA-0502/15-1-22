#include <iostream>
using namespace std;

 void wavePrint(int **input, int nRows, int mCols)
{

        
        for(int j =0;j<mCols;j++){
            for(int i=0 ;i<nRows;i++){
                if(j%2==0){
                	cout<<input[i][j]<<" ";
                }
                else{
                    cout<<input[nRows - i - 1][j]<<" ";
                }
                
            

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
		wavePrint(input, row, col);
		cout << endl;
	}
}