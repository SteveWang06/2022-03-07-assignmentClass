#include<stdio.h>
#include<float.h>

int main(void){
    
    float max = -FLT_MAX;
    float min = FLT_MAX;

    for (int i = 1; i < 11; i++)
    {
        float a[10];
        scanf("%f", &a[i]);
        if (a[i] > max)
        {
            max = a[i];
        }

        if (a[i] < min)
        {
            min = a[i];
        }
              
    }
    printf("max: %.2f\n", max);
    printf("min: %.2f\n", min);

}