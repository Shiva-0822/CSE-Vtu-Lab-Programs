/*1. Develop a Program in C for the following:
a)Declare a calendar as an array of 7 elements (A dynamically Created array) to represent 7 days of
a week. Each Element of the array is a structure having three fields. The first field is the name of the
Day (A dynamically allocated String), The second field is the date of the Day (A integer),
the third field is the description of the activity for a particular day (A dynamically allocated String).
 b) Write functions create (), read () and display(); to create the calendar, to read the data from
the keyboard and to print weeks activity details report on screen.*/

#include <stdio.h>
#include <stdlib.h>

struct Day
{
    char *dayName;
    int date, day, month, year;
    char *activity;
};
void create(struct Day *day)
{
    day->dayName = (char *)malloc(sizeof(char) * 20);
    day->activity = (char *)malloc(sizeof(char) * 100);
    printf("Enter the day name: ");
    scanf("%s", day->dayName);
    printf("Enter the date in dd/mm/yyyy :");
    scanf("%d%d%d", &day->day, &day->month, &day->year);
    printf("Enter the activity for the day: ");
    scanf(" %[^\n]s", day->activity);
}
void read(struct Day *calendar, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter details for Day %d: \n", i + 1);
        create(&calendar[i]);
    }
}
void display(struct Day *calendar, int size)
{
    printf("\n Week's Activity Details: \n");
    for (int i = 0; i < size; i++)
    {
        printf("Day%d:\n", i + 1);
        printf("Day Name: %s\n", calendar[i].dayName);
        printf("Date: %d%d%d\n", calendar[i].day, calendar[i].month, calendar[i].year);
        printf("Activity: %s\n", calendar[i].activity);
        printf("\n");
    }
}
void freeMemory(struct Day *calendar, int size)
{
    for (int i = 0; i < size; i++)
    {
        free(calendar[i].dayName);
        free(calendar[i].activity);
    }
}
int main()
{
    int size;
    printf("Enter the number of days in the week: ");
    scanf("%d", &size);
    struct Day *calendar = (struct Day *)malloc(sizeof(struct Day) * size);
    if (calendar == NULL)
    {
        printf("Memory allocation failed. Exiting program. \n");
        return 1;
    }
    read(calendar, size);
    display(calendar, size);
    freeMemory(calendar, size);
    free(calendar);
    return 0;
}