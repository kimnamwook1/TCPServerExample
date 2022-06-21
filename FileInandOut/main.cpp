#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)


int main()
{
    FILE* InputFP = fopen("test.jpg", "rb");
    FILE* OutputFP = fopen("test2.jpg", "wb");


    char Buffer[4096] = { 0, };
    while (!feof(InputFP))
    {
        size_t ReadSize = fread(Buffer, sizeof(char), sizeof(Buffer), InputFP);
        size_t WrietSize = fwrite(Buffer, sizeof(char), ReadSize, OutputFP);
    }

    fclose(InputFP);
    fclose(OutputFP);
    return 0;

}