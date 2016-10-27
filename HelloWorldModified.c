#include <stdio.h>

int reqInput(int *x, int *y);
int printMenu();
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);
int expo(int x, int y);

int main()
{
    int *x = 0;
    int *y = 0;
    int exit = 0;
    int op = 0;
    

    printf("Hello World!!\n");
    
    while(exit == 0)
    {
        printMenu();
        scanf("%d", &op);
        reqInput(x, y);
        if (op == 1)
        {
            printf("%d\n", add(*x, *y));
        }

        else if (op == 2)
        {
            printf("%d\n", sub(*x, *y));
        }

        else if (op == 3)
        {
            printf("%d\n", div(*x, *y));
        }

        else if (op == 4)
        {
            printf("%d\n", mul(*x, *y));
        }

        else if (op == 5)
        {
            printf("%d\n", expo(*x, *y));
        }
        else
        {
            exit = 1;
        }

    }

    if((*x + *y) > 0)
    {
        printf("%s%d%s\n", "The value ", (*x + *y), " is larger than 0.");
    }
    else if((*x + *y) == 0)
    {
        printf("%s%d%s\n", "The value ", (*x + *y), "is equal to 0.");
    }
    else
    {
        printf("%s%d%s\n", "The value ", (*x + *y), "is smaller than 0.");
    }
    
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
    printf("%s", "Selection: ");
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

int div(int x, int y)
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
        sum=sum*x;
        y--;
    }
    return sum;
}
