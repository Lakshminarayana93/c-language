#include <stdio.h>
int isLeapYear(int year)
{
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) return 1;
            else return 0;
        } else return 1;
    } else return 0;
}
int getDaysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 0;
    }
}

// Function to print the next day's date
void printNextDay(int day, int month, int year) {
    int daysInMonth = getDaysInMonth(month, year);

    if (day < daysInMonth) {
        day++;
    } else {
        day = 1;
        if (month < 12) {
            month++;
        } else {
            month = 1;
            year++;
        }
    }

    printf("Next day: %02d-%02d-%04d\n", day, month, year);
}

int main() {
    int day, month, year;

    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    printNextDay(day, month, year);

    return 0;
}
