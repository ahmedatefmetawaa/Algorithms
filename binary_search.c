#include <stdio.h>
#include <stdlib.h>

#define maxarraysize 10

typedef unsigned int uint32;
typedef signed int sint32;
uint32 data[maxarraysize] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

sint32 binarysearchalgorithm(uint32 data[], uint32 s_index, uint32 e_index, sint32 value);

int main()
{
    uint32 ret = 0;
    ret = binarysearchalgorithm(data, 0, maxarraysize - 1, 100); //* index =9
    printf("the requred element index =%i\n", ret);
    ret = binarysearchalgorithm(data, 0, maxarraysize - 1, 30); //* index =2
    printf("the requred element index =%i\n", ret);
    ret = binarysearchalgorithm(data, 0, maxarraysize - 1, 200); //* index =-1
    printf("the requred element index =%i\n", ret);
    ret = binarysearchalgorithm(data, 0, maxarraysize - 1, 50); //* index =4
    printf("the requred element index =%i\n", ret);
}
sint32 binarysearchalgorithm(uint32 data[], uint32 s_index, uint32 e_index, sint32 value)
{
    uint32 m_index = 0;
    while (s_index <= e_index)
    {
        m_index = s_index + ((e_index - s_index) / 2);
        if (value == data[m_index])
        {
            return m_index;
        }

        else if (value > data[m_index])
        {
            s_index = m_index + 1;
        }
        else
        {
            e_index = m_index - 1;
        }
    }
    return -1;
}