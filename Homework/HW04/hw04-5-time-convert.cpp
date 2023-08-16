/*
    จงเขียนโปรแกรมเพื่อแปลงหน่วยจาก "วัน" เป็น "วินาที"

    Test case:
        Input Days :
            8
    Output:
        8 days = 691200 seconds

    Test case:
        Input Days :
            27
    Output:
        27 days = 2332800 seconds
*/
#include <stdio.h>
#include <locale.h>
int main()
{
    char ID[10];
    int Work_hrs = 0;
    float Salary = 0;
    printf("Please Enter your ID : ");
    scanf("%s", ID);
    printf("Please Enter your working(hrs) : ");
    scanf("%d", &Work_hrs);
    printf("Please Enter your Salary : ");
    scanf("%f", &Salary);
    setlocale(LC_NUMERIC, "");
    printf("Expected Output:\n");
    printf("Employees ID = %s\n", ID);
    printf("Salary = U$ %'.2f", Salary * Work_hrs);
    return 0;
}