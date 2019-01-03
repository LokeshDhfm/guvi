#include<stdio.h>
int main()
{
  int num;
  scanf("%d",&num);
  switch(num)
  {
    case 0 :printf("Zero");
            break;
    case num>0: printf("Positive");break;
    case num<0: printf("Negative");break;
    }
    return 1;
   }
