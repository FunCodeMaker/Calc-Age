#include <stdio.h>
#include <time.h>

// Function to calculate age
void calculateAge(int birthDay, int birthMonth, int birthYear) {
    // Get the current date
    time_t now;
    struct tm *currentDate;
    time(&now);
    currentDate = localtime(&now);

    // Calculate age
    int currentYear = currentDate->tm_year + 1900;
    int currentMonth = currentDate->tm_mon + 1;
    int currentDay = currentDate->tm_mday;

    int ageYears = currentYear - birthYear;
    int ageMonths = currentMonth - birthMonth;
    int ageDays = currentDay - birthDay;

    // Adjust for negative age
    if (ageMonths < 0 || (ageMonths == 0 && ageDays < 0)) {
        ageYears--;
        ageMonths += 12;
    }

    printf("Age: %d years, %d months, and %d days\n", ageYears, ageMonths, ageDays);
}