/*Project: Student Grades Management System
Description
Create a simple C++ program that allows a user to:

Enter the number of students.
Store student names and their grades using arrays and pointers.
Calculate the average grade.
Display student details and indicate whether they passed or failed (pass mark: 50%).
Features to Implement
Use dynamic memory allocation (pointers) to store student names and grades.
Use pointer arithmetic to access and modify array values.
Calculate the average grade of the class.
Display each student's name, grade, and status (Pass/Fail).
*/

#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<stdlib.h>
     typedef int values_t;
       typedef double floats_t;
int main(){
      values_t classSize=0,grades=50,option;
    floats_t  sum=0,average;
  system("cls");
     printf("Enter number of students in the class:");
          std::cin>>classSize;
            values_t* pMarks = new int[classSize];
    std::string* pStudentNames = new std::string[classSize];
    std::cin.ignore();
 system("cls");
    printf("We have %d students in the class\n",classSize);
       for (values_t i = 0; i < classSize ;i++)
       {
                std::cout<<std::endl;
                printf("________________________________________\n");  
                    std::cout<<std::endl;
        std::cout<<"Name Of Student "<<i+1<<":";
          getline(std::cin,pStudentNames[i]);
       std::cout<<std::endl;
          while (true)
          {
              
            std::cout<<"Final Mark Of "<<pStudentNames[i]<<":";
          std::cin>>pMarks[i];
             std::cin.ignore(); 
                if (pMarks[i]>0 && pMarks[i]<100)
                {
                 break; 
                }
                
          }
 
                       
       }
      system("cls");
      printf("________________________________________\n");
         printf("CLASS LIST\n");
         printf("________________________________________\n"); 
       
       for (values_t i = 0; i < classSize ;i++)
       {
         std::cout<<std::endl;
            std::cout<<i+1<<":"<<pStudentNames[i];
            std::cout<<std::endl;
            std::cout<<"       Final Mark:"<<pMarks[i]<<"%";
               std::cout<<std::endl;
            if (pMarks[i]>=0 && pMarks[i]<50)
                {
              std::cout<<"   Status: Fail";
                std::cout<<std::endl;
                }
                 if (pMarks[i]>=50 && pMarks[i]<75)
                {
              std::cout<<"   Status: PASS";
                std::cout<<std::endl;
                }
                if (pMarks[i]>=75 && pMarks[i]<101)
                {
              std::cout<<"   Status: PASS DISTINCTION";
                std::cout<<std::endl;
                }
             std::cout<<std::endl;
              
                    }
            for (values_t i = 0; i < classSize; i++)
            {
               sum+=pMarks[i];
            }
            average =(sum/classSize);
            std::cout<<std::endl;
             printf("________________________________________\n\n");
                printf("SELECT WHICH STATISTIC YOU WANT TO OBSERVE\n1:Average(Mean)\n2:Spread(Standard Deviation)\n3:Range(max-min)\n4:All\n");
            printf("________________________________________\n\n");
               std::cin>>option;
                 std::cin.ignore();
                   system("cls");
                   switch (option)
                   {
                   case 1:
                       printf("________________________________________\n");
         printf("CLASS LIST\n");
         printf("________________________________________\n"); 
       
       for (values_t i = 0; i < classSize ;i++)
       {
         std::cout<<std::endl;
            std::cout<<i+1<<":"<<pStudentNames[i];
            std::cout<<std::endl;
            std::cout<<"       Final Mark:"<<pMarks[i]<<"%";
               std::cout<<std::endl;
            if (pMarks[i]>=0 && pMarks[i]<50)
                {
              std::cout<<"   Status: Fail";
                std::cout<<std::endl;
                }
                 if (pMarks[i]>=50 && pMarks[i]<75)
                {
              std::cout<<"   Status: PASS";
                std::cout<<std::endl;
                }
                if (pMarks[i]>=75 && pMarks[i]<101)
                {
              std::cout<<"   Status: PASS DISTINCTION";
                std::cout<<std::endl;
                }
             std::cout<<std::endl;
              
                    }
                    printf("CLASS AVERAGE:\n        %.2f%c \n",average,'%');  
                   printf("________________________________________\n");
                    break;
                   case 2:
                    printf("________________________________________\n");
         printf("CLASS LIST\n");
         printf("________________________________________\n"); 
       
       for (values_t i = 0; i < classSize ;i++)
       {
         std::cout<<std::endl;
            std::cout<<i+1<<":"<<pStudentNames[i];
            std::cout<<std::endl;
            std::cout<<"       Final Mark:"<<pMarks[i]<<"%";
               std::cout<<std::endl;
            if (pMarks[i]>=0 && pMarks[i]<50)
                {
              std::cout<<"   Status: Fail";
                std::cout<<std::endl;
                }
                 if (pMarks[i]>=50 && pMarks[i]<75)
                {
              std::cout<<"   Status: PASS";
                std::cout<<std::endl;
                }
                if (pMarks[i]>=75 && pMarks[i]<101)
                {
              std::cout<<"   Status: PASS DISTINCTION";
                std::cout<<std::endl;
                }
             std::cout<<std::endl;
              
                    }
                   printf("CLASS SPREAD:\n        %.2f%c \n",average,'%');  
                   printf("________________________________________\n");
                     break;
                     case 3:
                      printf("________________________________________\n");
         printf("CLASS LIST\n");
         printf("________________________________________\n"); 
       
       for (values_t i = 0; i < classSize ;i++)
       {
         std::cout<<std::endl;
            std::cout<<i+1<<":"<<pStudentNames[i];
            std::cout<<std::endl;
            std::cout<<"       Final Mark:"<<pMarks[i]<<"%";
               std::cout<<std::endl;
            if (pMarks[i]>=0 && pMarks[i]<50)
                {
              std::cout<<"   Status: Fail";
                std::cout<<std::endl;
                }
                 if (pMarks[i]>=50 && pMarks[i]<75)
                {
              std::cout<<"   Status: PASS";
                std::cout<<std::endl;
                }
                if (pMarks[i]>=75 && pMarks[i]<101)
                {
              std::cout<<"   Status: PASS DISTINCTION";
                std::cout<<std::endl;
                }
             std::cout<<std::endl;
              
                    }
                     printf("CLASS RANGE:\n        %.2f%c \n",average,'%');  
                   printf("________________________________________\n");
                   break;
                     case 4:
                      printf("________________________________________\n");
         printf("CLASS LIST\n");
         printf("________________________________________\n"); 
       
       for (values_t i = 0; i < classSize ;i++)
       {
         std::cout<<std::endl;
            std::cout<<i+1<<":"<<pStudentNames[i];
            std::cout<<std::endl;
            std::cout<<"       Final Mark:"<<pMarks[i]<<"%";
               std::cout<<std::endl;
            if (pMarks[i]>=0 && pMarks[i]<50)
                {
              std::cout<<"   Status: Fail";
                std::cout<<std::endl;
                }
                 if (pMarks[i]>=50 && pMarks[i]<75)
                {
              std::cout<<"   Status: PASS";
                std::cout<<std::endl;
                }
                if (pMarks[i]>=75 && pMarks[i]<101)
                {
              std::cout<<"   Status: PASS DISTINCTION";
                std::cout<<std::endl;
                }
             std::cout<<std::endl;
              
                    }
                     printf("CLASS AVERAGE:%.2f%c \nCLASS RANGE:",average,'%');  
                   printf("________________________________________\n");
                      
                   default:
                    break;
                   }
                         
  system("pause>0");
}
  
  