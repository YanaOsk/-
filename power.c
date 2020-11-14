
#include "myMath.h"
#define  E 2.71828182
double Exponent(int x){
    if (x == 0){
        return 1;
    }
double hezka = 1;
if(x > 0){
for(int i = 0; i < x ; i++){
hezka=hezka*E;
}
}
else{
for ( int i = 0; i > x ; i--){
hezka=hezka*E;
}
hezka=1/hezka;
}
return hezka;
}
double Power(double x, int y)
{
    if (y == 0){
        return 1;
    }
double num = 1;
if(y > 0){
for(int i = 0; i < y ; i++){
num=num*x; 
} 
}
else{
for ( int i = 0; i > y ; i--){
num=num*x;
}
num=1/num;
}
return num;

    
}
