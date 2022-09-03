#include <stdio.h>
#include <stdlib.h>
#include "Head.h"

int main()
{
    int x = 10;
    int y = 20;
    int result = 0;
    if(Multiply_Values(x,y,&result)== ERROR_OK)
    {
        printf("Multiply of %d and %d = %d\n",x,y,result);
    }
    if(Sum_Values(x,y,&result) == ERROR_OK)
    {
        printf("sum of %d and %d = %d\n",x,y,result);
    }
}
