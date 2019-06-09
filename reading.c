#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void Exchange(int a, int b)
{
    int temp;
    temp = arrow[a];
    arrow[a] = arrow[b];
    arrow[b] = temp;
}

void main()
{
    int ch, value = 0;
    ch = getch ();
    if (ch == 0 || ch == 224)
    {
        switch (getch ())
        {
            case 75://LeftArrow
            if(y>0)
            {
                Exchange(y, y-1);
                y = y-1;
            }
            else
                printf("\a");
            return value;
            break;

            case 77://RightArrow
            if(y<3)
            {
                Exchange(y, y+1);
                y = y+1;
            }
            else
                printf("\a");
            return value;
            break;

            default :
            value = 1;
            return value;
        }
        else if (ch == 'q' || ch == 'Q')
            {
                value = 1;
                return value;
            }
    }
