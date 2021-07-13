/****************************************************************************************************
 
filename:         agecalculator.c
author:           Khemraj Shrestha
created date:-    2021/06/30 (YYYY/MM/DD)
description:-     This program claculate the age of user.

****************************************************************************************************/

#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    int y, m, d, age1, age2, age3;
    char ch;
    {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    }
    {
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);
    }
    {
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);
    }
    start:
    printf("Enter your birth year in AD: \n");
    int check1 = scanf("%d", &y);
    if (check1!=1)
    {
        printf("Please enter in number only. \n");
        printf("Do you want to continue ? \n If yes hit 'y' or 'Y'. \n");
        scanf(" %c", &ch);
        if (ch=='y' || ch=='Y')
        goto start;
/*         else
        return 0; */
    }
    else
     {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    if ((tm.tm_year + 1900)<y)
    {
        printf("Birth year is always lesser or equals to the Current year. \n So, please enter vallid year. \n");
        printf("Do you want to continue ? \n If yes hit 'y' or 'Y'. \n");
        scanf(" %c", &ch);
        if (ch=='y' || ch=='Y')
        goto start;
        else
        return 0;
    }
    }
    {
        if (y<0)
        {
        printf("Sorry! Year can't be negative. \n");
        printf("Do you want to continue ? If yes hit 'y' or 'Y'. \n");
        scanf(" %c", &ch);
        {
        if (ch=='y' || ch=='Y')
        goto start;
        else
        return 0;
        }
        }
    }
    printf("Enter your birth month in AD: \n");
    int check2 = scanf("%d", &m);
    if (check2!=1)
    {
        printf("Please enter in number only. \n");
        printf("Do you want to continue ? \n If yes hit 'y' or 'Y'. \n");
        scanf(" %c", &ch);
        if (ch=='y' || ch=='Y')
        goto start;
        else
        return 0;
    }
    else
    {
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);
        if ((tm.tm_year + 1900) == y && (tm.tm_mon + 1)<m)
        {
            printf("You are entering the upcoming month. \n");
            printf("Do you want to continue ? \n If yes hit 'y' or 'Y'. \n");
            scanf(" %c", &ch);
            if (ch=='y' || ch=='Y')
            goto start;
            else
            return 0;
        }
    }
    {
    if (m>12)
    {
        printf("Please make sure that the month is within range. \n");
        printf("Do you want to continue ? \n If yes hit 'y' or 'Y'. \n");
        scanf(" %c", &ch);
        if (ch=='y' || ch=='Y')
        goto start;
        else
        return 0;
    }
    if (m<0)
    {
        printf("Sorry! Month can't be negative. \n");
        printf("Do you want to continue again ? \n If yes hit 'y' or 'Y'. \n");
        scanf(" %c", &ch);
        if (ch=='y' || ch=='Y')
        goto start;
        else
        return 0;
    }
    }
    printf("Enter your birth day in AD: \n");
    int check3 = scanf("%d", &d);
    if (check3!=1)
    {
        printf("Please enter in number only. \n");
        printf("Do you want to continue ? \n If yes hit 'y' or 'Y'. \n");
        scanf(" %c", &ch);
        if (ch=='y' || ch=='Y')
        goto start;
        else
        return 0;
    }
    else
      {
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);
        if ((tm.tm_year + 1900) == y && (tm.tm_mon + 1) == m && (tm.tm_mday)<d)
        {
            printf("You are entering the upcoming day. \n");
            printf("Do you want to continue ? \n If yes hit 'y' or 'Y'. \n");
            scanf(" %c", &ch);
            if (ch=='y' || ch=='Y')
            goto start;
            else
            return 0;
        }
    }
    {
    if (d>31)
    {
        printf("Please make sure that the day is within range. \n");
        printf("Do you want to continue again ? \n If yes hit 'y' or 'Y'. \n");
        scanf(" %c", &ch);
        if (ch=='y' || ch=='Y')
        goto start;
        else
        return 0;
    }
    if (d<0)
    {
        printf("Sorry! Day can't be negative. \n");
        printf("Do you want to continue again ? \n If yes hit 'y' or 'Y'. \n");
        scanf(" %c", &ch);
        if (ch=='y' || ch=='Y')
        goto start;
        else
        return 0;
    }
    }
   time_t t = time(NULL);
   struct tm tm = *localtime(&t);
   age1 = (tm.tm_year + 1900) - y;
   age2 = (tm.tm_mon + 1) - m;
   age3 = (tm.tm_mday) - d;
   if (age1==0 && age2>0 && age3<0)
   {
       if ((tm.tm_mday)<d)
       {
           age2 = age2-1;
           age3 = ((31-d) + (tm.tm_mday));
           printf("\n \t You are %02d months and %02d days. \n", age2, age3);
       }
       else
       {
           printf("\n \t You are %02d months and %02d days. \n", age2, age3);
       }
   }
    else if (age1!=0 && age2==0 && age3<0)
    {
        if (((tm.tm_year + 1900) - y)==1)
        {
            if (m<=(tm.tm_mon + 1))
            {
                age2 = ((11-m) + (tm.tm_mon + 1));
                age3 = ((31-d) + (tm.tm_mday));
                printf("\n \t You are %02d months and %02d days. \n", age2, age3);
            }
            else
            {
                age2 = ((12-m) + (tm.tm_mon + 1));
                age3 = ((31-d) + (tm.tm_mday));
                printf("\n \t You are %02d months and %02d days. \n", age2, age3);
            }
        }
        else
        {
            age1 = age1-1;
            age2 = ((11-m) + (tm.tm_mon + 1));
            age3 = ((31-d) + (tm.tm_mday));
            printf("\n \t You are %d years old with %02d months and %02d days. \n", age1, age2, age3);
        }
    }
    else if (age1!=0 && age2<0)
    {
        if (((tm.tm_year + 1900) - y)==1)
        {
        if (age3>0)
        {
            age1 = age1-1;
            age2 = ((12-m) + (tm.tm_mon + 1));
            printf("\n \t You are %d years old with %02d months and %02d days. \n", age1, age2, age3);
        }
          else if (age3==0)
        {
            age1 = age1-1;
            age2 = ((12-m) + (tm.tm_mon + 1));
            printf(" \n \t You are %d years old and %02d months. \n", age1, age2);
        }
        else if (age3<0)
        {
            age2 = ((11-m) + (tm.tm_mon + 1));
            age3 = ((31-d) + (tm.tm_mday));
            printf("\n \t You are %02d months and %02d days. \n", age2, age3);
        }
        }
        else
        {
                if (age3>0)
        {
            age1 = age1-1;
            age2 = ((12-m) + (tm.tm_mon + 1));
            printf("\n \t You are %d years old with %02d months and %02d days. \n", age1, age2, age3);
        }
          else if (age3==0)
        {
            age1 = age1-1;
            age2 = ((12-m) + (tm.tm_mon + 1));
            printf(" \n \t You are %d years old and %02d months. \n", age1, age2);
        }
        else if (age3<0)
        {
            age1 = age1-1;
            age2 = ((11-m) + (tm.tm_mon + 1));
            age3 = ((31-d) + (tm.tm_mday));
            printf("\n \t You are %d years old with %02d months and %02d days. \n", age1, age2, age3); 
        }
    }
    }
    else if (age1!=0 && age2>0 && age3<0)
    {
        if (((tm.tm_year + 1900)-y)==1)
        {
            age2 = age2-1;
            age3 = ((31-d) + (tm.tm_mday));
            printf("\n \t You are %d years old with %02d months and %02d days. \n", age1, age2, age3);
        }
        else
        {

            if (((tm.tm_mon + 1)-m)==1)
            {
            age3 = ((31-d) + (tm.tm_mday));
            printf("\n \t You are %d years and %02d days. \n", age1, age3);
            }
            else
            {
            age2 = age2-1;
            age3 = ((31-d) + (tm.tm_mday));
            printf("\n \t You are %d years old with %02d months and %02d days. \n", age1, age2, age3);  
            }
        }
    }
    else if (age3<0 && age2>0)
    {
        printf("\n \t You are %d years old with %02d months and %02d days. \n", age1, age2, -age3);
    }
    else if (age2<0 && age3<0)
    {
        printf("\n \t You are %d years old with %02d months and %02d days. \n", age1, -age2, -age3);
    }
    else
        printf("\n \t You are %d years old with %02d months and %02d days. \n", age1, age2, age3);
    printf("\n Do you want further calculation ? \n If yes hit 'y' or 'Y'. \n");
    scanf(" %c", &ch);
    if (ch=='y' || ch=='Y')
    goto start;
    else
    return 0;
}

/* 

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int year, month, day;
    printf("Enter Your birth date in DD MM YYYY format. \n");
    int check = scanf("%d %d %d", &day, &month, &year);
    if (check!=3)
    {
        printf("Please enter in the number only. \n");
        return 0;
    }
    else if (month>12 || day>31)
    {
        printf("Please make sure that the day and month are within range. \n");
    }
    else
    {
    int age = 2021-year;
    if (month>3)
    {
        age--;
    }
    else if (month==3)
    {
        if (day>14)
        {
            age--;
        }
    }
    printf("You are %d years old. \n", age);
    }
    return 0;
} */

/*hello hello
djkszkx*/