/*Project: Payroll Program
Author: Victor Otieno
Date: Oct, 2021
Compiler: GCC
Language: C99
License: MIT
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*variable declaration*/
    char name[100];
    int emp_no,hours;
    int normal_pay,overtime_pay,gross;
    float tax,net;
    const int rate=1000;

    //Capture Input
    printf("\tGitonga's Factory Payslip System\n");
    printf("Employee Name:\n");
    gets(name);
    printf("Employee number:\n");
    scanf("%d",&emp_no);
    printf("Hours worked:\n");
    scanf("%d",&hours);

    if(hours>40)
    {
        normal_pay=40*rate;
        overtime_pay=(hours-40)*1.5*rate;
    }
    else
        {
       normal_pay=hours*rate;
    overtime_pay=0;
    }

    gross=normal_pay+overtime_pay;
    tax=0.16*gross;
    net=gross-tax;

    //Print payroll
    printf("Emp No:\t%s\n",emp_no);
    printf("Employee Name: \t%s\n",name);
    printf("Normal Pay: \t%d\n",normal_pay);
    printf("Gross Pay: \t%d\n",gross);
    printf("Tax: \t%f\n",tax);
    printf("Net Pay:\t%f\n",net);



    return 0;
}
