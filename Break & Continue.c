#include<stdio.h>
int main()
{
    int i;
    for(i = 1 ; i<=20; i++ )
    {
        if(i == 10 || i ==15)
            continue;

      else if(i==21)
      break;
      printf("%d  ",i);



    }
}
