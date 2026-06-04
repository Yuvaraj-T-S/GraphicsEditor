#include <stdio.h>

#define rows 20
#define cols 40

char canvas[rows][cols];

void initCanvas()
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            canvas[i][j] = '_';
        }
    }
}

void display()
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%c", canvas[i][j]);
        }
        printf("\n");
    }
}