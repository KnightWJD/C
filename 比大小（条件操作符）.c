#include <stdio.h>


int main()
{
    int n1 = 0;
    int n2 = 0;
    int max = 0;
    scanf("%d%d",&n1,&n2);

    max = (n1>n2?n1:n2); // exp1? exp2 : exp3 ���exp1Ϊ�������exp2��Ϊ�����exp3
    printf("max=%d\n",max);
    return 0;


}
