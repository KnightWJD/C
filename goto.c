//goto���
#include <stdio.h>

int main()
{
    goto a;
    printf("111");
a:
    printf("222");
    return 0;
}

// ����Ӧ�ó���(һ������������ѭ��������һ��һ��break)��
//for(...)
//    for(...)
//    {
//        for(...)
//        {
//            for(...)
//            {
//                if(disaster)
//                {
//                    goto erro;
//                }
//            }
//        }
//    }
//
//erro:
//    if(disaster)
//    {
//        ...
//    }
