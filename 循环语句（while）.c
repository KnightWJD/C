#include <stdio.h>

int main()
{
    int line = 0;
    printf("��ʼѧϰ");

    while(line<20000)
    {
        printf("%d.��һ�д���\n",line);
        line++;
    }
    if(line>=20000)
        printf("Ӣ��׸��������������۷�\n");
    return 0;

}
