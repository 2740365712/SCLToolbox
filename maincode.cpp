#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <windows.h>
using namespace std;
typedef long long ll;
char ca[100]="plus";
int cmd,len;
int knowit(char a[100]);
void pingtool();
int main() {
	char input[100];
	while(1) {
		cout<<"---------------------------------------------------------------\n���������й�����-SCLToolbox v0.6\n����ָ��˵�:\n0.�˳�\n1.����\n2.����\n3.ping����\n4.����\n---------------------------------------------------------------\n������ָ�";
		cin>>input;
		len=strlen(input);
		len<100 ? cmd=knowit(input) : cmd=0;
		if(cmd==0) {
			cout<<"Goodbye!";
			break;
		} else if(cmd==1) {
			system("cls");
			cout<<"------------------------------------------------------------------\n����汾��v0.6(20210711)\n���ߣ��������ࣨ��ҹStarlit-Night��\n��д���ڣ�2021��7��11��\n\n";
		} else if(cmd==2) {
			system("cls");
		} else if(cmd==3) {
			system("cls");
			pingtool();
		} else if(cmd==4) {
			cout<<"��������\n"<<"�����ӷ�����ָ�ʵ���ԣ���plus n a1 a2 a3 ���� an"<<"\n";
		} else if(cmd==101) {
				int n;
				double num[10000],sum=0;
				cin>>n;
				for(int i=0; i<n; i++) {
					cin>>num[i];
					sum+=num[i];
				}
				printf("%.2f\n",sum);
			}
		else cout<<"No such command!\n";
	}
	return 0;
}
int knowit(char a[100]) {
	if(len==1&&a[0]>='0'&&a[0]<='9') {
		return a[0]-'0';
	}else{
		if(!strcmp(a,ca)){
			return 101;
		}
	}
	return 99999;
}
void pingtool(){
	while(1) {
		int a,pto=1;
		cout<<"ping���ԣ��汾20210711��\n-----------------------------------------\n�����б�\n[1]��ʼping����\n[2]�˳�\n[3]����ping����\n-----------------------------------------\n�����룺";
		scanf("%d",&a);
		if(a==1) {
			system("cls");
			cout<<"���ڿ�ʼping......";
			switch (pto){
				case 1:system("ping www.luogu.com.cn");break;
				case 2:system("ping www.baidu.com");break;
				case 3:system("ping www.ithome.com");break;
				default:system("ping www.luogu.com.cn");
			}			
			cout<<"\n\n";
		} else if(a==2) break;
		else if(a==3){
			cout<<"\n-----------------------------------------\n����Ҫping����վ��\n[1]��ȣ�Ĭ�ϣ�\n[2]�ٶ�\n[3]IT֮��\n�����룺";				
			cin>>pto;
			continue;
		}
		else cout<<"No such command!";
	}
}


