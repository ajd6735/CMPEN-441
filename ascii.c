/*
 *  PLAGIARISM STATEMENT
 *    I certify that this assignment/report is my own work, based on my personal
 *    study and/or research and that I have acknowledged all material and sources
 *    used in its preparation, whether they be books, articles, reports, lecture notes, online sources
 *    and any other kind of document, electronic or personal communication. I also
 *    certify that this assignment/report has not previously been submitted for
 *    assessment in any other unit, except where specific permission has been granted
 *    from all unit coordinators involved, or at any other time in this unit, and that I
 *    have not copied in part or whole or otherwise plagiarised the work of other
 *    students and/or persons.
 *
 *  Name       : Ana Diru
 *  PSU Email  : ajd6735@psu.edu
 *  Assignment : Homework 1
 */

#include <stdio.h>
#include <string.h>
int main()
{
    char *input = "Transistors";
    printf(input);
    printf("\nThe length of the string is %d\n", strlen(input)); // The length of the string is 13

    int length = strlen(input); // store the length of the string into the length variable

    // print out the vertical table
    printf("+-------+------+-------+\n");
    printf("| index | char | ascii |\n");
    printf("+-------+------+-------+\n");
    for (int i = 0; i < length; i++)
    {
        printf("| %5d | %4c | %5d |\n", i, input[i], input[i]);
        printf("+-------+------+-------+\n");
    }

    printf("\n");

    // print out the horizontal table
    printf("+-------");
    for (int i = 0; i < length; i++)
    {
        printf("+-------");
    }
    printf("+\n| index ");
    for (int i = 0; i < length; i++)
    {
        printf("| %5d ", i);
    }
    printf("|\n+-------");
    for (int i = 0; i < length; i++)
    {
        printf("+-------");
    }
    printf("+\n| char  ");
    for (int i = 0; i < length; i++)
    {
        printf("| %5c ", input[i]);
    }
    printf("|\n+-------");
    for (int i = 0; i < length; i++)
    {
        printf("+-------");
    }
    printf("+\n| ascii ");
    for (int i = 0; i < length; i++)
    {
        printf("| %5d ", input[i]);
    }
    printf("|\n+-------");
    for (int i = 0; i < length; i++)
    {
        printf("+-------");
    }
    printf("+\n");

    return 0;
}

/*
Transistors
The length of the string is 11
+-------+------+-------+
| index | char | ascii |
+-------+------+-------+
|     0 |    T |    84 |
+-------+------+-------+
|     1 |    r |   114 |
+-------+------+-------+
|     2 |    a |    97 |
+-------+------+-------+
|     3 |    n |   110 |
+-------+------+-------+
|     4 |    s |   115 |
+-------+------+-------+
|     5 |    i |   105 |
+-------+------+-------+
|     6 |    s |   115 |
+-------+------+-------+
|     7 |    t |   116 |
+-------+------+-------+
|     8 |    o |   111 |
+-------+------+-------+
|     9 |    r |   114 |
+-------+------+-------+
|    10 |    s |   115 |
+-------+------+-------+

+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
| index |     0 |     1 |     2 |     3 |     4 |     5 |     6 |     7 |     8 |     9 |    10 |
+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
| char  |     T |     r |     a |     n |     s |     i |     s |     t |     o |     r |     s |
+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
| ascii |    84 |   114 |    97 |   110 |   115 |   105 |   115 |   116 |   111 |   114 |   115 |
+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
*/
