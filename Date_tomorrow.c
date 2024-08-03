#include<stdio.h>
#include<stdlib.h>

#define Months_per_year 12


int main(int argc, char *argv[]){
    int day=0,month=0,year=0;
    int Day_in_month,feb,is_leap;
    printf("Enter a date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d",&day,&month,&year);
    feb=28;//Amount of days in February
    is_leap=0;
    //Calculate for leap year
    if(year%4==0 && (year%100!=0||year%400==0)){
        /*If the year number is multiple of 4
        and if the multiple of 100 is not 0 or
        multiple of 400 is not 0 then leap year is
        accounted for.    
        */
        feb+=1;
        is_leap=1;
    }
    
    //Compute month length
    switch(month){
        case 1:
            Day_in_month=31;
            break;
        case 2:
            Day_in_month=feb;
            break;
        case 3:
            Day_in_month=31;
            break;
        case 4:
            Day_in_month=30;
            break;
        case 5:
            Day_in_month=31;
            break;
        case 6:
            Day_in_month=30;
            break;
        case 7:
            Day_in_month=31;
            break;
        case 8:
            Day_in_month=31;
            break;
        case 9:
            Day_in_month=30;
            break;
        case 10:
            Day_in_month=31;
            break;
        case 11:
            Day_in_month=30;
            break;
        case 12:
            Day_in_month=31;
            break;
    }
    printf("The date today is: %02d/%02d/%04d",day,month,year);
    
    //Accounts for tomorrow
    day += 1;
      /*Check if day is more than the amount of day
        in a month.*/
    if(is_leap==1&&month==2){
        day=29;
    }else if(day>=Day_in_month){
        day=1;
        month+=1;
    }
    
    if(month>Months_per_year){
        month=1;
        year+=1;
    }
    printf("\nThe date tomorrow is: %02d/%02d/%04d\n",day,month,year);
    return 0;
}
