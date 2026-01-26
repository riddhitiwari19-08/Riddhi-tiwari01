#include <stdio.h>

#define STUDENTS 3
#define SUBJECTS 3

int main()
{
    int marks[STUDENTS][SUBJECTS];
    float avg;
    int i, j, total;

    for(i = 0; i < STUDENTS; i++)
    {
        total = 0;
        printf("\nEnter marks for Student %d:\n", i + 1);

        for(j = 0; j < SUBJECTS; j++)
        {
            scanf("%d", &marks[i][j]);
            total += marks[i][j];
        }

        avg = total / (float)SUBJECTS;

        printf("Total = %d\n", total);
        printf("Average = %.2f\n", avg);

        if(avg >= 75)
            printf("Grade: A\n");
        else if(avg >= 60)
            printf("Grade: B\n");
        else if(avg >= 50)
            printf("Grade: C\n");
        else
            printf("Grade: Fail\n");
    }

    return 0;
}
