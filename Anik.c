#include<stdio.h>
#include<stdbool.h>
int main()

{


    printf("Welcome To (C) Code Sir Anik Roy\n");

    int num = 95;
    bool married = false;                              //(Boolean Data Type 0 or 1)

//===========================================================================================================================\\

    printf("Integer Value:- %d\n", num);               //(Integer Data Type)
    printf("Maritual Status:- %d\n", married);

//===========================================================================================================================\\

    float num1 = 5.234;                                //(Float Data Type)
    printf("Float:- %f\n", num1);

//===========================================================================================================================\\

    double num3 = 10.654145;                           //(Double Data Type)
    printf("Double Data Type:- %lf\n", num3);

//===========================================================================================================================\\

    char name = 'Anik';                               //(Character Data Type)
    printf("Character:- %c\n", name);

//===========================================================================================================================\\

    int n1 = 25;                                      //(C Arithmetic Operator Test)
    int n2 = 29;
    printf("Plus Number is:- %d\n", n1+n2);

//===========================================================================================================================\\

    bool m1 = 5;
    bool m2 = 2;
    printf("The Answer Of && :- %d\n", (m1!=m2)&&(m1>=m2));   //(C Logical Gate Operators)
    printf("The Answer Of || :- %d\n", (m1=m2)||(m1>=m2));

//===========================================================================================================================\\

    printf("Not Equal To:- %d\n", !(m1<=m2));         //( ! Exclamation Mark Is The Not Symbol Of The C Language)

//===========================================================================================================================\\

    int a = 10, b = 100;
    float c = 10.5, d = 100.5;
    printf("=+a = %d\n", +-a);                        //(C Assignment Operators)
    printf("=+a = %d\n", --a);
    printf("--d f = %f\n", --d);

//===========================================================================================================================\\

    int ifnum;
    printf("Please Enter a Number :- ");
    scanf("%d", &ifnum);

    // True Is The Number Is Less Than 0\\

    if(num<10){

        printf("You Entered A Valid Number.\n");
    }
    else if(ifnum>10){
        printf("You Entered A Invalid Number.\n");
    }

    else(ifnum==1032);{
        printf("Please Enter The Correct Number.\n");
    }

//===========================================================================================================================\\

    int negnum;
    printf("Enter a Number:- ");
    scanf("%d", &negnum);

    if(negnum<0){
    printf("You Entered a Negative Number\n");
    }
                                                     //Negative or Positive Number Identifying Code
    else if(negnum>0){
        printf("You Entered a Positive Number\n");
    }

    else{
        printf("You Entered Zero\n");
    }

//===========================================================================================================================\\

    int year;
    printf("Enter a Year:- \n");
    scanf("%d", &year);

    if(year%400 == 0){
        printf("%d is Leap Year\n", year);           //Is The Year Is Leap Year?
    }
    else if(year%100 == 0){
        printf("%d is not Leap Year\n", year);
    }
    else if(year%4 == 0){
        printf("%d is Leap Year\n", year);
    }
    else{
        printf("%d is not a leap year anymore\n", year);
    }

//===========================================================================================================================\\

    int rollnum;
    printf("Enter A Number:- ");
    scanf("%d", &rollnum);
                                                    //Multiplication Table C Code.
    for(int m=1; m<=20; m++){
        printf("%d * %d = %d\n", rollnum, m, rollnum*m);
    }

//===========================================================================================================================\\

    char c1;
    printf("Enter a Cahracter:- ");
    scanf("%c", &c1);

        if(c>='a' && c<='z'){
            printf("%c is an alphabet.\n", c);
        }
                                                    //It Is An Alphabet?
        else if(c>='A' && c<='Z'){
            printf("%c it is an alphabet\n", c);
        }

    else{
        printf("%c It is not an alphabet \n", c);
    }

//===========================================================================================================================\\

  int num2, i, sum1 = 0;
    printf("Please Enter A Num:- \n");
    scanf("%d", &num2);

    for(i=1; i<=num2; ++i){                          //(nth Normal Number Sum)
        sum1 += i;
    }
    printf("Sum:-  %d\n", sum1);

//===========================================================================================================================\\

    int i1=1;
        while(i<=65456){
            printf("%d\n", i1);                      //(While Loop)
            i1++;
        }

//===========================================================================================================================\\

     int i2=1;
        while(i<=10){
            printf("%d\n", i2);
            ++i;
        if(i2==5){
            break;                                  //(Break Statement For Initial Break All Things)
        }
        }

//===========================================================================================================================\\

    for(int i=1; i<=10; i++){
    if(i==5){
        continue;                                   //(Continue Statement For Continue or Skip The Condition)
    }
    printf("%d\n", i);
   }

//===========================================================================================================================\\

    int num4;
  printf("Enter a num:- ");
  scanf("%d", &num4);

  if(num4%2==0){
    printf("The Number Is Even.\n");
  }                                                 //(Even Or Odd Number?)
  else{
    printf("The Number Is Odd.\n");
  }

//===========================================================================================================================\\

    int num5, sum5=0;
    do{
        printf("Enter Num:- ");
        scanf("%d\n", &num5);
        sum5+=num5;
    }                                                //(Do While Loop)
    while(num!=0);{
        printf("Sum:- %d\n", num);
    }


//===========================================================================================================================\\

      char c5;
  printf("Enter A Character:- ");
  scanf("%c", &c5);

  if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
    printf("%c Is Vowel", c);
  }
  else{                                               //(Is The Character Is Vowel Or Consonant)
    printf("%c Is Consonant", c);
  }

//===========================================================================================================================\\


    int Roll;
    char name2;
    printf("Enter Your Name & Roll Sir Anik Roy:- ");
    scanf(" %c %d\n,",&name2, &Roll);                //(User Input Function Test)


//===========================================================================================================================\\


    ///Thanks By Anik Roy\\\

    return 0;
}
