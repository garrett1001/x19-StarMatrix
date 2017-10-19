#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{

int width;
int height;

cout<<"Enter a height for the matrix"<<endl;
cin>>height;

cout<<"Enter a width for the matrix"<<endl;
cin>>width;

vector< vector<char> > matrix;

matrix.resize(height);

int row;
int col;

for(row=0; row < matrix.size(); row++)
{
matrix[row].resize(height);
}

char star='*';

for(row=0; row < matrix.size(); row++)
{
    for(col=0; col < matrix[row].size(); col++)
    {
    matrix[row][col] = star;
    }
}

for(row=0; row < matrix.size(); row++)
{
    for(col=0; col < matrix[row].size(); col++)
    {
    cout<<matrix[row][col]<<" ";
    }
   cout<<endl;
}



    return 0;
}
