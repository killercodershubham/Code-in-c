#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;

    
    int row=1;
    
    while(row<=n)
    
    {
        int var=row;
        
        int space=1;
        while(space<=n-row)
        {
            cout<<" ";
            space++;
        }
        int column=1;
        while(column<=row)
        {
            
            cout<< var;
            
            column=column+1;
            var=var+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
} 
   
            