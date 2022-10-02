 #include<stdio.h>
int main()
{
    int a,x,i,num=1;
    printf("Enter Number : ");
    scanf("%d",&a);
    printf("Enter Number : ");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
       num = num * a;                   
    }
    printf("Number is %d",num);

}

 


