#include <stdio.h>

//ö�ٳ���
//ö�٣�һһ�о�
//�Ա��У�Ů������
//���ڣ�1 2 3 4 5 6 7

//ö�ٹؼ���enum
enum Sex
{
    MALE,
    FEMALE,
    SECRET
};
//MALE FEMALEECRET - ö�ٳ���

int main()
{
    enum Sex xingbie = MALE;
    printf("%d\n",MALE);//0
    printf("%d\n",FEMALE);//1
    printf("%d\n",SECRET);//2
    printf("%d\n",xingbie); //0
    return 0;
}
