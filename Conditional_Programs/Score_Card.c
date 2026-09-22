#include <stdio.h>

char getGrade(float marks)
{
    if (marks >= 90 && marks <= 100)
        return 'A';
    else if (marks >= 80)
        return 'A';
    else if (marks >= 70)
        return 'B';
    else if (marks >= 60)
        return 'B';
    else if (marks >= 40)
        return 'C';
    else
        return 'F';
}

char getPlus(float marks)
{
    if (marks >= 90 && marks <= 100)
        return '+';
    else if (marks >= 70 && marks < 80)
        return '+';
    else
        return ' ';
}

int main()
{
    float sub1, sub2, sub3, sub4, sub5, total, percentage;
    char grade1, grade2, grade3, grade4, grade5;
    char plus1, plus2, plus3, plus4, plus5;

    printf("Enter marks of subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks of subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks of subject 3: ");
    scanf("%f", &sub3);

    printf("Enter marks of subject 4: ");
    scanf("%f", &sub4);

    printf("Enter marks of subject 5: ");
    scanf("%f", &sub5);

    /* Validate marks */
    if (sub1 < 0 || sub1 > 100 ||
        sub2 < 0 || sub2 > 100 ||
        sub3 < 0 || sub3 > 100 ||
        sub4 < 0 || sub4 > 100 ||
        sub5 < 0 || sub5 > 100)
    {
        printf("\nInvalid marks!\n");
        printf("Please enter marks between 0 and 100.\n");
        return 1;
    }

    /* Get grades */
    grade1 = getGrade(sub1);
    grade2 = getGrade(sub2);
    grade3 = getGrade(sub3);
    grade4 = getGrade(sub4);
    grade5 = getGrade(sub5);

    plus1 = getPlus(sub1);
    plus2 = getPlus(sub2);
    plus3 = getPlus(sub3);
    plus4 = getPlus(sub4);
    plus5 = getPlus(sub5);

    /* Calculate total and percentage */
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500.0) * 100;

    /* Score card */
    printf("\n-----------------------------------------\n");
    printf("           YOUR SCORE CARD\n");
    printf("-----------------------------------------\n");
    printf("Subject   | Marks     | Grade\n");
    printf("-----------------------------------------\n");
    printf("Subject 1 | %-9.2f | %c%c\n", sub1, grade1, plus1);
    printf("Subject 2 | %-9.2f | %c%c\n", sub2, grade2, plus2);
    printf("Subject 3 | %-9.2f | %c%c\n", sub3, grade3, plus3);
    printf("Subject 4 | %-9.2f | %c%c\n", sub4, grade4, plus4);
    printf("Subject 5 | %-9.2f | %c%c\n", sub5, grade5, plus5);
    printf("-----------------------------------------\n");

    printf("Total marks : %.2f / 500\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    /* Overall grade */
    if (percentage >= 90)
    {
        printf("Overall grade: A+\n");
    }
    else if (percentage >= 80)
    {
        printf("Overall grade: A\n");
    }
    else if (percentage >= 70)
    {
        printf("Overall grade: B+\n");
    }
    else if (percentage >= 60)
    {
        printf("Overall grade: B\n");
    }
    else if (percentage >= 40)
    {
        printf("Overall grade: C\n");
    }
    else
    {
        printf("Overall result: Failed\n");
    }

    /* Highest marks */
    float highest = sub1;

    if (sub2 > highest)
        highest = sub2;

    if (sub3 > highest)
        highest = sub3;

    if (sub4 > highest)
        highest = sub4;

    if (sub5 > highest)
        highest = sub5;

    printf("\nHighest marks: %.2f\n", highest);

    if (sub1 == highest)
        printf("Subject 1 has the highest marks.\n");

    if (sub2 == highest)
        printf("Subject 2 has the highest marks.\n");

    if (sub3 == highest)
        printf("Subject 3 has the highest marks.\n");

    if (sub4 == highest)
        printf("Subject 4 has the highest marks.\n");

    if (sub5 == highest)
        printf("Subject 5 has the highest marks.\n");

    /* Lowest marks */
    float lowest = sub1;

    if (sub2 < lowest)
        lowest = sub2;

    if (sub3 < lowest)
        lowest = sub3;

    if (sub4 < lowest)
        lowest = sub4;

    if (sub5 < lowest)
        lowest = sub5;

    printf("\nLowest marks: %.2f\n", lowest);

    if (sub1 == lowest)
        printf("Subject 1 has the lowest marks.\n");

    if (sub2 == lowest)
        printf("Subject 2 has the lowest marks.\n");

    if (sub3 == lowest)
        printf("Subject 3 has the lowest marks.\n");

    if (sub4 == lowest)
        printf("Subject 4 has the lowest marks.\n");

    if (sub5 == lowest)
        printf("Subject 5 has the lowest marks.\n");

    /* Performance advice */
    if (sub1 < 40 && sub2 < 40 && sub3 < 40 &&
        sub4 < 40 && sub5 < 40)
    {
        printf("\nYou failed in all subjects.\n");
        printf("You need to focus on all subjects.\n");
    }
    else if (sub1 >= 40 && sub2 >= 40 && sub3 >= 40 &&
             sub4 >= 40 && sub5 >= 40)
    {
        if (percentage >= 80)
        {
            printf("\nYou passed in all subjects.\n");
            printf("You are doing great! Keep it up!\n");
        }
        else if (percentage >= 60)
        {
            printf("\nYou passed in all subjects.\n");
            printf("You still need to work hard on all subjects.\n");
        }
        else
        {
            printf("\nYou passed in all subjects.\n");
            printf("Keep working hard to improve your marks.\n");
        }
    }
    else
    {
        printf("\nYou need to focus on the subjects where you scored below 40.\n");
    }

    return 0;
}