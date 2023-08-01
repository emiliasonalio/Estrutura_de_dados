#include <stdio.h>

int main() {
    double fixedSalary, sales, salary;
    char employee[12];

    scanf("%s", &employee);
    scanf("%lf", &fixedSalary);
    scanf("%lf", &sales);

    salary = fixedSalary + sales * 0.15;

    printf("TOTAL = R$ %.2f\n",salary);


    return 0;
}

