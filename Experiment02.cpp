#include <stdio.h>

// Creating structure
struct Date {
    int month;
    int day;
    int year;
};

int main() {
    
    // Declaring structure variable
    struct Date d;

    // Taking input from user
    printf("Enter date (MM/DD/YYYY): ");
    scanf("%d/%d/%d", &d.month, &d.day, &d.year);

    // Displaying date
    printf("Date entered: %02d/%02d/%04d\n", d.month, d.day, d.year);

    return 0;
}
