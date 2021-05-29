#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    int i, n;
    printf("Enter how many students u want to input");
    scanf("%d", &n);
    struct student s[n];
    printf("Enter information of students:\n");
    // storing information
    for (i = 0; i < n; ++i)
    {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter  name: ");
        scanf("%s", s[i].name);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
        if (s[i].marks > 500)
        {
            printf("Out of bound enter with in the limit");
            scanf("%f", &s[i].marks);
        }
    }
    printf("Displaying Information of student's mark greater than 400:\n\n");
    // displaying information
    for (i = 0; i < n; ++i)
    {
        if (s[i].marks >= 400 && s[i].marks <= 500)
        {
            printf("\nRoll number: %d\n", i + 1);
            printf(" name: ");
            puts(s[i].name);
            printf("Marks: %.1f", s[i].marks);
            printf("\n");
        }
    }
    return 0;
}