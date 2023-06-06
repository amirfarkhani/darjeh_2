#include <stdio.h>
#include <math.h>

int main()
{
 float a , b ,  c , x1,x2 ;
 int v ;
 scanf("%f%f%f",&a,&b,&c);
 if(a==0 && b==0&&c!=0)
    printf("IMPOSSIBLE");
 else if(a==0 && b!=0)
 {
     printf("%.3f",-(c)/b);
 }

 else
 {
     float d = b*b - 4*a*c ;
     if(d>0)
        v=1;
     else if (d<0)
        v=-1;
     else if (d ==0)
        v = 0 ;

     switch(v)
     {

        case 1 :
            x1 = (-(b) + sqrt(d)) / (2*a);
            x2 = (-(b) - sqrt(d)) / (2*a);
           printf("%.3f\n",x1<x2 ? x1:x2);
           printf("%.3f",x1>x2 ? x1:x2);
           break;
        case -1 :
            printf("IMPOSSIBLE");
            break;
        case 0 :
             x1 = (-(b) + sqrt(d)) / (2*a);
            printf("%.3f",x1);
            break;
     }
     //printf("%f",d);
 }
}
