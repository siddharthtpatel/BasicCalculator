#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>

int ch, value, y = 0;
float input[2],output;
char oper, arrow[4] ={'^',' ',' ',' '};

int firstentry()
{
    printf("\tCALCULATOR\n");
    printf("\t~~~~~~~~~~\n\n");
    printf(" _________________________ \n");//25 underscores
    printf("│ _______________________ │\n");
    printf("││                       ││\n"); //put a loop here and get number of digits in the number
    printf("│ ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯ │\n");
    printf("│     _______________     │\n");
    printf("│    │ + │ - │ * │ / │    │\n"); //read the arrows
    printf("│     ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯     │\n");
    printf("│      %c   %c   %c   %c      │\n",arrow[0],arrow[1],arrow[2],arrow[3]);
    printf(" ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯ \n");
    
    printf("\n\nEnter the 1st number:");
    scanf("%23d",&input[0]);

}

char operatorentry()
{
    //selection
    printf("\tCALCULATOR\n");
    printf("\t~~~~~~~~~~\n\n");    
    printf(" _________________________ \n");//25 underscores
    printf("│ _______________________ │\n");
    printf("││%23f││\n",input[0]); //put a loop here and get number of digits in the number
    printf("│ ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯ │\n");
    printf("│     _______________     │\n");
    printf("│    │ + │ - │ * │ / │    │\n"); //read the arrows
    printf("│     ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯     │\n");
    printf("│¯¯¯¯¯ %c   %c   %c   %c      │\n",arrow[0],arrow[1],arrow[2],arrow[3]);
    printf(" ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯ \n");

    printf("\n\nSelect the operator");
    while(value!=1)
    {
        value=reading();
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
    ch = getchar();
    if (ch == 0 || ch == 224)
    {

        switch (getchar())
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
    else if (ch == '13')
    {
        value = 1;
            return value;
    }
    
}

int secondentery()
{
    printf("\tCALCULATOR\n");
    printf("\t~~~~~~~~~~\n\n");
    printf(" _________________________ \n");//25 underscores
    printf("│ _______________________ │\n");
    printf("││%22f%c││\n",input[0],oper); //put a loop here and get number of digits in the number
    printf("│ ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯ │\n");
    printf("│     _______________     │\n");
    printf("│    │ + │ - │ * │ / │    │\n"); //read the arrows
    printf("│     ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯     │\n");
    printf("│      %c   %c   %c   %c      │\n",arrow[0],arrow[1],arrow[2],arrow[3]);
    printf(" ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯ \n");
    
    printf("\n\nEnter the 2nd number:");
    scanf("%23d",&input[1]);
    
}

int flag()
{
    printf("\tCALCULATOR\n");
    printf("\t~~~~~~~~~~\n\n");    
    printf(" _________________________ \n");//25 underscores
    printf("│ _______________________ │\n");
    printf("││%23f││\n",input[1]); //put a loop here and get number of digits in the number
    printf("│ ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯ │\n");
    printf("│     _______________     │\n");
    printf("│    │ + │ - │ * │ / │    │\n"); //read the arrows
    printf("│     ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯     │\n");
    printf("│      %c   %c   %c   %c      │\n",arrow[0],arrow[1],arrow[2],arrow[3]);
    printf(" ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯ \n");

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
    printf("│ _______________________ │\n");
    printf("││%23f││\n",output); //put a loop here and get number of digits in the number
    printf("│ ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯ │\n");
    printf("│     _______________     │\n");
    printf("│    │ + │ - │ * │ / │    │\n"); //read the arrows
    printf("│     ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯     │\n");
    printf("│      %c   %c   %c   %c      │\n",arrow[0],arrow[1],arrow[2],arrow[3]);
    printf(" ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯ \n");
    
    printf("\n\tRESULT");
    
    return 0;
}

int main()
{
    printf("\tCALCULATOR\n");
    printf("\t~~~~~~~~~~\n\n");
    printf("HOW TO USE:\n");
    printf("0 Enter the 1st number\n");
    printf("0 Select the operator using arrows and enter key\n");
    printf("0 Enter the 2nd number");
    printf("0 Press enter to get the result");
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
