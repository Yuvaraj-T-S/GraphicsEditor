#include <stdio.h>

void initCanvas();
void display();
void drawRectangle(int row, int col, int height, int width);

int main()
{
    int choice;
    int row, col, height, width;

    initCanvas();

   
    
        printf("\n===== Graphics Editor =====\n");
        printf("1. Draw Rectangle\n");
        printf("2. Display Canvas\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

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
                display();
                break;

            case 3:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    

    return 0;
}