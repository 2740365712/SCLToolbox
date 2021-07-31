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
		cout<<"---------------------------------------------------------------\n简易命令行工具箱-SCLToolbox v0.8.1\n功能指令菜单:\n0.退出\n1.关于\n2.清屏\n3.ping测试\n4.帮助中心\n5.Windows关机小助手\n---------------------------------------------------------------\n请输入指令：";
		cin>>input;
		len=strlen(input);
		len<100 ? cmd=knowit(input) : cmd=-1;
		system("cls");
		if(cmd==0) {
			cout<<"Goodbye!";
			break;
		} else if(cmd==1) {
			cout<<"软件版本：v0.8.1(20210731)\n作者：梦里徜徉（星夜Starlit-Night）\n编写日期：2021年7月31日\n";
			Sleep(3000);
		} else if(cmd==2) {
		} else if(cmd==3) {			
			pingtool();
		} else if(cmd==4) {
			cout<<"帮助中心\n"<<"1.加法运算指令（实验性，结果保留两位小数）：\nplus n a1 a2 a3 …… an"<<"\n2.获取最新版本：\n访问 https://github.com/2740365712/SCLToolbox/releases"<<"\n";
			Sleep(3000);
		} else if(cmd==5) {
			cout<<"Windows关机小助手（20210731）\n【1】立刻关机\n【2】30分钟后关机\n【3】1小时后关机\n【4】取消关机计划\n请输入您的选择：";
			int userinp;
			cin>>userinp;
			switch(userinp){
				case 1:system("shutdown -s -t 0");break;
				case 2:system("shutdown -s -t 1800");break;
				case 3:system("shutdown -s -t 3600");break;
                case 4:system("shutdown -a");break;
			}
		} else if(cmd==101) {
			int n;
			double num[10000],sum=0;
			cin>>n;
			for(int i=0; i<n; i++) {
				cin>>num[i];
				sum+=num[i];
			}
			printf("%.2f\n",sum);
		} else cout<<"No such command!\n";
	}
	return 0;
}
int knowit(char a[100]) {
	if(len==1&&a[0]>='0'&&a[0]<='9') {
		return a[0]-'0';
	} else {
		if(!strcmp(a,ca)) {
			return 101;
		}
	}
	return -1;
}
void pingtool() {
	while(1) {
		int a,pto=1;
		cout<<"ping测试（版本20210731）\n-----------------------------------------\n功能列表：\n[1]开始ping测试\n[2]退出\n[3]调整ping设置\n-----------------------------------------\n请输入：";
		scanf("%d",&a);
		if(a==1) {
			system("cls");
			cout<<"现在开始ping......";
			switch(pto){
				case 1:
					system("ping www.luogu.com.cn");
					break;
				case 2:
					system("ping www.cloudflare.com");
					break;
				case 3:
					system("ping www.ithome.com");
					break;
				default:
					system("ping www.luogu.com.cn");
			}
			cout<<"\n\n";
		} else if(a==2) break;
		else if(a==3) {
			cout<<"\n-----------------------------------------\n设置要ping的网站：\n[1]洛谷（默认）\n[2]Cloudflare\n[3]IT之家\n请输入：";
			cin>>pto;
			continue;
		} else cout<<"No such command!";
	}
}


