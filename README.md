# Date Class Library

The **Date Class Library** is a C++ library that provides a wide range of utilities for manipulating and analyzing dates. It is implemented as a class (`clsDate`) and includes methods for common date operations such as calculating differences between dates, checking leap years, printing calendars, adding or subtracting days, and more.

---

## Features

The `clsDate` class includes the following features:

1. **Date Initialization**:
   - Initialize with day, month, and year.
   - Initialize with a string in the format "DD/MM/YYYY".
   - Default constructor to get the system date.

2. **Date Validation**:
   - Check if a date is valid.

3. **Leap Year Calculation**:
   - Check if a year is a leap year.

4. **Days in Month/Year**:
   - Get the number of days in a specific month.
   - Get the number of days in a specific year.

5. **Day of the Week**:
   - Get the day of the week for a specific date.

6. **Calendar Printing**:
   - Print the calendar for a specific month.
   - Print the calendar for a specific year.

7. **Date Manipulation**:
   - Add or subtract days, weeks, months, or years from a date.
   - Calculate the difference between two dates.

8. **Business Days Calculation**:
   - Calculate the number of business days between two dates.

9. **Vacation Calculation**:
   - Calculate the return date after a vacation.

10. **Date Comparison**:
    - Compare two dates to determine which one is earlier, later, or if they are equal.

---

## Usage

### Include the Header File
To use the `clsDate` class, include the header file in your C++ program:

```cpp
#include "clsDate.h"
