
#include <stdio.h>//scanf(),printf()a

#include <string.h>//strcpy()



struct  employee {

   int  id;

   char name[25];

   char department [20];

   float salary;

   char email [50];

  };//strcpy employee 1;

  

  int main (){

  

  //

  

       struct employee employee1, employee2;

       

      employee1.id = 12345;

       strcpy(employee1.name,"John Doe");

       strcpy(employee1.department, "Human Resources ");

       employee1.salary = 55000.50;

       strcpy(employee1.email,"john.doe@company.com");

       

       printf("id:%d \n", employee1.id);

       printf("name:%s \n",employee1.name);

       printf("department:%s \n", employee1.department);

       printf("salary:%f\n", employee1.salary);

       printf("email: %s \n", employee1.email);

       return 0;

       }