#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <windows.h>
using namespace std;
typedef long long ll;
int cmd,len;
int knowit(char a[100]);
int main() {
	char input[100];
	while(1) {
		cout<<"---------------------------------------------------------------\n���������й�����-SCLToolbox v0.5.0\n����ָ��˵�:\n0.�˳�\n1.����\n2.����\n3.ping����\n4.����\n---------------------------------------------------------------\n������ָ�";
		cin>>input;
		len=strlen(input);
		len<100 ? cmd=knowit(input) : cmd=0;
		if(cmd==0) {
			cout<<"Goodbye!";
			break;
		} else if(cmd==1) {
			system("cls");
			cout<<"------------------------------------------------------------------\n����汾��v0.5.0(20210630)\n���ߣ��������ࣨ��ҹStarlit-Night��\n��д���ڣ�2021��6��30��\n\n";
		} else if(cmd==2) {
			system("cls");
		} else if(cmd==3) {
			system("cls");
			while(1) {
				int a;
				printf("ping���ԣ��汾20210630��\n-----------------------------------------\n�����б�\n[1]��ʼping����\n[2]�˳�\n-----------------------------------------\n�����룺");
				scanf("%d",&a);
				if(a==1) {
					system("cls");
					printf("���ڿ�ʼping......");
					system("ping www.magicyan.xyz");
					cout<<endl;
					system("ping www.luogu.com.cn");
					cout<<endl<<endl;
				} else if(a==2) break;
				else cout<<"No such command!";
			}
		} else if(cmd==4) {
			cout<<"��������\n"<<"�������ݣ���ȴ����¡�"<<endl;
		} else cout<<"No such command!\n";
	}
	return 0;
}
int knowit(char a[100]) {
	if(len==1&&a[0]>='0'&&a[0]<='9') {
		return a[0]-'0';
	}
	return 00000;
}



