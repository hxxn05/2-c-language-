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

    printf("SIZE수 만큼의 정수를 입력하시오: ");
    for (i = 0; i < SIZE; i++)
    {
        scanf_s("%d", &num[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
           if (num[i] > num[j])     // 내림차순
             //if (num[i] < num[j])     // 오름차순
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("결과: ");
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



// 오름차순 정렬 알고리즘
//#include <stdio.h>\
//
//int main(void)
//{
//	int i;
//	int j;
//	int temp;
//	int num[5] = { 0 };
//
//	printf("값을 5개 입력해주세요: ");
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
//	printf("정렬 결과는 : ");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", num[i]);
//	}
//
//	return 0;
//}

// 내림차순 정렬 알고리즘
//#include <stdio.h>\
//
//int main(void)
//{
//	int i;
//	int j;
//	int temp;
//	int num[5] = { 0 };
//
//	printf("값을 5개 입력해주세요: ");
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
//	printf("정렬 결과는 : ");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", num[i]);
//	}
//
//	return 0;
//}