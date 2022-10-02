#include<stdio.h>
//hight1  hight2  side
int main(){
    float h1;
    float h2;
    float s;
    printf("Input height1 : ");
    scanf("%f", &h1);
    printf("Input height2 : ");
    scanf("%f", &h2);
    int h = h1+h2;
    printf("Input side : ");
    scanf("%f", &s);
    printf("Area is %.2f ", 0.5 * h * s);
    return 0;
}
/*
//hight * side
#include<stdio.h>
int main(){
    float h;
    float s;
    printf("height: ");
    scanf("%f", &h);
    printf("side: ");
    scanf("%f", &s);
    printf("Value %.3f ", 0.5 * h * s);
    return 0;
}
*/
#include <stdio.h>
#include <math.h>

void main()
{
    double number, power, result;

    printf("กรุณากรอกตัวเลข : ");
    scanf("%lf", &number);

    printf("กรุณากรอกตัวเลขยกกำลัง : ");
    scanf("%lf", &power);

    result = pow( number, power );

    printf("%.2lf ยกกำลัง %.2lf เท่ากับ %.2lf", number, power, result);
}
