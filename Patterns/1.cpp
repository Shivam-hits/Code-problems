#include <iostream>

using namespace std;
void nStarTriangle(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++)
    {
        for(int k=n;k>i;k--)  
            cout<<" ";
        
        for(int j=1;j<2*i;j++)
            cout<<"*";
        cout<<endl;
    }
}

int main()
{
    nStarTriangle(3);
    
}