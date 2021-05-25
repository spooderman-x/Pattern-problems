#include<iostream>
using namespace std;
int main()
{ 
    cout << "No. of rows: \n";
    int row;
    cin >> row;
    // cout << "No.of cols: \n";
    // int cols;
    // cin >> cols;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        cout  << "* ";
        
        cout << endl;
            
    }
    
    return 0;
}