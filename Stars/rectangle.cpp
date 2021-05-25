#include<iostream>
using namespace std;
int main()
{ 
    cout << "No. of rows: \n";
    int row;
    cin >> row;
    cout << "No.of cols: \n";
    int cols;
    cin >> cols;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<cols;j++)
            cout << "* " ;
            
        cout << "\n"; 
            
    }
    
    return 0;
}
