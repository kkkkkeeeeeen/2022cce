#include <stdio.h>
int sum(int a, int b);   ///宣告它的形狀

int main()
{                        ///在用之前先宣告 declare 或 define
    int ans=sum(2,3);    ///使用 呼叫
    printf("ans: %d\n", ans);
}
int sum(int a, int b)    ///定義 define
{
    return a+b;
}                        ///回傳 回覆人家
