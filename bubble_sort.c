#include <stdio.h>
#include <stdlib.h>

#define maxsizearray 10

typedef unsigned int uint32;
// uint32 data[maxsizearray]= {8,0,3,1,5,6,9,7,4,2};
uint32 data[maxsizearray] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
void SwapData(uint32 *pnumber1, uint32 *pnumber2);
void ExecuteBubbleSort(uint32 data[], uint32 data_lengh);
void PrintData(uint32 data[], uint32 data_lengh);

int main()
{

    ExecuteBubbleSort(data, maxsizearray);

    return 0;
}

void swapdata(uint32 *pnumber1, uint32 *pnumber2)
{
    uint32 temp = *pnumber1;
    *pnumber1 = *pnumber2;
    *pnumber2 = temp;
}

void ExecuteBubbleSort(uint32 data[], uint32 data_lengh)
{
    uint32 flag = 0;
    uint32 bs_iterator;
    uint32 adjacent_iterator;
    for (bs_iterator = 0; bs_iterator < data_lengh - 1; bs_iterator++)
    {
        for (adjacent_iterator = 0; adjacent_iterator < data_lengh - 1 - bs_iterator; adjacent_iterator++)
        {
            if (data[adjacent_iterator] > data[adjacent_iterator + 1])
            {
                swapdata(&data[adjacent_iterator], &data[adjacent_iterator + 1]);
                flag = 1;
            }
            printdata(data, maxsizearray);
        }
        if (flag == 0)
            return;
    }
}

void printdata(uint32 data[], uint32 data_lengh)
{
    uint32 dataIterator = 0;
    for (dataIterator = 0; dataIterator < data_lengh - 1; dataIterator++)
    {
        printf("data:%i\t", data[dataIterator]);
    }

    printf("\n");
}
