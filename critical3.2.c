#include <stdio.h>

int main()
{
    char name[30];
    int age;

    /* Input */
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    /* Basic validation */
    if(age <= 0)
    {
        printf("Invalid age entered.");
        return 0;
    }

    /* Decorative output */
    printf("\n*******************************\n");
    printf("*                             *\n");
    printf("*  Welcome, %s!               *\n", name);
    printf("*  You are %d years old.      *\n", age);
    printf("*                             *\n");
    printf("*******************************\n");

    return 0;
}
