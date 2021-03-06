#include <stdio.h>
#include <stdlib.h>

int reqInput(int *x, int *y);
int printMenu();
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int divi(int x, int y);
int expo(int x, int y);
int mod(int x, int y);
int selection(int *x, int *y, int op);
int compare(int *x, int *y);

int main()
{
    int *x;
    int *y;
    int exit = 0;
    int op = 0;

    x = malloc(sizeof(int));
    y = malloc(sizeof(int));
 
    printf("Hello World!!\n");
    while(exit == 0)
    {
        printMenu();
        scanf("%d", &op);
        exit = selection(x, y, op);
        if(exit == 2)
        {
            break;
        }
    }

    free(x);
    free(y);
    return 0;
}

int reqInput(int *x, int *y)
{
    printf("%s", "Enter first value: ");
    scanf("%d", x);
    printf("%s", "Enter second value: ");
    scanf("%d", y);
    return 0;
}

int printMenu()
{
    printf("%s\n", "1. Add");
    printf("%s\n", "2. Subtract");
    printf("%s\n", "3. Multiply");
    printf("%s\n", "4. Divide");
    printf("%s\n", "5. Exponential");
    printf("%s\n", "6. Modulus");
    printf("%s\n", "7. Div w/ R");
    printf("%s", "Selection: ");
    return 1;
}

int compare(int *x, int *y)
{
    if((*x + *y) > 0)
    {
        printf("%s%d%s\n", "The value ", (*x + *y), " is larger than 0.");
    }
    else if((*x + *y) == 0)
    {
        printf("%s%d%s\n", "The value ", (*x + *y), " is equal to 0.");
    }
    else
    {
        printf("%s%d%s\n", "The value ", (*x + *y), " is smaller than 0.");
    }
    return 1;
}

int add(int x, int y)
{
    int sum = 0;
    sum = x + y;
    return sum;
}

int sub(int x, int y)
{
    int sum = 0;
    sum = x - y;
    return sum;
}

int mul(int x, int y)
{
    int sum = 0;
    sum = x * y;
    return sum;
}

int divi(int x, int y)
{
    int sum = 0;
    sum = x / y;
    return sum;
}

int expo(int x, int y)
{
    int sum = 1;
    while(y != 0)
    {
        sum = sum * x;
        y--;
    }
    return sum;
}

int mod(int x, int y)
{
    int sum = 0;
    sum = x % y;
    return sum;
}

int selection(int *x, int *y, int op)
{
    if (op == 1)
    {
        reqInput(x, y);
        printf("%d\n", add(*x, *y));
        compare(x, y);
        return 1;
    }
    else if (op == 2)
    {
        reqInput(x, y);
        printf("%d\n", sub(*x, *y));
        return 1;
    }
    else if (op == 3)
    {
        reqInput(x, y);
        printf("%d\n", mul(*x, *y));
        return 1;
    }
    else if (op == 4)
    {
        reqInput(x, y);
        
        if (*y == 0)
        {
            printf("%s\n", "ERROR: DIV BY ZERO");
            /*returns 2 to exit value to indicate an error*/
            return 2;
        }
        else
        {
            printf("%d\n", divi(*x, *y));
        }
        return 1;
    }
    else if (op == 5)
    {
        reqInput(x, y);
        printf("%d\n", expo(*x, *y));
        return 1;
    }
    else if (op == 6)
    {
        reqInput(x, y);
        printf("%d\n", mod(*x, *y));
        return 1;
    }
    else if (op == 7)
    {
        reqInput(x, y);

        if(*y == 0)
        {
            printf("%s\n", "ERROR: DIV BY ZERO");
            /*returns 2 to exit value to indicate an error*/
            return 2;
        }
        else
        {
            printf("%d:%d\n", divi(*x, *y), mod(*x, *y));
        }
        return 1;
    }
    else
    {
        return 0;
    }
}