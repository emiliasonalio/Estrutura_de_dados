#include <stdio.h>

int main() {
    int employee, workedHours;
    float amountHours, salary;

    scanf("%d", &employee);
    scanf("%d", &workedHours);
    scanf("%f", &amountHours);

    salary = workedHours * amountHours;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", employee, salary);


    return 0;
}
