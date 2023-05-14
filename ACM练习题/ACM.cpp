#include<stdio.h>
//int main()
//{
//    int i, j;
//    int count1 = 0;
//    int tmp;
//    while (1)
//    {
//        scanf("%d %d", &i, &j);
//        printf("%d %d ", i, j);
//        for (tmp = i;tmp<=j; tmp++)
//        {
//            while (tmp != 1)
//            {
//                if (tmp % 2 == 0)
//                {
//                    tmp = tmp / 2;
//                    count1++;
//                }
//                else
//                {
//                    tmp = tmp * 3 + 1;
//                    count1++;
//                }
//                count1++;
//            }
//        }
//        printf("%d\n", count1);
//    }
//    return 0;
//}

//int cow(int n)
//{
//    if (n == 1 || n == 2 || n == 3 || n == 4)
//    {
//        return n;
//    }
//    return cow(n - 1) + (n - 4);
//}
//int main()
//{
//    int n;
//    int count;
//    do 
//    {
//        scanf("%d", &n);
//        if (n == 0)
//            break;
//        count = cow(n);
//        printf("%d\n", count);
//    } while (n);
//
//
//    return 0;
//}

int main()
{
	char a, b;
	a = getchar();
	getchar();
	b = getchar();
	printf("%c %c", a, b);
	return 0;
}