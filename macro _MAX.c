#include <stdio.h>
#define MAX(x,y) (x>y?x:y)//��Ķ���
int main()
{
  int a = 13;
  int b = 18;
  int max = 0;
  max = MAX(a,b); //��ķ�ʽ
  printf("max = %d\n",max);
  return 0;
}

