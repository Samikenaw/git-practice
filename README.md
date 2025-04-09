
## Project Overview
This C++ program is an employee payroll system that allows users to perform the following operations:

1. **Insert**: Add new employee records.
2. **Search**: Search for an employee's details based on their ID.
3. **Delete**: Remove an employee's record.
4. **Update**: Modify an employee's information.
5. **Payroll**: Calculate the gross salary, tax, pension, and net salary for an employee.

The program uses arrays to store employee data, including name, last name, address, sex, age, ID, phone number, working hours, working days, and pay rate.

## How to Use
1. Compile the C++ code using a C++ compiler.
2. Run the executable.
3. The program will display a menu with the available options.
4. Select the desired operation by entering the corresponding letter (I, S, D, U, or P).
5. Follow the prompts to perform the selected operation.

## Code Structure
The program is structured with the following functions:

1. `main()`: The entry point of the program, which displays the menu and handles user input.
2. `menu()`: Displays the main menu options.
3. `INSERT()`: Allows the user to add new employee records.
4. `SEARCH()`: Enables the user to search for an employee's details by their ID.
5. `DELETE()`: Provides the functionality to remove an employee's record.
6. `UPDATE()`: Allows the user to modify an employee's information.
7. `PAYROLL()`: Calculates the payroll details for an employee, including gross salary, tax, pension, and net salary.

## Assumptions and Limitations
- The program assumes a maximum of 300 employees (defined by the `NE` constant).
- The tax and pension calculations are based on predefined tax brackets.
- The program does not include any error handling for invalid user inputs.

## Future Improvements
- Implement dynamic memory allocation to handle a variable number of employees.
- Add error handling and input validation to improve the user experience.
- Provide additional features, such as generating payroll reports or exporting data to a file.
- Enhance the user interface with a more intuitive and visually appealing design.

## Conclusion
This payroll system provides a basic implementation of employee management and payroll calculation functionalities. It can be further improved and expanded to meet the specific needs of an organization.
