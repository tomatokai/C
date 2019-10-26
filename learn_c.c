//1-1 顯示計算結果
/* 代碼清單1-1 */
#include <stdio.h>
int  main(void)
{
	printf("%d",15+3);
	return 0 ;
}
//運行結果18

/* 代碼清單1-2 */
#include <stdio.h>
int  main(void)
{
	printf("%d",15-37);
	return 0 ;
}
// 運行結果 -22

//代碼清單1-3
#include <stdio.h>
int  main(void)
{
	printf("15與37的和是%d. \n",15+37);
	return 0;
}

//代碼清單1-4
#include <stdio.h>
int  main(void)
{
	printf("您好！我叫tomatokai。 \n");
	return 0;
}

//代碼清單1-5
#include <stdio.h>
int  main(void)
{
	printf("您好！\n 我叫tomatokai. \n");
	return 0;
}

//代碼清單1-6
#include <studio.h>
int main(void)
{
	printf("您好！\n");
	printf("我叫tomatokai. \n");
	return 0;
}

// 代碼清單1-7
//打招呼並響鈴3次
#include <stido.h>
int  main(void)
{
	printf("您好！ \a\a\a\n");
	return 0;
}

// 1-2 變量
//代碼清單1-8
//為2個變量賦與值並顯示
#include <stdio.h>
int  main(void)
{
	int vx, vy;
	vx = 57;
	vy = vx + 10;
	
	printf("vx的值是%d. \n",vx);
	printf("vy的值是%d. \n",vy);
	return 0;
}

//代碼清單1-9 不設置值的情況下打印出 垃圾值
#include <stdio.h>
int  main(void)
{
	int vx,vy;
	printf("vx的值是%d. \n",vx);
	printf("vy的值是%d. \n",vy);
	return 0 ;
}

//代碼清單1-10 對兩個變量初始化並顯示
#include <stdio.h>
int  main(void)
{
	int vx = 57;
	int vy = vx +10;
	
	printf("vx的值是%d. \n",vx);
	printf('vy的值是%d. \n',vy);

	return 0 ;
}

//1-3 輸入和顯示
//代碼清單 1-11 顯示並確定輸入的整數
#include <stdio.h>
int  main(void)
{
	int no;
	printf("請輸入一個整數:");
	scanf("%d",&no);
	
	printf("您輸入的值是%d. \n",no);
	return 0;
}

//代碼清單1-12 讀取一個整數並顯示其5倍的值
#include <stdio.h>
int  main(void)
{
	int no;
	
	printf("請輸入一個整數:");
	scanf("%d",&no);
	
	printf("ta的5倍是%d. \n",5*no);
	return 0;
}

//代碼清單 1-13 顯示出讀取到的兩個整數的和
#include <stdio.h>
int main(void)
{
	int n1,n2;

	puts("請輸入兩個整數.");
	printf("整數1:");	scanf("%d",&n1);	
	printf("整數2:");	scanf("%d",&n2);	

	printf("他們的和是%d. \n",n1+n2);
	return 0 ;
}

//代碼清單 1-14 顯示出兩個整數的和
#include <stdio.h>
int  main(void)
{
	int n1,n2;
	int wa;
	
	puts("請輸入兩個整數.");
	printf("整數1:");	scanf("%d",&n1);
	printf("整數2:");	scanf("%d",&n2);
	
	wa = n1 + n2
	printf("他們的和是%d. \n",wa);
	return 0;
}
	
