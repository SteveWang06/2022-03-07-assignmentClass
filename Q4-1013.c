#include<stdio.h>
#include<stdlib.h>

int main(void){
     int h;
     scanf("%d",&h);
     if (h > 0)
     {
          for (int i = 1; i <= h ; i++)
          {
               for (int j = 1; j <= 2 * h; j++)
               {
                    if (abs(h-j)<= (i - 1))
                    {
                         printf("*");
                    }
                    else{
                         printf(" ");
                    }
                    
               }
               printf("\n");
               
          }
          
     }
     
}
