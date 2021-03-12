#include<iostream>
using namespace std;

int row_m, col_n, matrix[50][50];

// read_matrix function -- to get input of matrix order and matrix elements from keyboard

int read_matrix(int matrix[50][50])
{
    int i, j;

    for(i=1; i<=row_m; i++)
    {
        for(j=1; j<=col_n; j++)
        {
            cout<<"\n A" <<i <<j <<"th element : ";
            cin>>matrix[i][j];
        }
    }
}

// display_matrix function -- to display or print entered matrix as output

int display_matrix(int matrix[50][50])
{
    int i, j;

    for(i=1; i<=row_m; i++)
    {
        for(j=1; j<=col_n; j++)
        {
           cout<<"\t" <<matrix[i][j];
        }
        cout<<endl;
	}
}
    
// call the read_matrix and display_matrix functions to perform their tasks

int main()
{
    cout<<" Enter the number of rows : ";
    cin>>row_m;
    cout<<" Enter the number of columns : ";
    cin>>col_n;
    
    read_matrix(matrix);
    
    cout<<"\n  You have entered following matrix"<<endl;
    
    display_matrix(matrix);
}
