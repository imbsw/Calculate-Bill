#include <stdio.h>
#include <stdlib.h>

int main()
{
        int freading,creading,nunits,sum,duep,iduep,fbill,rateunit;

    printf("Enter Final Reading:");
    scanf("%d",&freading);

    printf("Enter Current Reading:");
    scanf("%d",&creading);

    printf("Enter Rate Of A Unit:");
    scanf("%d",&rateunit);

    printf("Enter Due Payment");
    scanf("%d",&duep);

    nunits=creading-freading;
    sum=rateunit*nunits;
    iduep=duep*(8/100);
    fbill=sum+duep+iduep;

    printf("Number Of Units=%d\n",nunits);
    printf("Charge For The Current Month=%d\n",sum);
    printf("FinaL Bill=%d\n",fbill);


    return 0;
}
