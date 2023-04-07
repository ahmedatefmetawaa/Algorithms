#include <stdio.h>
#include <stdlib.h>
#define MAXARRAYSIZE 10
#define LINEARSEARCHALGORITHM2

typedef unsigned int uint32;
typedef unsigned char uint8;

uint32 data[MAXARRAYSIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
uint32 LinearSearchAlgorithm(uint32 data[], uint32 lengh, uint32 value);
int main()
{
    uint32 ret = 0;
    ret = LinearSearchAlgorithm(data, MAXARRAYSIZE, 90); //* INDEX=8
    printf("the index of req element :%i\n", ret);
    ret = LinearSearchAlgorithm(data, MAXARRAYSIZE, 200); //*-1
    printf("the index of req element :%i\n", ret);
    return 0;
}
uint32 LinearSearchAlgorithm(uint32 data[], uint32 lengh, uint32 value)
{
    uint8 flag = 0;
    for (uint8 index = 0; index < lengh; index++)
    {
        if (data[index] == value)
        {
            return index;
            flag = 1;
        }
    }
    if (flag != 1)
    {
        return -1;
    }
}