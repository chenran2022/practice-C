#include <stdio.h>
 

//int i;//i ��ȫ�ֱ���������ʼ����Ĭ��Ϊ0
//int main()
//{
//	i--;// -1
//	//sizeof���������������Ľ����unsigned int
//	//����ת�����з������ͺ��޷������ͱȽϣ�����з�������ת��Ϊ�޷�������
//	if (i > sizeof(i))   
//	{
//		printf(">\n");
//	}
//	else
//		printf("<\n");
//	return 0;
//}

//��0~100000 ֮���ˮ�ɻ����֣�ˮ�ɻ�����ָһ��nλ�������λ���ֵ�n�η�������Ϊ��������
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int a;
//	for (i = 0; i <= 100000; i++)
//	{
//		a = i;
//		int n = 1;//ȷ��i�Ǽ�λ��
//		while (a/10)
//		{
//			a /= 10;
//			n++;
//		}
//		int tmp = i;
//		int sum = 0;
//		int c = 0;
//		while(tmp)
//		{
//			c = pow(tmp%10, n);
//			//pow ������η�
//			sum += c;
//			tmp /= 10;
//		}
//		
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//��ת�ַ���
//#include<string.h>
//#include<assert.h>
//void reverse(char* p)
//{
//	assert(p);
//	int len = strlen(p);
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = p[left];
//		p[left] = p[right];
//		p[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[10] = "abcddlksf";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}



//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int i = 0;
//    int count = 0;//���㹲���ٸ���
//    int n = 1;//���㼸λ��
//    int tmp;//i����ʱ��������������i
//    int a, b;//aΪǰһ��ĵ�����bΪ��һ�����
//    int tmp2;//  n/2
//    int sum1 = 0, sum2 = 0;
//    for (i = 10; i < 1000; i++)
//    {
//        tmp = i;
//        n = 1;
//        while (tmp / 10)
//        {
//            n++;
//            tmp = tmp / 10;
//        }
//        if (n % 2 == 0)
//        {
//            tmp = i;
//            a = tmp / (pow(10, n / 2));
//            b = tmp % (int)(pow(10, n / 2));
//            tmp2 = n / 2;
//            while (tmp2--)
//            {
//                sum1 += a % 10;
//                sum2 += b % 10;
//                a /= 10;
//                b /= 10;
//            }
//            if (sum1 == sum2)
//            {
//                count++;
//            }
//        }
//
//    }
//    printf("%d", count);
//    return 0;
//}



//#include<stdio.h>
//int find_num(int arr[3][3], int x, int y,int i)
//{
//	int a = 0, b = y-1;
//	while (a < x && b >= 0)
//	{
//		if (arr[a][b] > i)
//			b--;
//		else if (arr[a][b] < i)
//			a++;
//		else
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int x = 3;
//	int y = 3;
//	int i = 9;
//	int ret = find_num(arr, x, y,i);
//	if (ret == 1)
//		printf("�ҵ���");
//	else
//		printf("û�ҵ�");
//	return 0;
//}


//
//#include<stdio.h>
//#include<string.h>
//void reverse(char* str, int k)
//{
//	int len = strlen(str);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *str;
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr1[10] = "abcdefg";
//	int k = 10;
//	reverse(arr1, k);
//	printf("%s\n", arr1);
//	return 0;
//}

//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr1[10] = "abcdefg";
//	int k = 4;
//	int len = strlen(arr1);
//	reverse(arr1, arr1 + k - 1);
//	reverse(arr1 + k, arr1 + len - 1);
//	reverse(arr1, arr1 + len - 1);
//	printf("%s\n", arr1);
//	return 0;
//}

//int  reverse(char* str,char* str2)
//{
//	int len = strlen(str);
//	int i = 0;
//	if (strlen(str) == strlen(str2))
//	{
//		for (i = 0; i < len; i++)
//		{
//			char tmp = *str;
//			int j = 0;
//			for (j = 0; j < len - 1; j++)
//			{
//
//				*(str + j) = *(str + j + 1);
//			}
//			*(str + len - 1) = tmp;
//			if (strcmp(str, str2) == 0)
//				return 1;
//		}
//		return 0;
//	}
//}
//int main()
//{
//	char arr1[10] = "abcdefg";
//	char arr2[10] = "defgabc";
//	int ret = reverse(arr1,arr2);
//	if (ret == 1)
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int  reverse(char* str, char* str2)
//{
//	int len = strlen(str);
//	if (strlen(str) == strlen(str2))
//	{
//		strncat(str, str,len);
//
//		char* ret=strstr(str, str2);
//		//return ret != NULL;
//		if (ret == NULL)
//		{
//			return 0;
//		}
//		return 1;
//	}
// return 0;
//}
//int main()
//{
//	char arr1[20] = "abcdefg";
//	char arr2[10] = "defgabc";
//	int ret = reverse(arr1, arr2);
//	if (ret == 1)
//		printf(" yes");
//	else
//		printf("no");
//	return 0;
//}


//X��ͼ��
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if ((i == j) || ((i + j) == (n - 1)))
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//���Թٴ��
//int main()
//{
//	int i = 0;
//	int score = 0;
//	int max = 0;
//	int min = 100;
//	int sum = 0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &score);
//		if (score > max)
//			max = score;
//		if (score < min)
//			min = score;
//		sum += score;
//	}
//	printf("%.2f\n", (sum - min - max) / 5.0);
//	return 0;
//}


//����·�����
//int main()
//{
//	int day[13] = { 0,31,28,31,30,31,31,30,31,30,31 };
//	int y = 0, m = 0;
//	while (scanf("%d %d", &y, &m) != EOF)
//	{
//		if(((y % 4 == 0) && (y %100) != 0) || (y % 400 == 0))
//		{
//			day[2] = 29;
//		}
//		printf("%d\n", day[m]);
//	}
//	return 0;
//}


//�������в���һ����
//int main()
//{
//	int arr[51] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int a = 0;
//	scanf("%d", &a);
//	for (i = n - 1; i >= 0; i--)
//	{
//		if (a < arr[i])
//			arr[i + 1] = arr[i];
//		else
//		{
//			arr[i + 1] = a;
//			break;
//		}
//	}
//	if (i < 0)
//		arr[0] = a;
//	for (i = 0; i <=n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	float a = 11;
//	printf("%5.5f\n", a);
//	printf("%10.2E", a);
//
//	/*������������ʽ����������ϸ�Ľ���
//		% d---------- - ��ʮ���Ƶ���ʽչʾ����
//		% 5d--------��ʮ���Ƶ���ʽչʾ������������ռ��5���ַ��Ŀռ䡣��Ϊ����iֻ��ռ�������ֽڣ���������ֻ�������������ո�
//		% -5d-------- - ��ʮ���Ƶ���ʽչʾ������������ռ��5���ַ��Ŀռ䡣
//		���ʾ�ı���i����Ҫռ��5���ַ�de�ռ䣬�����ں�����λ�����ӿո��ܵ���˵���ǣ�����Ϊ5��������ַ���
//		% 5.3d-------- - ��ʮ���Ƶ���ʽչʾ������������ռ��5���ַ��Ŀռ䲢��������λ���֡�
//		��Ϊiռ��2���ַ����ȡ�����Ҫ����һ�������������֤����λ���֡�����Ϊ�˱�֤Ҫ������ַ�����Ҫ���������ո�
//		% 10.3f------��ʮ���Ƶ���ʽ��ʾ����x�������ܹ���10���ַ�������С���������λ���֡���Ϊ����������Ҫ7���ַ������Ա���xǰ����3���ո�
//		% 10.3e------ - ��ָ������ʽ��ʾx���ң��ܹ���10���ַ�������С�������3λ���֣���Ϊx������Ҫ9���ַ��������ڱ���xǰ����һ���ո�
//		% -10g--------�ȿ��Զ�����ʾ����x��Ҳ������ָ������ʽ��ʾ�±���x�����ܹ���10���ַ���
//		����������£�printf����ѡ���ö���ʮ������ʾ����x�����ŵĳ���ǿ������룬������4���ո���ں���*/
//
//	return 0;
//}

//int main()
//{
//	printf("%2d\n", 1);
//	printf("%1.2d\n", 1);
//	printf("%.2d\n", 1);
//	printf("%02d\n", 1);
//	printf("%12d\n", 1);
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//��ռ�ַ��Ĵ�С
//	return 0;
//}

//int main()
//{
//	int ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//			printf("YES\n");
//		else
//			printf("NO\n");
//		getchar();
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0, month, date;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%d\nmonth=%02d\ndate=%02d\n", year, month, date);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a=2;
//	while (scanf("%d", &i) != EOF)
//	{
//		
//		//printf("%d", a<<(i - 1));
//		printf("%d", 1 << i);
//	}
//	return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	float f = b / 100.0;
//	printf("%.2f", a / f / f);
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int a,b,c;
//	scanf("%d %d %d", &a, &b, &c);
//	float f = a + b + c;
//	float p = f / 2;
//	float area = sqrt(p * (p - a)*(p - b)*(p - c));
//	printf("%.2f,%.2f", f,area);
//	return 0;
//}

//int main()
//{
//	float r = 0;
//	scanf("%f", &r);
//	double pi = 3.1415926;
//	float v = 4.0 / 3 * pi * r * r * r;
//	printf("%.3f", v);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 10000; i < 100000; i++)
//	{
//		
//		int sum = 0;
//		for (int j = 10; j <= 10000; j *= 10)
//		{
//			sum += (i / j) * (i % j);
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}


int main()
{
	int i = 0;
	scanf("%d", &i);
	printf("%d\n", i % 10);
	return 0;
}