/******************************************************************************
pattern :8
    
* *  *  *  *  *  *
  *  *  *  *  *     
     *  *  *
        *
*******************************************************************************/




#include <iostream>

using namespace std;
void nStarTriangle(int n) {
    // Write your code here.
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
          cout<<" " ; 
        }
        for(int j=0;j<2*n-(2*i+1);j++)
        {
           cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
             cout<<" ";
        }
        cout<<endl;
    }
}

int main()
{
   int n;
   cin>>n;
   nStarTriangle(n);
    return 0;
}
