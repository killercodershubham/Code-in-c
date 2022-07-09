#include<stdio.h>
int main()
{
    int cp,sp;
    float p,l;
    printf("enter the value of cp and sp");
    scanf("%d%d",&cp,&sp);
    p=sp-cp;
    l=cp-sp;
    {
        if(sp>cp)
        printf("profit");
        if(cp==sp)
        printf("neither profit nor loss");
        else
        printf("loss");
    }
    return 0;
}