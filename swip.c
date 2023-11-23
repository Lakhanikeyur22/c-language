#include<stdio.h>
void main()
{
    int no,no2,no3;
   
    printf(" anter no :");
    scanf("%d",&no);
   
    printf("anter no2 :");
    scanf("%d",&no2);
    no3=no;
    no=no2;
    no2=no3;
    

     printf("value of no %d\n",no);
    printf("value of no2 %d\n\n",no2);

// no is division.

    int value, value1,value2;
    printf(" enter  number ::>");
    scanf("%d",&value);  
    
    no3=no;
    value1=value/10;
    value2=value%10;
    
    printf("answer of value 1: %d\n",value1);
    printf("answer of value 2: %d",value2);

}