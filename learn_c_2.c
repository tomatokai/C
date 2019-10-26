/* 第2章 運算和數據類型 */

//代碼清單2-1 讀取兩個整數的值，然後顯示出他們的和，差，積，商和餘數
#include <stdio.h>
int  main(void)
{
	int vx,vy;
	puts("請輸入兩個整數");
	printf("整數vx");	scanf("%d",&vx);
	printf("整數vy");	scanf("%d",&vy);
	
	printf("vx + vy = %d\n", vx + vy);
	printf("vx - vy = %d\n", vx - vy);
	printf("vx * vy = %d\n", vx * vy);
	printf("vx / vy = %d\n", vx / vy);
	printf("vx %% vy = %d\n",vx % vy);//此處兩個%,顯示的時候只有一個
}

//代碼清單2-2 顯示讀取出的整數的最後一個數字
#include <stdio.h>
int  main(void)
{
	int no;
	
	printf("請輸入一個整數:");
	scanf("%d",&no);
	
	printf("最後一位是%d.\n",no % 10);
	return 0 ;
}

//代碼清單2-3 讀取兩個整數，顯示他們的商和餘數
#include <stdio.h>
int  main(void)
{
	int a,b;
	puts("請輸入兩個整數.");
	printf("整數a:");	scanf("%d",&a);
	printf("整數b:");	scanf("%d",&b);

	printf("a除於b得%d 餘 %d.\n",a / b,a % b);
	
	return 0;
}

//代碼清單2-4 對讀取的整數值進行符號取反操作，並輸出結果
#include <stdio.h>
int  main(void)
{
	int num;
	
	printf("請輸入一個整數:");
	scanf("%d",&num);
	
	printf("符號取反之後的值是%d. \n",-num);
	return 0 ;
}

//代碼清單2-5 讀取兩個整數，顯示出他們的平均值
#include <stdio.h>
int  main(void)
{
	int a,b;
	
	puts("請輸入兩個整數.");
	printf("整數a:");	scanf("%d",&a);
	printf("整數b:");	scanf("%d",&b);

	printf("他們的平均值是 %d.\n",(a+b)/2);
	return 0 ;
}

//代碼清單 2-6 整數和浮點數
#include <stdio.h>
int  main(void)
{
	int n;
	double x;//浮點數
	
	n = 9.99
	x = 9.99
	
	printf("int 型變量n的值是:%d\n",n);
	printf("n/2:%d\n",n/2);
	printf("x/2:%d\n",x/2);

	return 0 ;
}

//代碼清單 2-7 讀取兩個實數值，用實數顯示出他們的和，差，乘積，商
#include <stdio.h>
int  main(void)
{
	double vx,vy;
	
	puts("請輸入兩個數");
	printf("實數vx:");scanf("%1f",&vx);
	printf("實數vy:");scanf("%1f",&vy);

	printf("vx + vy = %f\n",vx + vy);
	printf("vx - vy = %f\n",vx -vy);
	printf("vx * vy = %f\n",vx * vy);
	printf("vx / vy = %f\n",vx /vy);
	
	return 0 ;
}

//代碼清單 2-8 驗證數據類型和運算
#include <stdio.h>
int  main(void)
{
	int n1,n2,n3,n4;
	double d1,d2,d3,d4;
	
	n1 = 5 /2;
	n2 = 5.0 /2.0;
	n3 = 5.0 /2;
	n4 = 5 / 2.0;

	d1 = 5 /2;
	d2 = 5.0/2.0;
	d3 = 5.0 / 2;
	d4 = 5 / 2.0;

	printf("n1 = %d\n",n1);
	printf("n2 = %d\n",n2);	
	printf("n3 = %d\n",n3);	
	printf("n4 = %d\n\n",n4);	

	prinft("d1 = %f\n",d1);
	prinft("d2 = %f\n",d2);
	prinft("d3 = %f\n",d3);
	prinft("d4 = %f\n",d4);

	return 0;
}

//代碼清單 2-9 讀取兩個整數並用浮點數顯示出他們的平均值
#include <stdio.h>
int main(void)
{
	int a,b;
	
	puts("請輸入兩個整數:");
	printf("整數a:"); scanf("%d",&a);
	printf("整數b:"); scanf("%d",&b);

	printf("他們的平均值是%f.\n",(a + b)/2.0);
	return 0 ;
}

//代碼清單 2-10 讀取兩個整數並用實數顯示出他們的平均值(類型轉換)
#include <stdio.h>
int main(void)
{
	int a, b;
	
	puts("請輸入兩個整數");
	printf("整數a:"); scanf("%d",&a);
	printf("整數b:"); scanf("%d",&b);
	
	printf("他們的平均值是%f. \n",(double) (a + b) /2 );

	return 0;
}

//代碼清單 2-11 讀取三個數，並顯示出他們的合計值，平均值
#include <stdio.h>

int main(void)
{
	int a,b,c;
	int sum;
	int ave;

	puts("請輸入三個整數");
	printf("整數a:"); scanf("%d",&a);
	printf("整數b:"); scanf("%d",&b);
	printf("整數c:"); scanf("%d",&c);
	printf("整數d:"); scanf("%d",&d);

	sum = a + b + c;
	ave = (double)sum/3;
	
	printf("他們的合計是%5d. \n",sum);
	printf("他們的平均值是%5.1d. \n",ave);

	return 0;
}

//代碼清單 2-12 格式化整數和浮點數
#include <stdio.h>
int main(void)
{
	printf("[%d]\n",		123);//[123]
	printf("[%.4d]\n",		123);//[0123]
	printf("[%4d]\n",		123);//[ 123]
	printf("[%04d]\n",		123);//[0123]
	printf("[%-4d]\n",		123);//[123 ]

	printf("[%d]\n",		12345);//[12345]
	printf("[%.3d]\n",		12345);//[12345]
	printf("[%3d]\n",		12345);//[12345]
	printf("[%03d]\n",		12345);//[12345]
	printf("[%-3d]\n",		12345);//[12345]
	
	printf("[%f]\n",		123.13);//[123.130000]
	printf("[%.1f]\n",		123.13);//123.1
	printf("[%6.1f]\n",		123.13);//[123.1]

	printf("[%4.1f]\n",		123.13);//[123.1]
	
	return 0 ;
}

//第二章總結
#include <stdio.h>
int main(void)
{
	int a;
	int b;
	
	double r;
	
	printf("整數a和b的值");
	scanf("%d%d",&a,&b);
	
	printf("a + b = %d\n",a + b);
	printf("a - b = %d\n",a - b);
	printf("a * b = %d\n",a * b);
	printf("a / b = %d\n",a / b);
	printf("a %% b = %d\n",a % b);

	printf("(a+b)/2= %d\n",(a + b)/2);
	printf("平均值= %f\n\n",(double)(a + b)/2);

	printf("半徑:");
	scanf("%1f",&r);

	printf("半徑為%.3f的圓的面積是%.3f.\n",r,3.14*r*r);
	return 0 ;
}
