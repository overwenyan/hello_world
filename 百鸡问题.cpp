#include <stdio.h>
int main()
{
	int cock,hen,chick;//�������������ĸ����С��
	for(cock=0;cock<=20;cock++)//�������ܵ��������� 
		for(hen=0;hen<34;hen++)//ĸ�����ܵ��������� 
			for(chick=0;chick<100;chick=chick+3)//С�����ܵ��������� 
			{
				if((cock+hen+chick==100)&&(cock*5+hen*3+chick/3==100))//������2Ҫ������ 
					printf("����%dֻ��ĸ��%dֻ��С��%dֻ\n",cock,hen,chick);
			}
	return 0;
}

/*
////////////////////////
#include <stdio.h>
int main()
{
	int cock,hen,chick;//�������������ĸ����С��
	for(cock=0;cock<=20;cock++)//�������ܵ��������� 
		for(chick=0;chick<=100-cock;chick=chick+3)//С������3�ı����Ҳ����ܴ���100-������ 
		{
			hen=100-cock-chick;//ĸ������100-����-С���� 
			if(cock*5+hen*3+chick/3==100)//������2Ҫ������ 
				printf("����%dֻ��ĸ��%dֻ��С��%dֻ\n",cock,hen,chick);
		}
	return 0;
}


//////////////////////////


#include <stdio.h>
int main()
{
	int cock,hen,chick;//�������������ĸ����С��
	for(cock=0;cock<15;cock++)//����7cock+4hen=100,�ó�cockС��15 
		if((100-cock*7)%4==0)//������ʾ7cock+4hen������cock��hen������������������ 
		{
			hen=(100-cock*7)/4;
			chick=100-cock-hen;
			printf("����%dֻ��ĸ��%dֻ��С��%dֻ\n",cock,hen,chick);
		}
	return 0;
}
*/
