#include <stdio.h>
int main()
{
    int year;
    double capital, rate, deposit;
    printf("Please enter year,capital:");
    scanf("%d,&lf", &year, &capital);
    switch (year)
    {
    case 1:
        rate = 0.0225;
        deposit = (1 + 0.0225) * capital;
        printf("rate = %lf, deposit = %lf\n", rate, deposit);
        break;
    case 2:
        rate = 0.0243;
        deposit = (1 + 2 * 0.0243) * capital;
        printf("rate = %lf, deposit = %lf\n", rate, deposit);
        break;
    case 3:
        rate = 0.0270;
        deposit = (1 + rate * 3) * capital;
        printf("rate = %lf, deposit = %lf\n", rate, deposit);
        break;
    case 5:
        rate = 0.0288;
        deposit = (1 + rate * 5) * capital;
        printf("rate = %lf, deposit = %lf\n", rate, deposit);
        break;
    case 8:
        rate = 0.03;
        deposit = (1 + rate * 8) * capital;
        printf("rate = %lf, deposit = %lf\n", rate, deposit);
        break;
    default:
        printf("Error rate!\n");
    }
    return 0;
}