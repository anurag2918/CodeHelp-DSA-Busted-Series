#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"please enter the integer"<<endl;
    cin>>n;
    int row = 1;
    while (row<=n)
    {//enter space
     int space = row-1;
     while(space) {cout<<" "; space=space-1;}
     //enter star
     
     {int star = n-row+1; while(star){cout<<"*";star=star-1;} }
     cout<<endl;
     row=row+1;}
}
