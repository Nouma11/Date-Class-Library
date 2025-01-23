#include <iostream>
#include "clsDate.h" // Include the header file for clsDate
using namespace std;

int main() {
    // Create an object of clsDate
    clsDate date1(15, 10, 2023); // Initialize with day, month, year
    clsDate date2("20/10/2023"); // Initialize with a string
    clsDate date3; // Default constructor (system date)

    // Test 1: Print the dates
    cout << "Test 1: Print the dates\n";
    cout << "Date 1: ";
    date1.Print();
    cout << "Date 2: ";
    date2.Print();
    cout << "Date 3 (System Date): ";
    date3.Print();

    // Test 2: Check if a date is valid
    cout << "\nTest 2: Check if a date is valid\n";
    cout << "Is Date 1 valid? " << (date1.IsValid() ? "Yes" : "No") << endl;

    // Test 3: Check if a year is a leap year
    cout << "\nTest 3: Check if a year is a leap year\n";
    cout << "Is 2023 a leap year? " << (date1.isLeapYear() ? "Yes" : "No") << endl;

    // Test 4: Get the number of days in a month
    cout << "\nTest 4: Get the number of days in a month\n";
    cout << "Number of days in October 2023: " << date1.NumberOfDaysInAMonth() << endl;

    // Test 5: Get the day of the week for a date
    cout << "\nTest 5: Get the day of the week for a date\n";
    cout << "Day of the week for Date 1: " << date1.DayShortName() << endl;

    // Test 6: Print the month calendar
    cout << "\nTest 6: Print the month calendar\n";
    date1.PrintMonthCalendar();

    // Test 7: Print the year calendar
    cout << "\nTest 7: Print the year calendar\n";
    date1.PrintYearCalendar();

    // Test 8: Add days to a date
    cout << "\nTest 8: Add days to a date\n";
    date1.AddDays(10);
    cout << "Date 1 after adding 10 days: ";
    date1.Print();

    // Test 9: Calculate the difference between two dates
    cout << "\nTest 9: Calculate the difference between two dates\n";
    cout << "Difference between Date 1 and Date 2: " << date1.GetDifferenceInDays(date2) << " days" << endl;

    // Test 10: Check if a date is a weekend
    cout << "\nTest 10: Check if a date is a weekend\n";
    cout << "Is Date 1 a weekend? " << (date1.IsWeekEnd() ? "Yes" : "No") << endl;

    // Test 11: Calculate business days between two dates
    cout << "\nTest 11: Calculate business days between two dates\n";
    cout << "Business days between Date 1 and Date 2: " << date1.CalculateBusinessDays(date1, date2) << endl;

    // Test 12: Calculate vacation return date
    cout << "\nTest 12: Calculate vacation return date\n";
    clsDate vacationStartDate(1, 10, 2023);
    short vacationDays = 10;
    clsDate returnDate = vacationStartDate.CalculateVacationReturnDate(vacationStartDate, vacationDays);
    cout << "Vacation starts on: ";
    vacationStartDate.Print();
    cout << "Vacation ends on: ";
    returnDate.Print();

    // Test 13: Compare two dates
    cout << "\nTest 13: Compare two dates\n";
    clsDate date4(15, 10, 2023);
    clsDate date5(20, 10, 2023);
    cout << "Comparing Date 4 and Date 5: ";
    if (date4.CompareDates(date5) == clsDate::enDateCompare::Before)
        cout << "Date 4 is before Date 5" << endl;
    else if (date4.CompareDates(date5) == clsDate::enDateCompare::Equal)
        cout << "Date 4 is equal to Date 5" << endl;
    else
        cout << "Date 4 is after Date 5" << endl;

    return 0;
}