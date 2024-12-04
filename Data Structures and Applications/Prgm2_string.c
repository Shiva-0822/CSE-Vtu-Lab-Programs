/*2. Develop a Program in C for the following operations on Strings.
a. Read a main String (STR), a Pattern String (PAT) and a Replace String (REP)
b. Perform Pattern Matching Operation: Find and Replace all occurrences of PAT in
STR with REP if PAT exists in STR. Report suitable messages in case PAT does not
exist in STR .
Support the program with functions for each of the above operations. Don't use Built-in
functions.
*/

#include <stdio.h>

char str[50], pat[20], rep[20], res[50];
int c = 0, m = 0, i = 0, j = 0, k, flag = 0;
void stringmatch()
{
    while (str[c] != '\0')
    {
        if (str[m] == pat[i])
        {
            i++;
            m++;
            if (pat[i] == '\0')
            {
                flag = 1;
                for (k = 0; rep[k] != '\0'; k++, j++)
                {
                    res[j] = rep[k];
                }
                i = 0;
                c = m;
            }
        }
        else
        {
            res[j] = str[c];
            j++;
            c++;
            m = c;
            i = 0;
        }
    }
    res[j] = '\0';
}
void main()
{
    printf("Enter the main string: ");
    gets(str);
    printf("\n Enter the pat string: ");
    gets(pat);
    printf("\n Enter the replace string: ");
    gets(rep);
    printf("\n The string before pattern match is: \n%s", str);
    stringmatch();
    if (flag == 1)
    {
        printf("\n The string after pattern match and replace is: \n%s", res);
    }
    else
    {
        printf("\n Pattern string is not found");
    }
}