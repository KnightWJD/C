#include <stdio.h>
//#define MAX(x,y) (x>y?x:y)//��Ķ���
int main()
{
  int a = 13; //�ĸ��ֽ�
  int* p = &a;//ȡ��ַ
  printf("%d\n",p);
  printf("%p\n",&a);
  *p = 20;// * - �����ò�����
  printf("%d\n",a);

  //��һ�ֱ�����������ŵ�ַ��-ָ�����

  return 0;
}

