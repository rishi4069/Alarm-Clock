#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int hour, minute, sec,i=0;
    printf("Enter Hours: ");
    scanf("%d",&hour);
    system("cls");
    printf("Enter Minute: ");
    scanf("%d",&minute);
    system("cls");
    printf("Enter Second: ");
    scanf("%d",&sec);
    system("cls");
    for(;;)
    {
        if (hour == 0 && minute == 0 && sec == 0)
        {
            break;
        }
        if (sec == 0 && minute ==0)
        {
            minute = 60;
            hour--;
        }
        if (sec == 0)
        {
            sec = 60;
            minute--;
        }
        system("cls");
        printf("TIMER -> %d : %d : %d ",hour,minute,--sec);
        Sleep(1000);
    }
        for ( i = 100; ; i = i + 5)
           Beep(i,1000);

}
