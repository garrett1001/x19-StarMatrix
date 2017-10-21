#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{

int width;
int height;

cout<<"Enter rows and columns of stars:"<<endl;
cin>>height;
cin>>width;

if(height>0 && width>0)
{

vector< vector<char> > matrix;

matrix.resize(height);

int row;
int col;

for(row=0; row < matrix.size(); row++)
{
matrix[row].resize(width);
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
    cout<<matrix[row][col];
    }
   cout<<endl;
}
}

else
{
    return 0;
}

    return 0;
}
