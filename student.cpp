#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
typedef struct{
    string city,
            street,
            number;
}Address;
typedef struct{
    int  day,
         month,
         year;
}DOB;
typedef struct{
   int ID;
   string fname,
          lname,
          e_mail;
   double GPA;
   Address address;
   DOB dob;
}Student;


int main()
{
    int n,i;
    printf("Enter the number of students:");
    scanf("%d",&n);
    Student A[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter your first name:");
        cin>>A[i].fname;
        printf("Enter your last name:");
        cin>>A[i].lname;
        printf("Enter your ID:");
        cin>>A[i].ID;
        printf("Enter your e-mail:");
        cin>>A[i].e_mail;
        printf("Enter your GPA:");
        cin>>A[i].GPA;
        printf("Enter your adress(city-street-number):");
        cin>>A[i].address.city;
        cin>>A[i].address.street;
        cin>>A[i].address.number;
        printf("Enter your day of birth:");
        cin>>A[i].dob.day;
        cin>>A[i].dob.month;
        cin>>A[i].dob.year;


    }

    return 0;
}
