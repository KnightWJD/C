#include <stdio.h>

int main()
{
   char arr1[] = "abc";
   //"abc" -- 'a' 'b' 'c' '\0' -- '\0':�ַ��������ı�־,�������ַ���������
   char arr2[] = {'a','b','c','\0'};
   printf("%s\n",arr1); //%s �����ַ�����ʽ��ӡ
   printf("%s\n",arr2);
    return 0;
