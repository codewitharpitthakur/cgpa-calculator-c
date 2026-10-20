#include <stdio.h>

int main(void)
{
    int n, credits;
    int totalCredits = 0;
    float gradePoint, weightedPoints = 0.0f;
    float cgpa;

    printf("===== CGPA CALCULATOR =====\n");

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("\nSubject %d\n", i);

        printf("Enter subject credits: ");
        scanf("%d", &credits);

        printf("Enter grade point: ");
        scanf("%f", &gradePoint);

        totalCredits += credits;
        weightedPoints += credits * gradePoint;
    }

    if (totalCredits > 0)
    {
        cgpa = weightedPoints / totalCredits;

        printf("\n===== RESULT =====\n");
        printf("Total Credits: %d\n", totalCredits);
        printf("CGPA: %.2f\n", cgpa);
    }
    else
    {
        printf("Invalid total credits!\n");
    }

    return 0;
}
