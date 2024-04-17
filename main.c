#include "all.h"

int main() {
    int birthDay, birthMonth, birthYear;

    printf("Enter your birth date (day month year): ");
    scanf("%d %d %d", &birthDay, &birthMonth, &birthYear);

    calculateAge(birthDay, birthMonth, birthYear);

    return 0;
}