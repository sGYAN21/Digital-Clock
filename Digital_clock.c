#include <stdio.h>
// #include <time.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
int main()
{
    int hour, minute, second;
    int d = 1000;
    printf("Enter Time :\n");
    scanf("%d%d%d", &hour, &minute, &second);
    if (hour > 12 || minute > 60 || second > 60)
    {
        printf("Error in Your Time !\n");
        exit(0);
    }
    while (1)
    {
        second++;
        if (second > 59)
        {
            minute++;
            second = 0;
        }
        if (minute > 59)
        {
            hour++;
            minute = 0;
        }
        if (hour > 12)
        {
            hour = 1;
        }
        printf("\nClock :");
        printf("\n%02d : %02d : %02d", hour, minute, second);
        Sleep(d);
       system("cls");
    }
    return 0;
}