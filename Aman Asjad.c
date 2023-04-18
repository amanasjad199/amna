#include<stdio.h>
int main()
{
    /*Aman Asjad, SP23-BCS-016, Section A*/
int hours;
int rate;
int i=1;
float average;
int salary;
int total=0;
int max;

printf("Enter hours worked by employee(500 to 5000)\n:"); //calculates hours worked by employee
scanf("%d", &hours);

printf("Enter rate per hour:\n"); //calculates rate per hour
scanf("%d", &rate);


salary=hours*rate;
printf("the salary is %d", salary); //prints salary
total=total+salary;

max=hours;
while(i<=9){          //input of 10 employees
while((rate<500) || (rate>5000)){

    printf("invalid rate of rate per hour\n",rate);
printf("Enter rate:\n");
scanf("%d", &rate);

salary=hours*rate;
printf("the salary is %d\n", salary);
total=total+salary;

printf("Enter hours worked by employee:\n");
scanf("%d", &hours);

printf("Enter rate per hour(500 to 5000):\n");
scanf("%d", &rate);
if (hours>max){
        max=hours;
        salary=hours*rate; //calculates salary
printf("the salary is %d\n", salary);
total=total+salary;
        i++; // counter increasing by 1
}
}
}
printf("%d/n",total);
average=(float)total/10;
printf("the average salary is %.2f\n",average);     // print average salary
printf("maximum hours worked is %.2f\n",hours);    //prints maximum hours worked

return 0;
}
