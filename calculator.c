#include<stdio.h>
int calcui()
{
    printf(" _________________________ \n");//25 underscores
    printf("│ _______________________ │\n");
    printf("││%23d││\n",input); //take input in array of two
    printf("│ ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯ │\n");
    printf("│     _______________     │\n");
    printf("│    │ + │ - │ × │ ÷ │    │\n"); //read the arrows
    printf("│     ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯     │\n");
    printf(" ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯ \n");

    return 0;
}

void Exchange(int a, int b)
{
    int temp;
    temp = arrow[a];
    arrow[a] = arrow[b];
    arrow[b] = temp;
}

void reading()
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
}

void main
{
    int ch, value = 0;
    calcui();
    reading();
    int ch, value = 0;
    ch = getch ();
    if(ch()==10)
    {
        if(arrow[0]=='^')
        {
        
        }
        else if (arrow[1]=='^')
        {
        
        }
        else if (arrow[2]=='^')
        {
        
        }
        else if (arrow[3]=='^')
        {
        
        }
    }
    
}
