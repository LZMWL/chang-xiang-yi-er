#include <stdio.h>
#include <stdlib.h>

int main()
{
    double flowerprice;    //�ʻ��ļ۸�
    printf("��һ��ҹ�ڷ�ߵ�����\n");
    printf("һ��С�к����Լ����㻨Ǯ��һ��СŮ������һ���ʻ���\n");
    printf("СŮ����С�����ʻ��ļ۸񣬡��⻨����Ǯ����\n");
    printf("С�����ش�");
    scanf("%lf",&flowerprice);
    //����ģ��СŮ���ķ�Ӧ
    if(flowerprice > 1000000) //�ʻ��۸����100��
   {
     printf("СŮ��ֱ���ι�ȥ��\n");
    }
    else if(flowerprice >  100000 && flowerprice < 1000000)//�ʻ��۸���10��100��֮��
    {

     printf("�����ȥ��飡\n");
    }
    else if(flowerprice >  10000 && flowerprice < 100000 )  //�ʻ��ļ۸���1��10��֮��
    {
      printf("��������˼��˼������ȥ�Է���\n");
    }
    else
    {
      printf("�ðɣ���������ͨ���ѣ����Ǻ��ˣ�\n");
    }
}
