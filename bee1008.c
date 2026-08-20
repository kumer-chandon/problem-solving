#include<stdio.h>
int main()
{
    int nu,wh,NUMBER;
    float aph,SALARY;
    scanf("%d %d",&nu,&wh);
    scanf("%f",&aph);
    NUMBER=nu;
    SALARY=wh*aph;
    printf("NUMBER = %d\n",nu);
    printf("SALARY = U$ %.2lf\n",SALARY);
    return 0;
}
