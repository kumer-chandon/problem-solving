/*convertion of distance */
#include<stdio.h>
int main()
{
    float km,m,cm,inch,feet;
    printf("enter the value in km");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    inch=cm/2.54;
    feet=inch/12;
    printf("distance in km=%f\n",km);
    printf("distance in meter=%f\n",m);
    printf("distance in  centemeter=%f\n",cm);
    printf("distance in inch=%f\n",inch);
    printf("distance in feet=%f\n",feet);
    return 0;
}
