#include<iostream>
using namespace std;

int main() 
{
    int n,i;
    
    cin>> n;
    i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<" number is not prime "<<i<< endl;
        }
        else
        {
            cout<<" number is prime "<<i<<endl;
        }
        i++;
    }
    
    return 0;
}
