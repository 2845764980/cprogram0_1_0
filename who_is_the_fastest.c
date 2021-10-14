#include<stdio.h>
#include<math.h>

int isprime0(int);
int isprime1(int);
int isprime2(int);
int isprime3(int);
int main()
{
   int c1,c2,c3,c4,num;
   printf("输入一个数字判断其是否为素数：\t");
   scanf("%d", &num);
   c1 = isprime0(num);
   printf("isprime0算法运行了%d次\n", c1);
   c2 = isprime1(num);
   printf("isprime1算法运行了%d次\n", c2);
   c3 = isprime2(num);
   printf("isprime2算法运行了%d次\n", c3);
   int i=3,cnt=1;
   const int number = 100;
   int prime[number] = {2};
   while (cnt < number){
       if (isprime(i, prime, cnt)){
           prime[cnt++] = i;
       }
       i++;
   }
   for (i=0;i<number;i++){
       printf("%d", prime[i]);
       if ((i+1)%5) printf("\t");
       else printf("\n");
   }


   return 0;

}
int isprime0(int x)                   //算法1：将x与2到x-1相除，看是否
{
    int i,cnt=0;
    for (i=2;i<x;i++){
        cnt++;
        if (x%i==0){
            printf("%d不是素数", x);
            break;
        }
        }
    return cnt;
}
int isprime1(int x)
{
    int i,cnt=0;
    for (i=2;i<=sqrt(x);i++){
        cnt++;                                   //sqrt()平方根
        if (x%i==0){
            printf("%d不是素数", x);
            break;
        }
        }
    return cnt;   
}
int isprime2(int x)
{
    
    int i,cnt=0;
    if (x ==1 ||
         (x%2==0 && x!=2)){
          printf("x不是素数");   
         }else {
        for (i=3; i<x; i+=2){
            cnt++;      //i<sqrt(x) 也可以判断x是否为素数且程序运算速度更快
        if (x%i==0){
            break;
        }
    }
         }
    return cnt;
}
int isprime(int x, int knowisprimes[],int numberofknowisprime)
{
    
}
/*输入一个数字判断其是否为素数：  1949
isprime0算法运行了1947次
isprime1算法运行了43次  
isprime2算法运行了973次 
PS D:\test\c_program> cd "d:\test\c_program\" ; if ($?) { gcc who_is_the_fastest.c -o who_is_the_fastest } ; if ($?) { .\who_is_the_fastest }
输入一个数字判断其是否为素数：  9491
isprime0算法运行了9489次
isprime1算法运行了96次  
isprime2算法运行了4744次*/