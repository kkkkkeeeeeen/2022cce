#include <stdio.h>
int sum(int a, int b);   ///�ŧi�����Ϊ�

int main()
{                        ///�b�Τ��e���ŧi declare �� define
    int ans=sum(2,3);    ///�ϥ� �I�s
    printf("ans: %d\n", ans);
}
int sum(int a, int b)    ///�w�q define
{
    return a+b;
}                        ///�^�� �^�ФH�a
