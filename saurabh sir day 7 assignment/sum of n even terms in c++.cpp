#include<iostream>
using namespace std;
int main()
{
    int n,i,sum;
    sum=0;
    cin>>n;
    i=2;
    while(i<=n)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        i++;
    }
    cout<< sum <<endl;
    
    return 0;
}