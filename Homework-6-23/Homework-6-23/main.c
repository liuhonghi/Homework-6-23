//
//  main.c
//  Homework-6-23
//
//  Created by HiLau on 2023/6/23.
//

#include <stdio.h>

//2023-6-23 操作符作业
//1、求一个整数二进制中1的个数
//问题代码 - 无法求负数
//int NumberOf1(int num)
//{
//    int count = 0;
//    while(num)
//    {
//        if(num % 2 == 1)
//        {
//            count ++;
//        }
//        num = num/2;
//    }
//    return count;
//}

//优化 - 加unsigned变为无符号整型
//int NumberOf1(unsigned int num)
//{
//    int count = 0;
//    while(num)
//    {
//        if(num % 2 == 1)
//        {
//            count ++;
//        }
//        num = num/2;
//    }
//    return count;
//}

//优化 -
//int NumberOf1(int num)
//{
//    int count = 0;
//    int i = 0;
//    for(i = 0;i<32;i++)
//    {
//        if(((num>>i)&1) == 1)
//        {
//            count ++;
//        }
//    }
//    return count;
//}
//方法2
//int NumberOf1(int num)
//{
//    int count = 0;
//    while(num)
//    {
//        num = num &(num-1);
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    int num = 1;
//    int ret = NumberOf1(num);
//    printf("%d\n",ret);
//    return 0;
//}

//题目变形 - 写一个代码判断一个数字是不是2的n次方
//void Fac(num)
//{
//        if((num&(num-1)) == 0)
//        {
//            printf("Yes\n");
//        }
//        else
//        {
//            printf("No\n");
//        }
//
//}
//int main()
//{
//    int num = 0;
//    scanf("%d",&num);
//    Fac(num);
//    return 0;
//}


//2、求两个数二进制中不同位的个数
//int Different(int m,int n)
//{
//    int count = 0;
//    int i = 0;
//    for(i = 0;i<32;i++)
//    {
//      if((((m^n)>>i)&1) == 1)
//      {
//          count ++;
//      }
//    }
//    return count;
//}

//优化
//int Different(int m,int n)
//{
//    int ret = m^n;
//    int count = 0;
//    while(ret)
//    {
//        ret = ret &(ret-1);
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d%d",&m,&n);
//    int count =Different(m,n);
//    printf("count = %d\n",count);
//    return 0;
//}

//3、打印整数二进制数中的奇数位和偶数位
//void print(int num)
//{
//    int i = 0;
//    for(i = 31;i>=1;i-=2)
//    {
//        printf("%d ",(num >> i)&1);
//    }
//    printf("\n");
//    for(i = 30;i>=0;i-=2)
//    {
//        printf("%d ",(num >> i)&1);
//    }
//    printf("\n");
//}
//int main()
//{
//    int num = 0;
//    scanf("%d",&num);
//    print(num);
//    return 0;
//}
