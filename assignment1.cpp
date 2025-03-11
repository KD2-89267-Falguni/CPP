/*Write a menu driven program for Date in a C. Declare a structure Date having data members
day, month, year. Implement the following functions.
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);*/



#include<stdio.h>

// void printDateOnConsole(struct date* ptrDate);
// void acceptDateFromConsole(struct date* ptrDate);
struct date
{
int day;
int month;
int year;
};

void acceptDateFromConsole(struct date* ptrDate)
{
    printf("Enter Day,Month and year");
    scanf("%d%d%d",&ptrDate->day,&ptrDate->month,&ptrDate->year);
}


void printDateOnConsole(struct date* ptrdate)
{
printf("%d%d%d",ptrdate->day, ptrdate->month, ptrdate->year);
printf("Entered Date:%02d-%02d-%04d\n",ptrdate->day, ptrdate->month,ptrdate->year);
}




int main()
{
    struct date d1;
    acceptDateFromConsole(&d1);
    printDateOnConsole(&d1);
    return 0;
}

  
  
     

