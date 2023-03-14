#include <stdio.h>
#include "stdlib.h"
#include "time.h"
int main()
{
	int mode,score=0,n,a,b,c,y,z,error_val=0;
	float m,d;
	srand(time(NULL));	
	printf("/*******************/\n");
	printf("/******1.初级********/\n");
	printf("/******2.中级********/\n");
	printf("/******3.高级********/\n");
	printf("/******4.无尽********/\n");
	printf("/******0.退出********/\n");
	printf("/*******************/\n");
	printf("请输入数字进行选择：\n");
	scanf("%d",&mode);
	switch(mode)
	{
		case 1:
			printf("/***初级：10以内的加减****/\n");
			printf("请选择答题数量：");
			scanf("%d",&n);
			for(int i=1;i<=n;i++)
			{
				a=rand()%10;
				b=rand()%10;
				if(a%2==0)
				{
					printf("%d+%d= ",a,b);
					scanf("%d",&c);
					if(a+b==c)
					{
						score++;
					}
				}
				else
				{
					printf("%d-%d= ",a,b);
				    scanf("%d",&c);
				    if(a==c+b)  //a-b==c
					{
						score++;
					}
				}
			}
		break;
		case 2:
			printf("/***中级：100以内的加减乘除****/\n");
			printf("请选择答题数量：");
			scanf("%d",&n);
			for(int i=1;i<=n;i++)
			{
				a=rand()%100;
				b=rand()%100;
				if(a%4==0)
				{
					printf("%d+%d= ",a,b);
					scanf("%d",&c);
					if(a+b==c)
					{
						score++;
					}
				}
				else if(a%4==1)
				{
					printf("%d-%d= ",a,b);
				    scanf("%d",&c);
				    if(a==c+b)
					{
						score++;
					}
				}
				else if(a%4==2)
				{
					printf("%d*%d= ",a,b);
				    scanf("%d",&c);
				    if(a*b==c)
					{
						score++;
					}
				}
				else
				{
					printf("%d/%d= ",a,b);
					scanf("%f",&m);
					d=(float)a/(float)b;   //算出结果
					y=(int)(d*1000)%10;    //得到小数第三位，用于判断四舍五入
					if(y>=5)
					{
						z=(int)((d+0.01)*100);  //五入
					}
					else
					{
						z=(int)(d*100);
					}
					//printf("%d\n",z);       用于程序调试
					//printf("%d\n",(int)(m*100));
					if((int)(m*100)==z)
					{
						score++;
					}
				}
			}
		break;
		case 3:
			printf("/**高级：1000以内的加减乘除***/\n");
			printf("请选择答题数量：");
			scanf("%d",&n);
			for(int i=1;i<=n;i++)
			{
				a=rand()%1000;
				b=rand()%1000;
				if(a%4==0)
				{
					printf("%d+%d= ",a,b);
					scanf("%d",&c);
					if(a+b==c)
					{
						score++;
					}
				}
				else if(a%4==1)
				{
					printf("%d-%d= ",a,b);
				    scanf("%d",&c);
				    if(a==c+b)
					{
						score++;
					}
				}
				else if(a%4==2)
				{
					printf("%d*%d= ",a,b);
				    scanf("%d",&c);
				    if(a*b==c)
					{
						score++;
					}
				}
				else
				{
					printf("%d/%d= ",a,b);
					scanf("%f",&m);
					d=(float)a/(float)b;   //算出结果
					y=(int)(d*1000)%10;    //得到小数第三位，用于判断四舍五入
					if(y>=5)
					{
						z=(int)((d+0.01)*100);  //五入
					}
					else
					{
						z=(int)(d*100);
					}
					//printf("%d\n",z);     用于程序调试
					//printf("%d\n",(int)(m*100));
					if((int)(m*100)==z)
					{
						score++;
					}		
				}
			}
		break;
		case 4:
			printf("/***无尽模式****/\n");
			while(error_val<3)
			{
				a=rand()%10;
				b=rand()%10;
				if(a%2==0)
				{
					printf("%d+%d= ",a,b);
					scanf("%d",&c);
					if(a+b==c)
					{
						score++;
					}
					else
					{
						error_val++;
					}
				}
				else
				{
					printf("%d-%d= ",a,b);
				    scanf("%d",&c);
				    if(a==c+b)  //a-b==c
					{
						score++;
					}
					else
					{
						error_val++;
					}
				}
			}
		break;
		case 0:
			return 0;
		break;
	}
	printf("你的得分是:%d分\n",score);
	return 0;
}
