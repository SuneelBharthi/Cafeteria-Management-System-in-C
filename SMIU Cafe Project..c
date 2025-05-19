
void main()
{
int opt,qnty,amount1=0,amount2=0,bill=0,totaldiscount=0,discount1,discount2,afterdiscount,price,teacher, student,FILE,cafe,choice,Y,N,exist,ch;
char  name[10],
op;
FILE *cafe;
cafe= fopen("cafeteria.txt","w+");

clrscr();
printf("\n\n");
printf("************************************************  \n");
printf("* WELCOME TO SMIU CAFETERIA MANAGNMENT SYSTEM  *  \n");
printf("************************************************  \n");

printf("            ********************* \n");
printf("            * Enter Your Name : * \n");
printf("            ********************* \n");
gets(name);
fprintf(cafe,"      *********************  ",cafe);
fprintf(cafe,"      * Enter Your Name : *  ",cafe);
fprintf(cafe,"      *********************  ",cafe);

fprintf(cafe,"%s\n :",name);
clrscr();

gotoxy(32,12);
textcolor(15);
cprintf(" WELCOME ==>  %s  \n   ",name);
delay(1500);

{
menu:
clrscr();



printf("                 (1). (BREAKFAST).   \n ");
printf("                     *****   \n ");
fprintf(cafe,"           (1). (BREAKFAST).   \n ",cafe);
fprintf(cafe, "              *****   \n ",cafe);
printf("                 (2).   (DRINKS).    \n ");
printf("                       ****    \n ");
fprintf(cafe,"           (2).   (DRINKS).    \n ",cafe);
fprintf(cafe,"                  ****    \n ",cafe);

printf("                 (3).   (EXIT).      \n ");
printf("                       ****      \n ");
fprintf(cafe,"           (3).   (EXIT).      \n ",cafe);
fprintf(cafe,"                  ****      \n ",cafe);


printf("           <===~ENTER YOUR CHOICE:~===> :\n\n");
scanf("%d",&ch);
fprintf(cafe,"     <===~ENTER YOUR CHOICE:~===> :\n\n",cafe);
fprintf(cafe,"%d",&ch);

if (ch==1)
   goto BREAKFAST;
 else if(ch==2)
  goto DRINKS;
  else
  goto exit;


BREAKFAST:
clrscr();

printf("*********************************************\n");
printf("*   ************************************    *\n");
printf("*   * *******************************  *    *\n");
printf("*   *   WELCOME TO SMIU CAFETERIA   *  *    *\n");
printf("*   * *******************************  *    *\n");
printf("*   ************************************    *\n");
printf("*********************************************\n");
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("       MAY I HAVE YOUR ORDER PLEASE !!!       \n");
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("               A.       BREAKFAST                      \n");
printf("*******************************************************\n");
printf("*   OPTION  *    ITEM         *   PRICE (Rs. )   *\n");
printf("******************\n");
printf("*    (1)    |   BURGER        |    250           *\n");
printf("*    (2)    |   SANDWICH      |    200           *\n");
printf("*    (3)    |   CHEESE TOAST  |    150           *\n");
printf("*    (4)    |   PIZZA         |    500           *\n");
printf("*    (5)    |   PATIS         |    50            *\n");
printf("******************\n");
fprintf(cafe,"***************   \n",cafe);
fprintf(cafe,"*   ************  *   \n",cafe);
fprintf(cafe,"*   *  ~~~~~~~~~   *  *   \n",cafe);
fprintf(cafe,"*   *   WELCOME TO SMIU CAFETERIA    *  *   \n",cafe);
fprintf(cafe,"*   *  ~~~~~~~~~   *  *   \n",cafe);
fprintf(cafe,"*   ************  *   \n",cafe);
fprintf(cafe,"***************   \n",cafe);
fprintf(cafe,"~~~~~~~~~~~~~~~   \n",cafe);
fprintf(cafe,"     MAY I HAVE Your ORDER PLEASE !!!       \n",cafe);
fprintf(cafe,"~~~~~~~~~~~~~~~   \n",cafe);
fprintf(cafe,"       A.     BREAKFAST                     \n",cafe);
fprintf(cafe,"*****************\n",cafe);
fprintf(cafe,"*   OPTION  *   ITEM          *   PRICE(Rs. ) *\n",cafe);
fprintf(cafe,"*****************\n",cafe);
fprintf(cafe,"*    (1)    |   BURGER        |    250        *\n",cafe);
fprintf(cafe,"*    (2)    |   SANDWICH      |    200        *\n",cafe);
fprintf(cafe,"*    (3)    |   CHEESE TOAST  |    150        *\n",cafe);
fprintf(cafe,"*    (4)    |   PIZZA         |    500        *\n",cafe);
fprintf(cafe,"*    (5)    |   PATIS         |    50         *\n",cafe);
fprintf(cafe,"*****************\n",cafe);


printf("  Enter Your Order For Breakfast = ");
scanf("%d",&opt);

fprintf(cafe,"  Enter Your Order For Breakfast = ",cafe);
fprintf(cafe,"%d",opt);

printf("Input The Quantity You Want To Eat =");
scanf("%d",&qnty);
fprintf(cafe,"Input The Quantity You Want To Eat =",cafe);
fprintf(cafe,"%d",qnty);

if (opt ==1)
{printf("  You Have Choosen BURGER\n\n");
amount1=qnty*250 ;
}
else if(opt ==2)
{printf(" You Have Choosen SANDWICH\n\n");
amount1=qnty*200 ;
}
else if(opt ==3)
{printf("  You Have Choosen CHEESE TOAST \n\n");
amount1=qnty*150 ;
}
else if(opt==4)
{printf(" You Have Choosen PIZZA\n\n");
amount1=qnty*500;
}
else if(opt ==5)
{printf(" You Have Choosen PATIS\n\n");
amount1=qnty*50 ;
}
else
{
printf("Please Choose A Correct Opt Code\n");}

printf(" Amount For BREAKFAST Is Rs.%d\n",amount1);

bill=amount1;

printf("  Your Bill is Rs.%d",bill);
fprintf(cafe,"  Your Bill is Rs.%d",bill);

discount1=bill/2;
printf(" \n\n* YOU ARE A STUDENT OR TEACHER ?\n  * IF YOU ARE TEACHER\n * PRESS (1).\n * IF YOU ARE STUDENT.\n * PRESS (0).\n  ");
scanf("%d", &teacher);
fprintf(cafe," \n\n* YOU ARE A STUDENT OR TEACHER ?\n * IF YOU ARE TEACHER\n * PRESS (1).\n * IF YOU ARE STUDENT\n * PRESS (0).\n  ",cafe);
fprintf(cafe,"%d", &teacher);

if (teacher==1)
{
printf(      " After Discount Your Price %d\n",discount1);
fprintf(cafe,"After Discount Your Price %d\n",discount1);
printf(      "\nYOUR TOTAL BILL FOR BREAKFAST IS: %d",discount1);
fprintf(cafe,"\nYOUR TOTAL BILL FOR BREAKFAST IS: %d",discount1);

}
else
{
printf("Your Are Student  No Disconut");
printf("\nYOUR TOTAL BILL FOR BREAKFAST IS: %d",bill);
fprintf(cafe,"\nYOUR TOTAL BILL FOR BREAKFAST IS: %d",bill);
}

printf("\n\n\n*** !!! Enjoy the Food !!!**\n");
printf("\n*** !!! PLEASE COME AGAIN !!! ***\n");

fprintf(cafe,"\n\n\n*** !!! Enjoy the Food !!!**\n",cafe);
fprintf(cafe,"\n*** !!! PLEASE COME AGAIN !!! ***\n",cafe);


printf("\nDO YOU WANT ORDER FOR DRINKS(Y/N)\n\n");
scanf("%c",&op);
fprintf(cafe,"\nDO YOU WANT ORDER FOR DRINKS(Y/N)\n\n",cafe);
fprintf(cafe,"%c",&op);

op=getche();
if ((op=='Y')||(op=='y'))
{goto menu;
printf("Choice Your Drink:\n");
scanf("%c",&op);

fprintf(cafe,"\nDO YOU WANT ORDER FOR DRINKS(Y/N)\n\n",cafe);
fprintf(cafe,"%c",&op);

}
else
goto exit;

DRINKS:
clrscr();

printf("**************************************************     \n");
printf("*     ***************************************    *     \n");
printf("*     *     ~~~~~~~~~~~~~~~~~~~~~~~~~       *    *     \n");
printf("*     *     WELCOME TO SMIU CAFETERIA       *    *     \n");
printf("*     *     ~~~~~~~~~~~~~~~~~~~~~~~~~       *    *     \n");
printf("*     ***************************************    *     \n");
printf("**************************************************     \n");
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf(           "May I Have Your Order Please !!!   \n");
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("                B.        TEA & DRINK                  \n");
printf("*******************************************************\n");
printf("*   OPTION   *    ITEM              *  PRICE(Rs. )  *\n");
printf("******************************************************\n");
printf("*    (6)     |    TEA               |  50           *\n");
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("*    (7)     |    COFFEE            |  60           *\n");
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("*    (8)     |    MILK PAKOLA       |  70           *\n");
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("*    (9)     |    CHOCOLATE SHAKE   |  100          *\n");
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("*    (10)    |    MINERAL WATER(L)  |  80           *\n");
printf("*****************************************************\n");
fprintf(cafe,"***************   \n",cafe);
fprintf(cafe,"*   ************  *   \n",cafe);
fprintf(cafe,"*   *  ~~~~~~~~~   *  *   \n",cafe);
fprintf(cafe,"*   *   Welcome To SMIU Cafeteria    *  *   \n",cafe);
fprintf(cafe,"*   *  ~~~~~~~~~   *  *   \n",cafe);
fprintf(cafe,"*   ************  *   \n",cafe);
fprintf(cafe,"***************   \n",cafe);
fprintf(cafe,"~~~~~~~~~~~~~~~   \n",cafe);

fprintf(cafe,"     May I Have Your Order Please !!!       \n",cafe);
fprintf(cafe,"~~~~~~~~~~~~~~~   \n",cafe);
fprintf(cafe,"*      B.         TEA & DRINKS              \n",cafe);
fprintf(cafe,"******************\n",cafe);
fprintf(cafe,"    OPTION    *     ITEM               *  PRICE(Rs. )*\n",cafe);
fprintf(cafe,"******************\n",cafe);
fprintf(cafe,"*     (6)     |      TEA               |  50         *\n",cafe);
fprintf(cafe,"*     (7)     |      COFFEE            |  60         *\n",cafe);
fprintf(cafe,"*     (8)     |      MILK PAKOLA       |  70         *\n",cafe);
fprintf(cafe,"*     (9)     |      CHOCOLATE SHAKE   |  100        *\n",cafe);
fprintf(cafe,"*     (10)    |      MINERAL WATER(L)  |   80        *\n",cafe);
fprintf(cafe,"******************\n",cafe);


printf(" Enter Your Order For TEA & DRINKS =");
scanf("%d",&opt);
fprintf(cafe," Enter Your Order For TEA & DRINKS =",cafe);
fprintf(cafe,"%d",&opt,cafe);

printf(" Input The Quantity You Want To DRINKS =");
scanf("%d",&qnty);
fprintf(cafe," Input The Quantity You Want To DRINKS =",cafe);
fprintf(cafe,"%d",&qnty);

if (opt ==6)
{
printf(" you have choosen TEA\n\n");

amount2=qnty*50 ;
}
else if (opt ==7)
{printf(" you have choosen COFFEE\n\n ");
amount2=qnty*60 ;
}
else if (opt ==8)
{printf(" you have choosen MILK PAKOLA\n\n ");
amount2=qnty*70 ;
}
else if (opt ==9)
{
printf(" you have choosen CHOCOLATE SHAKE\n\n ");

amount2=qnty*100 ;
}
else if (opt == 10)
{printf(" you have choosen MINERAL WATER(L)\n\n ");
amount2=qnty*80 ;
}
else
{
printf("please choose a corrcet opt code\n");

}

printf("    Amount for TEA & DRINKS is Rs.%d\n",amount2);

bill=amount2;

printf("     Your Bill is Rs.%d",bill);
fprintf(cafe,"Your Bill is Rs.%d",bill);
discount2=bill/2;
printf(" \n\n * YOU ARE A STUDENT OR TEACHER ?\n * IF YOU ARE TEACHER\n * PRESS (1).\n * IF YOU ARE STUDENT.\n * PRESS (0).\n  ");
fprintf(cafe," \n\n * YOU ARE A STUDENT OR TEACHER ?\n * IF YOU ARE TEACHER\n* PRESS (1).\n * IF YOU ARE STUDENT.\n *PRESS (0).\n  ",cafe);

scanf("%d", &teacher);

if (teacher==1)
{
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("* After Discount Your Price %d",discount2);
fprintf(cafe,"* After Discount Your Price",discount2);
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("\n* YOUR TOTAL BILL FOR TEA & DRINKS IS: %d\n",discount2);
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
fprintf(cafe,"* YOUR TOTAL BILL FOR TEA  DRINKS IS: %d\n",discount2);
printf("* YOUR TOTAL BILL FOR BREAKFAST AND TEA & DRINKS IS :%d\n\n", (discount1+discount2)-totaldiscount);
fprintf(cafe,"* YOUR TOTAL BILL FOR BREAKFAST AND TEA & DRINKS IS :%d\n\n", (discount1+discount2)-totaldiscount);
    }
else {
printf("\n* YOUR TOTAL BILL FOR TEA & DRINKS IS: %d\n",bill);
fprintf(cafe,"* YOUR TOTAL BILL FOR TEA  DRINKS IS: %d\n",bill);


printf("* YOUR TOTAL BILL FOR BREAKFAST AND TEA & DRINKS IS :%d\n\n", (amount1+amount2));
fprintf(cafe,"* YOUR TOTAL BILL FOR BREAKFAST AND TEA & DRINKS IS :%d\n\n", (amount1+amount2));
     }

printf("\n\n\n*** !!! Enjoy the Food !!!**\n");
printf("\n\n*** !!! PLEASE COME AGAIN !!! ***\n");
fprintf(cafe,"\n\n\n*** !!! Enjoy the Food !!!**\n",cafe);
fprintf(cafe,"\n\n*** !!! PLEASE COME AGAIN !!! ***\n",cafe);

printf("\n\n* DO YOU WANT ORDER FOR BREAKFAST (Y/N)");
fprintf(cafe,"\n\* nDO YOU WANT ORDER FOR BREAKFAST (Y/N)",cafe);

scanf("%c",&op);
fprintf(cafe,"%c",&op);
op=getche();
if ((op=='Y')||(op=='y'))
goto menu;
else
goto exit;
getch();
exit:
}
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// this is a string
    char * replaceWord(const char * str, const char * oldWord, const char * newWord)
{
    char * resultString;
    int i, count = 0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    // Lets count the number of times old word occurs in the string
    for (i = 0; str[i] !='\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;

            // Jump over this word
            i = i + oldWordLength - 1;
        }
    }

    // Making a new string to fit in the replaced words
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength) + 1);

    i = 0;
    while (*str)
    {
        // Compare the substring with result
        if(strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else{
            resultString[i] = *str;
            i += 1;
            str +=1;
        }
    }
    resultString[i] = '\0';
    return resultString;
}

int main()
{
    FILE * ptr = NULL;
    FILE * ptr2 = NULL;
    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("genBill.txt", "w");
    char str [200];
    fgets(str, 200, ptr);
    printf("The given bill template was: %s\n", str);

    // Call the replaceWord function and generate newStr
    char * newStr;
    newStr = replaceWord(str, "{{item}}", "Table Fan");
    newStr = replaceWord(newStr, "{{outlet}}", "Ram Laxmi fan outlet");
    newStr = replaceWord(newStr, "{{name}}", "Harry");
    printf("The actual bill generated is: %s\n", newStr);
    printf("The generated bill has been written to the file genBill.txt\n");

    
    fprintf(ptr2, "%s", newStr);
    fclose (ptr);
    fclose (ptr2);
    return 0;
}
