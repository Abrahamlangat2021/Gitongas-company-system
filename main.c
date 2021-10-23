#include <stdio.h>

int main()
{
//variables declaration
char name[100];
int emp_no,hours,rate;
int normal_pay,overtime_pay,gross;
float tax,net;
    printf("Gitonga's Factory payslip system\n");
    printf("Employee Name:\n");
    gets(name);
    printf("Employee numbers:");
    scanf("%d",&emp_no);

    printf("enter hours\n");
    scanf("%d",&hours);
    //display
    rate=1000;

    if(hours>40){
        normal_pay=40*rate;
        overtime_pay=(hours-40)*1.5*rate;
    }
    else{

         normal_pay=hours*rate;
         overtime_pay=0;
    }
    gross=normal_pay+overtime_pay;
    tax=0.16*gross;
    net=gross-tax;


    tax=0.16*gross;
    net=gross-tax;
    printf("Emp No:\t%d\n",emp_no);
    printf("Employee Name:t%s\n",name);
    printf("Normal pay: \t%d\n",normal_pay);
    printf("Overtime pay:\t%d\n",overtime_pay);
    printf("Gross pay:\t%d\n",gross);
    printf("Tax:\t%f\n",tax);
    printf("Net pay:\t%f\n",net);
    //display
    printf("normalpay=%d",normal_pay);


    return 0;
}
