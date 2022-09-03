#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

enum Error_State {ERROR_NOK ,ERROR_OK};

enum Error_State Sum_Values(int a, int b, int* result);
enum Error_State Multiply_Values(int a, int b, int* result);

#endif // HEAD_H_INCLUDED
