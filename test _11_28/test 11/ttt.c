#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[2][4] = { 1,2,3,4,5,6 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//
//	return 0;
//}
//#include<stdlib.h>
//#include<Windows.h>
//#include<stdio.h>
//int main()
//{
//	char ch1[] = "hello world";
//	char ch2[] = "###########";
//	int left = 0;//������ʼ���±�
//	int sz = sizeof(ch1) / sizeof(ch1[0]);
//	int right = sz-2 ;//���ұߵ��±�
//	while (left <= right)
//	{
//		//Sleep(1000);//sleep�����������������е��ٶȵ�λ�Ǻ���
//		ch2[left] = ch1[left];
//		ch2[right] = ch1[right];
//		printf("%s\n", ch2);
//		Sleep(1000);//sleep�����������������е��ٶȵ�λ�Ǻ���
//		//system("cls");//system�ǿ⺯����cls���������Ļ
//		left++;
//		right--;
//	}
//	
//	return 0;
//}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;
	int k = 0;//Ҫ���ҵ�����
	scanf("%d", &k);
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] <k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���%d", mid);
			break;
		}
	}
	return 0;
}