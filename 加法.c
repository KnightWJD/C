#include <stdio.h>


int main()
{
    int num1 = 0;
    int num2 = 0;
    int sum = 0;

    //�������룺ʹ��scanf
    scanf("%d%d",&num1,&num2);  //ȡ��ַ����&
 //   int sum = 0; C�����﷨�涨������Ҫ�����ڴ�������ǰ��
    sum = num1 + num2;
    printf("%d\n",sum);
    return 0;
}
