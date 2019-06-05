//�˻ʺ�����2
//eigqueprob.h
#include "stdio.h"
#define N 8 // N ��ʾ�ʺ�ĸ��� ��������𰸵Ľṹ��
typedef struct
{
    int line; // �𰸵��к�  
    int row; // �𰸵��к� 
}ANSWER_TYPE;// ��������ĳ��λ���Ƿ�ռ�� 
 
typedef enum
{
    notoccued = 0, // û��ռ��  occued = 1 // ��ռ�� 
    occued = 1
}IFOCCUED;// �����Ƿ��Ѿ��������ʺ�ռ�� 
 
 
IFOCCUED rowoccu[N];// ����-���¶Խ�λ���Ѿ��������ʺ�ռ�� 
IFOCCUED LeftTop_RightDown[2 * N - 1];// ����-���¶Խ�λ���Ѿ��������ʺ�ռ��
IFOCCUED RightTop_LefttDown[2 * N - 1];// ���Ĵ𰸼�¼ 
ANSWER_TYPE answer[N];
 
 
/* Ѱ����һ��ռ�õ�λ�� */
void nextline(int LineIndex)
{
    static int asnnum = 0; /* ͳ�ƴ𰸵ĸ��� */
    int RowIndex = 0; /* ������ */
    int PrintIndex = 0;/* ���п�ʼ���� */
    for (RowIndex = 0; RowIndex < N; RowIndex++)
    {
        /* ����к������Խ����϶�û�б�ռ�õĻ�����ռ�ø�λ�� */
        if ((notoccued == rowoccu[RowIndex]) && (notoccued == LeftTop_RightDown[LineIndex - RowIndex + N - 1]) && (notoccued == RightTop_LefttDown[LineIndex + RowIndex]))
        {
            /* �����ռ�� */
            rowoccu[RowIndex] = occued;
            LeftTop_RightDown[LineIndex - RowIndex + N - 1] = occued;
            RightTop_LefttDown[LineIndex + RowIndex] = occued;
            /* ��Ǳ�ռ�õ��С��к� */
            answer[LineIndex].line = LineIndex; answer[LineIndex].row = RowIndex;
            /* ����������һ�У���������һ�п���ռ�õ�λ�� */
            if ((N - 1) > LineIndex) {
                nextline(LineIndex + 1);
            }
            /* ����Ѿ��������һ�У������� */
            else
            {
                asnnum++;
                printf("\nThe %dth answer is :", asnnum);
                for (PrintIndex = 0; PrintIndex<N; PrintIndex++)
                {
                    printf("(%d,%d) ", answer[PrintIndex].line + 1, answer[PrintIndex].row + 1);
                }
                /* ÿ10����һ�飬������������� */
                if ((asnnum % 10) == 0)
                    printf("\n\n");
            }
            /* ���ռ�ñ�־��Ѱ����һ��� */
            rowoccu[RowIndex] = notoccued;
            LeftTop_RightDown[LineIndex - RowIndex + N - 1] = notoccued;
            RightTop_LefttDown[LineIndex + RowIndex] = notoccued;
        }
    }
}
int main()
{
    int i = 0;
    /* ������⺯��*/
    nextline(i);
    /* ������Ļ���*/
    getchar();
    return 1;
} 
