#include <stdio.h>

// Define the structure for Employee
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n;
    
    // Ask the user how many employees to input
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Declare an array of Employee structures
    struct Employee employees[n];
    float totalSalary = 0.0;
    
    // Input details for each employee
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].id);
        printf("Employee Name: ");
        getchar();  // To consume the newline character left by previous scanf
        fgets(employees[i].name, 50, stdin);  // Read string with spaces
        printf("Employee Salary: ");
        scanf("%f", &employees[i].salary);

        // Add salary to totalSalary
        totalSalary += employees[i].salary;
    }

    // Calculate average salary
    float averageSalary = totalSalary / n;

    // Output the average salary
    printf("\nThe average salary of %d employees is: %.2f\n", n, averageSalary);
    
    return 0;
}
