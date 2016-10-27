#include <stdio.h>
int main()
{
    int x = 0;
    int y = 0;

    printf("Hello World!\n");
    
    printf("%s", "Enter first value:");
    scanf("%d", &x);
    printf("%s", "Enter second value:");
    scanf("%d", &y);

    printf("%s%d\n", "Added Value: ", x + y);
    if((x + y) > 0)
    {
        printf("%s%d%s\n", "The value ", (x + y), " is larger than 0");
    }
    else
        printf("%s%d%s\n", "The value ", (x + y), "is small or equal to 0");
    return 0;
}