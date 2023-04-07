#include <stdio.h>

#define MAXARRAYSIZE 10

typedef unsigned int uint32;
typedef unsigned char uint8;
uint32 my_data[MAXARRAYSIZE] = {0, 9, 8, 5, 7, 6, 4, 2, 3, 1};

void SwapData(uint32 *pnumber1, uint32 *pnumber2);
void ExecuteSelectionSort(uint32 data[], uint32 data_lengh);
void PrintData(uint32 data[], uint32 data_lengh);
int main()
{
    PrintData(my_data, MAXARRAYSIZE);
    ExecuteSelectionSort(my_data, MAXARRAYSIZE);
    PrintData(my_data, MAXARRAYSIZE);
}

void ExecuteSelectionSort(uint32 data[], uint32 data_lengh)
{
    uint8 SS_iterator = 0;
    uint8 Min_Index = 0;
    uint8 Compare_Index = 0;
    for (SS_iterator = 0; SS_iterator < data_lengh - 1; SS_iterator++)
    {
        Min_Index = SS_iterator;
        for (Compare_Index = SS_iterator + 1; Compare_Index < data_lengh; Compare_Index++)
        {
            if (my_data[Compare_Index] < my_data[Min_Index])
                Min_Index = Compare_Index;
            else
            { /*Nothing*/
            };
        }
        SwapData(&my_data[SS_iterator], &my_data[Min_Index]);
    }
}

void SwapData(uint32 *pnumber1, uint32 *pnumber2)
{
    uint32 temp = *pnumber1;
    *pnumber1 = *pnumber2;
    *pnumber2 = temp;
}

void PrintData(uint32 data[], uint32 data_lengh)
{
    uint32 dataIterator = 0;
    for (dataIterator = 0; dataIterator < data_lengh - 1; dataIterator++)
    {
        printf("data:%i\t", data[dataIterator]);
    }

    printf("\n");
}