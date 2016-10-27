#include <stdio.h>

int reqInput(int *x, int *y);
int printMenu();

int main()
{
    int *x;
    int *y;
    *x = 0;
    *y = 0;
    int exit = 0;

    printf("Hello World!!\n");
    
    while(exit == 0)
    {
        
    }
    printf("%s%d\n", "Added Value: ", x + y);
    if((x + y) > 0)
    {
        printf("%s%d%s\n", "The value ", (x + y), " is larger than 0.");
    }
    else if((x + y) == 0)
    {
        printf("%s%d%s\n", "The value ", (x + y), "is equal to 0.");
    }
    else
        printf("%s%d%s\n", "The value ", (x + y), "is smaller than 0.");
    return 0;
}

int reqInput(int *x, int *y)
{
    printf("%s", "Enter first value: ");
    scanf("%d", &x);
    printf("%s", "Enter second value: ");
    scanf("%d", &y);
    return 0;
}
