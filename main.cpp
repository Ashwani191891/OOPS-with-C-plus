#include<iostream>
using namespace std;
int row_m,col_n,a[sizeof(row_m)][sizeof(col_n)];
int display_function(int a[sizeof(row_m)][sizeof(col_n)])
{
    int i,j;

    cout<<"\n  You have entered following matrix"<<endl;
    for(i=1;i<=row_m;i++)
    {
        for(j=1;j<=col_n;j++)
        {
            if (j==col_n+1)
            {
                cout<<a[i][j]<<"\n";
            }
            else
            {
                cout<<"\t"<<a[i][j];

            }


        }

        cout<<endl;

    }
}
void input_function(int a[sizeof(row_m)][sizeof(col_n)])
{
    int i,j;

    cout<<" Enter the number of rows : ";
    cin>>row_m;

    cout<<"Enter the number of columns : ";
    cin>>col_n;

    for(i=1;i<=row_m;i++)
    {
        for(j=1;j<=col_n;j++)
        {
            cout<<"\n A"<<i<<j<<"th element : ";
            cin>>a[i][j];
        }
    }
}

int main()
{
    input_function(a);
    display_function(a);

}