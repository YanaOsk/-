#include <stdio.h>
#include "myMath.h"
int main(){
double a;
printf("Please insert a real number:\n");
scanf("%lf",&a);
double ans1 = Exponent(a);
double ans2 = Power(a,3);
double temp1 = add((float)ans1,(float)ans2);
double temp2 = sub((float)temp1,(float)2);
printf("The value of f(x) = e^x+x^3-2 at the point %0.4f is %0.4f\n",a,temp2);
double ans3 = mul(a,3);
double ans4 = mul(Power(a,2),2);
double ans5 = add(ans3,ans4);
printf("The value of f(x) = 3x+2x^2 at the point %0.4f is %0.4f\n",a,ans5);
double ans6 = mul(Power(a,3),4);
double ans7 = div(ans6,5);
double ans8 = sub(ans7 , mul(a,2));
printf("The value of f(x) = (4x^3)/5-2x at the point  %0.4f is %0.4f\n",a,ans8);
return 0;

}

