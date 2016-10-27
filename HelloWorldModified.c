#include <stdio.h>
int main()
{
    int x = 4;
    int y = 5;
    printf("Hello World\n");
    printf("%s%d\n", "Added Value: ", x + y);
    if((x + y) > 0)
    {
        printf("%s%d%s\n", "The value ", (x + y), " is larger than 0");
    }
    else
        printf("%s%d%s\n", "The value ", (x + y), "is small or equal to 0")
    return 0;
}