#include<cstdio>
using namespace std;
int main()
{ 
    int m=0,t,n,s=0,i;int a;
    bool enough=true;//�����ж���û�г��ָ�Ǯ��
    for(i=1;i<=12;i++)//ѭ������
        { 
            scanf("%d",&t);
            m=m+300-t;//��������¼���300ԪǮ������ȥԤ���Ǯ����Ǯ����
            if(m>=0)//������m����0��������ʣ��Ǯ����û��100Ԫ�򳬹�100Ԫ
        {
            n=m/100;
            m=m-n*100;
            s=s+100*n;
        }
        else//������ָ�Ǯ����ֱ�����
        {
            printf("-%d",i);
            enough=false;
            break;
        }
        }
        if(enough==true)//���û�г��ָ�Ǯ�����������ڵ�Ǯ��+�������������Ǯ��+��Ϣ�����
            {
                a=s*1.2+m;
                printf("%d",a);
            }
    return 0;
}
