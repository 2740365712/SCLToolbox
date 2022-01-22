#include <windows.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;
typedef long long ll;
char ca[10] = "getsum";
char syscommand[100]="shutdown -s -t ";
int cmd, len;
int knowit(char a[100]);
void pingtool();
int main() {
	char input[100];
	while (1) {
		cout << "---------------------------------------------------------------\n简易命令行工具箱-SCLToolbox v1.0-beta(20220122)\n功能菜单:\n0.退出\n1.关于\n2.清屏\n3.网络指令工具\n4.帮助中心\n5.Windows关机小助手\n---------------------------------------------------------------\n请输入指令：";
		cin >> input;
		len = strlen(input);
		len < 100 ? cmd = knowit(input) : cmd = -1;
		system("cls");
		if (cmd == 0) {
			cout << "Goodbye!";
			break;
		} else if (cmd == 1) {
			cout << "软件版本：v1.0-beta(20220122)\n作者：梦里徜徉（星夜Starlit-Night）\n更新日期：2022年1月22日\nPowered by CPlusPlus";
			Sleep(3000);
		} else if (cmd == 2) {
		} else if (cmd == 3) {
			pingtool();
		} else if (cmd == 4) {
			cout << "帮助中心\n"
			     << "1.求和指令（结果保留两位小数）：\ngetsum n a1 a2 a3 ...... an"
			     << "\n2.获取最新版本：\n访问 https://github.com/2740365712/SCLToolbox/releases"
			     << "\n";
			Sleep(3000);
		} else if (cmd == 5) {
			cout << "Windows关机小助手（20220120）\n【1】立即关机\n【2】立即注销\n【3】立即重启\n【4】设置定时关机\n【5】取消关机计划\n请输入您的选择：";
			int userchoice;
			cin >> userchoice;
			switch (userchoice) {
				case 1:
					system("shutdown -p");
					break;
				case 2:
					system("shutdown -l");
					break;
				case 3:
					system("shutdown -r");
					break;
				case 4:
					char sdtime[5];
					printf("您想在多少秒后关机？（0-99999）：");
					scanf("%s",sdtime);
					system(strcat(syscommand,sdtime));
					break;
				case 5:
					system("shutdown -a");
					break;
			}
		} else if (cmd == 101) {
			int n;
			double num[10000], sum = 0;
			cin >> n;
			for (int i = 0; i < n; i++) {
				cin >> num[i];
				sum += num[i];
			}
			printf("%.2f\n", sum);
		} else
			cout << "No such command!\n";
	}
	return 0;
}
int knowit(char a[100]) {
	if (len == 1 && a[0] >= '0' && a[0] <= '9') {
		return a[0] - '0';
	} else if (!strcmp(a, ca)) {
		return 101;
	}
	return -1;
}
void pingtool() {
	while (1) {
		int a, pto = 1;
		cout << "网络指令工具（版本20220122）\n-----------------------------------------\n功能列表：\n[0]退出\n[1]开始ping测试\n[2]开始tracert（路由跟踪）测试\n[3]设置\n-----------------------------------------\n请输入：";
		scanf("%d", &a);
		if (a == 0)
			return;
		else if (a == 1) {
			system("cls");
			switch (pto) {
				case 1:
					system("ping www.baidu.com");
					break;
				case 2:
					system("ping www.luogu.com.cn");
					break;
				case 3:
					system("ping www.ithome.com");
					break;
				default:
					system("ping www.baidu.com");
			}
			cout << endl << endl;
		} else if (a == 2) {
			system("cls");
			switch (pto) {
				case 1:
					system("tracert www.baidu.com");
					break;
				case 2:
					system("tracert www.luogu.com.cn");
					break;
				case 3:
					system("tracert www.ithome.com");
					break;
				default:
					system("tracert www.baidu.com");
			}
		} else if (a == 3) {
			cout << "\n-----------------------------------------\n请选择要ping或tracert的网站：\n[1]百度（默认）\n[2]洛谷\n[3]IT之家\n请输入：";
			cin >> pto;
			continue;
		} else
			cout << "No such command!";
	}
}
