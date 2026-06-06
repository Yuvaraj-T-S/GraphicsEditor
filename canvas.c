#include <stdio.h>

#define rows 20
#define cols 40

char canvas[rows][cols];

void initCanvas()
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            canvas[i][j] = '_';
        }
    }
}

void display()
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%c", canvas[i][j]);
        }

        printf("\n");
    }
}

void drawRectangle(int row, int col, int height, int width)
{
    int i, j;

    for(i = row; i < row + height && i < rows; i++)
    {
        for(j = col; j < col + width && j < cols; j++)
        {
            canvas[i][j] = '*';
        }
    }
}