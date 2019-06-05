#include <stdio.h>
int main()
{
	int cock,hen,chick;//定义变量公鸡，母鸡，小鸡
	for(cock=0;cock<=20;cock++)//公鸡可能的数量遍历 
		for(hen=0;hen<34;hen++)//母鸡可能的数量遍历 
			for(chick=0;chick<100;chick=chick+3)//小鸡可能的数量遍历 
			{
				if((cock+hen+chick==100)&&(cock*5+hen*3+chick/3==100))//符合题2要求后输出 
					printf("公鸡%d只，母鸡%d只，小鸡%d只\n",cock,hen,chick);
			}
	return 0;
}

/*
////////////////////////
#include <stdio.h>
int main()
{
	int cock,hen,chick;//定义变量公鸡，母鸡，小鸡
	for(cock=0;cock<=20;cock++)//公鸡可能的数量遍历 
		for(chick=0;chick<=100-cock;chick=chick+3)//小鸡数是3的倍数且不可能大于100-公鸡数 
		{
			hen=100-cock-chick;//母鸡数是100-公鸡-小鸡数 
			if(cock*5+hen*3+chick/3==100)//符合题2要求后输出 
				printf("公鸡%d只，母鸡%d只，小鸡%d只\n",cock,hen,chick);
		}
	return 0;
}


//////////////////////////


#include <stdio.h>
int main()
{
	int cock,hen,chick;//定义变量公鸡，母鸡，小鸡
	for(cock=0;cock<15;cock++)//根据7cock+4hen=100,得出cock小于15 
		if((100-cock*7)%4==0)//此条表示7cock+4hen成立且cock和hen都是整数，符合条件 
		{
			hen=(100-cock*7)/4;
			chick=100-cock-hen;
			printf("公鸡%d只，母鸡%d只，小鸡%d只\n",cock,hen,chick);
		}
	return 0;
}
*/
