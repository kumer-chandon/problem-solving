/*calculation of simple interest */
#include<stdio.h>
int main()
{
    int p,n;
    float r,si;
    p=1000;
    n=4;
    r=9.5;
    si=p*n*r/100;
    printf("simple interst:%f\n",si);
    return 0;
}
