#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

#define SIZE 5

int main(void)
{
    FILE* file;
    int i;
    int j;
    int temp;
    int num[5] = { 0 };


    //file = fopen("ascending_order.txt", "w");
    file = fopen("descending_order.txt", "w");
    if (file == NULL)
    {
        printf("File does not exist");
        return -1;
    }

    printf("SIZE�� ��ŭ�� ������ �Է��Ͻÿ�: ");
    for (i = 0; i < SIZE; i++)
    {
        scanf_s("%d", &num[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
           if (num[i] > num[j])     // ��������
             //if (num[i] < num[j])     // ��������
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("���: ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", num[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        fprintf(file, "%d\n", num[i]);
    }

    fclose(file);

    return 0;
}



// �������� ���� �˰���
//#include <stdio.h>\
//
//int main(void)
//{
//	int i;
//	int j;
//	int temp;
//	int num[5] = { 0 };
//
//	printf("���� 5�� �Է����ּ���: ");
//	for (i = 0; i < 5; i++)
//	{
//		scanf_s("%d", &num[i]);
//	}
//	
//	for (i = 0; i < 5; i++)
//	{
//	for (j = 0; j< 5; j++)
//	{
//		if (num[i] < num[j])
//		{
//			temp = num[i];
//			num[i] = num[j];
//			num[j] = temp;
//
//		}
//
//	}
//	}
//
//	printf("���� ����� : ");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", num[i]);
//	}
//
//	return 0;
//}

// �������� ���� �˰���
//#include <stdio.h>\
//
//int main(void)
//{
//	int i;
//	int j;
//	int temp;
//	int num[5] = { 0 };
//
//	printf("���� 5�� �Է����ּ���: ");
//	for (i = 0; i < 5; i++)
//	{
//		scanf_s("%d", &num[i]);
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if (num[i] > num[j])
//			{
//				temp = num[i];
//				num[i] = num[j];
//				num[j] = temp;
//
//			}
//
//		}
//	}
//
//	printf("���� ����� : ");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", num[i]);
//	}
//
//	return 0;
//}