#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Head.h"

enum Error_State Sum_Values(int a, int b, int* result)
{
    if(result != NULL)
    {
        *result = a+b;
        return (ERROR_OK);
    }
    else
    {
        return (ERROR_NOK);
    }
}

enum Error_State Multiply_Values(int a, int b, int* result)
{
    if(result != NULL)
    {
        *result = a*b;
        return (ERROR_OK);
    }
    else
    {
        return (ERROR_NOK);
    }
}
