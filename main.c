#include <stdio.h>

void initCanvas();
void display();
void drawRectangle(int row, int col, int height, int width);
void drawLine(int row,int col,int length);
void drawTriangle(int row,int col,int height);
void drawCircle(int centerRow,int centerCol,int radius);
void deleteArea(int row,int col,int height,int width);
void clearCanvas();

int main()
{
    int choice;
    int row, col, height, width;

    initCanvas();
    
    printf("\n===== Graphics Editor =====\n");
    printf("1. Draw Rectangle\n");
    printf("2. Draw Line\n");
    printf("3. Draw Triangle\n");
    printf("4. Draw Circle\n");
    printf("5. Delete Area\n");
    printf("6. Clear Canvas\n");
    printf("7. Display Canvas\n");
    printf("8. Exit\n");

    printf("Enter choice: ");
    scanf("%d", &choice);
    while(1)
    {
        switch(choice)
        {
            case 1:
                printf("Enter row: ");
                scanf("%d", &row);

                printf("Enter column: ");
                scanf("%d", &col);

                printf("Enter height: ");
                scanf("%d", &height);

                printf("Enter width: ");
                scanf("%d", &width);

                drawRectangle(row, col, height, width);
                display();
                break;

            case 2:
            {
                int row,col,length;

                printf("Enter row: ");
                scanf("%d",&row);

                printf("Enter column: ");
                scanf("%d",&col);

                printf("Enter length: ");
                scanf("%d",&length);

                drawLine(row,col,length);
                display();
                break;
            }

            case 3:
            {
                int row,col,height;

                printf("Enter row: ");
                scanf("%d",&row);

                printf("Enter column: ");
                scanf("%d",&col);

                printf("Enter height: ");
                scanf("%d",&height);

                drawTriangle(row,col,height);
                display();
                break;
            }
            case 4:
            
            {
                int row,col,radius;

                printf("Enter center row: ");
                scanf("%d",&row);

                printf("Enter center column: ");
                scanf("%d",&col);

                printf("Enter radius: ");
                scanf("%d",&radius);

                drawCircle(row,col,radius);
                display();
                break;
            }
            case 5:
            {
                int row, col, height, width;

                printf("Enter row: ");
                scanf("%d", &row);

                printf("Enter column: ");
                scanf("%d", &col);

                printf("Enter height: ");
                scanf("%d", &height);

                printf("Enter width: ");
                scanf("%d", &width);

                deleteArea(row, col, height, width);
                display();
                break;
            }
            case 6:
            {
                clearCanvas();
                printf("Canvas cleared!\n");
                break;
            }
            case 7:
            {
                display();
                break;
            }
            case 8:
            {
                 printf("Exiting...\n");
                return 0;
            }
            default:
            {
                  printf("Invalid choice!\n");
            }
        }
    }
    return 0;
}