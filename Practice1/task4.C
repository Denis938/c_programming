#include <stdio.h>
#include <time.h>

int main() {
   int date;
   printf("Enter date in the format(20250210): ");
   scanf("%d", &date);

   int day = date % 100;
   int month = (date / 100 )% 100;
   int year = ((date / 100 ) / 100) % 10000;

   printf("year: %d\nmonth: %02d\nday : %d\n", year, month, day);

   time_t mytime = time(NULL);
   struct tm now = *localtime(&mytime);
   
   int currentDate = now.tm_year + 1900; 
   currentDate = currentDate * 100 + (now.tm_mon + 1); 
   currentDate = currentDate * 100 + now.tm_mday; 
   printf("Your data: %d\n", currentDate);
   
   if (currentDate > date){
       printf("You are in the past");
    } else if (currentDate < date) {
        printf("You are in the future");
    } else {
        printf("You entered the current date");
    }
}