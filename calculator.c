#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int ch, value=0, y=0;
float input[2],output;
char oper, arrow[4] ={'^',' ',' ',' '};

int firstentry()
{
    printf("\tCALCULATOR\n");
    printf("\t~~~~~~~~~~\n\n");
    printf(" _________________________ \n");//25 underscores
    printf("| ----------------------- |\n");
    printf("||                       ||\n");
    printf("||                       ||\n");
    printf("| ----------------------- |\n");
    printf("|     _______________     |\n");
    printf("|    | + | - | * | / |    |\n"); //read the arrows
    printf("|    |___|___|___|___|    |\n");
    printf("|      %c   %c   %c   %c      |\n",arrow[0],arrow[1],arrow[2],arrow[3]);
    printf("|_________________________| \n");

    printf("\n\nEnter the 1st number:");
    scanf("%23f",&input[0]);
    fflush(stdin);

}

char operatorentry()
{
    //selection
    while(value!=1)
    {
        printf("\tCALCULATOR\n");
        printf("\t~~~~~~~~~~\n\n");
        printf(" _________________________ \n");//25 underscores
        printf("| ----------------------- |\n");
        printf("||%23f||\n",input[0]);
        printf("||                       ||\n");
        printf("| ----------------------- |\n");
        printf("|     _______________     |\n");
        printf("|    | + | - | * | / |    |\n"); //read the arrows
        printf("|    |___|___|___|___|    |\n");
        printf("|      %c   %c   %c   %c      |\n",arrow[0],arrow[1],arrow[2],arrow[3]);
        printf("|_________________________| \n");

        printf("\n\nSelect the operator");

        value=reading();
        system("cls");
    }
    if (arrow[0]=='^')
    {  oper='+';  }
    else if (arrow[1]=='^')
    {  oper='-';  }
    else if (arrow[2]=='^')
    {  oper='*';  }
    else if (arrow[3]=='^')
    {  oper='/';  }

}

int Exchange(int a, int b)
{
    int temp;
    temp = arrow[a];
    arrow[a] = arrow[b];
    arrow[b] = temp;
}

int reading()
{
    ch = getch ();
    if (ch == 0 || ch == 224)
    {

        switch (getch())
        {
            case 75://LeftArrow
                if(y>0)
                {
                    Exchange(y, y-1);
                    y = y-1;
                }
                else
                {
                    printf("\a");
                }
                return value;
                break;
            case 77://RightArrow
                if(y<3)
                {
                    Exchange(y, y+1);
                    y = y+1;
                }
                else
                {
                    printf("\a");
                }
                return value;
                break;
            default :
                value = 1;
                return value;
        }
    }
}

int secondentery()
{
    printf("\tCALCULATOR\n");
    printf("\t~~~~~~~~~~\n\n");
    printf(" _________________________ \n");//25 underscores
    printf("| ----------------------- |\n");
    printf("||%23f||\n",input[0]);
    printf("||%23c||\n",oper);
    printf("| ----------------------- |\n");
    printf("|     _______________     |\n");
    printf("|    | + | - | * | / |    |\n"); //read the arrows
    printf("|    |___|___|___|___|    |\n");
    printf("|      %c   %c   %c   %c      |\n",arrow[0],arrow[1],arrow[2],arrow[3]);
    printf("|_________________________| \n");

    printf("\n\nEnter the 2nd number:");
    scanf("%23f",&input[1]);

}

int flag()
{
    printf("\tCALCULATOR\n");
    printf("\t~~~~~~~~~~\n\n");
    printf(" _________________________ \n");//25 underscores
    printf("| ----------------------- |\n");
    printf("||%23f||\n",input[0]);
    printf("||%c%22f||\n",oper,input[1]);
    printf("| ----------------------- |\n");
    printf("|     _______________     |\n");
    printf("|    | + | - | * | / |    |\n"); //read the arrows
    printf("|    |___|___|___|___|    |\n");
    printf("|      %c   %c   %c   %c      |\n",arrow[0],arrow[1],arrow[2],arrow[3]);
    printf("|_________________________| \n");

}

int result()
{
    if (oper=='+')
    {
        output = input[0]+input[1];
    }
    else if (oper=='-')
    {
        output = input[0]-input[1];
    }
    else if (oper=='*')
    {
        output = input[0]*input[1];
    }
    else if (oper=='/')
    {
        output = input[0]/input[1];
    }
    printf("\tCALCULATOR\n");
    printf("\t~~~~~~~~~~\n\n");
    printf(" _________________________ \n");//25 underscores
    printf("| ----------------------- |\n");
    printf("||=%22f||\n",output);
    printf("||                       ||\n");
    printf("| ----------------------- |\n");
    printf("|     _______________     |\n");
    printf("|    | + | - | * | / |    |\n"); //read the arrows
    printf("|    |___|___|___|___|    |\n");
    printf("|      %c   %c   %c   %c      |\n",arrow[0],arrow[1],arrow[2],arrow[3]);
    printf("|_________________________| \n");

    printf("\n\tRESULT\n\n");

    return 0;
}

int main()
{
    printf("\tCALCULATOR\n");
    printf("\t~~~~~~~~~~\n\n");
    printf("HOW TO USE:\n");
    printf("0 Enter the 1st number\n");
    printf("0 Select the operator using arrows and enter the down arrow\n");
    printf("0 Enter the 2nd number\n");
    printf("0 Then press enter to get the result\n\n");
    printf("  PRESS ENTER TO CONTINUE\n\n");
    getchar();
    system("cls");

    firstentry();
    system("cls");
    operatorentry();
    system("cls");
    secondentery();
    system("cls");
    flag();
    system("cls");
    result();
    getchar();

    return 0;
}
