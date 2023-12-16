#include<iostream>
using namespace std;
class UI
{
private:
public:
	//初始界面
	void welcomeUI();
	void exitUI();
};
void UI::welcomeUI() {
	printf("*\t欢迎使用高校学生学籍管理系统\t*");
	printf("\n*****************************************\n");
	printf("*            请选择功能列表             *\n");
	printf("*            1.录入学生基本信息         *\n");
	printf("*            2.查询学生基本信息         *\n");
	printf("*            3.修改学生基本信息         *\n");
	printf("*            4.删除学生基本信息         *\n");
	printf("*            5.查询已录入所有学生信息   *\n");
	printf("*            0.退出系统                 *\n");
	printf("*****************************************\n");
}

void UI::exitUI() {
	printf("*****************************************\n");
	printf("*\t欢迎再次使用\t*");
	printf("\n*****************************************\n");
	getchar();
	exit(0);
}
