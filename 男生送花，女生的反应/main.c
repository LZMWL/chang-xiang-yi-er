#include <stdio.h>
#include <stdlib.h>

int main()
{
    double flowerprice;    //鲜花的价格
    printf("在一个夜黑风高的晚上\n");
    printf("一个小男孩用自己的零花钱给一个小女生买了一束鲜花。\n");
    printf("小女生问小男生鲜花的价格，“这花多少钱？”\n");
    printf("小男生回答：");
    scanf("%lf",&flowerprice);
    //下面模拟小女孩的反应
    if(flowerprice > 1000000) //鲜花价格大于100万
   {
     printf("小女孩直接晕过去！\n");
    }
    else if(flowerprice >  100000 && flowerprice < 1000000)//鲜花价格在10万到100万之间
    {

     printf("明天就去结婚！\n");
    }
    else if(flowerprice >  10000 && flowerprice < 100000 )  //鲜花的价格在1万到10万之间
    {
      printf("拉拉手意思意思，现在去吃饭呗\n");
    }
    else
    {
      printf("好吧，我们是普通朋友，你是好人！\n");
    }
}
