#include<iostream>
#include"School.h"
#include"Student.h"
#include"UI.h"
using namespace std;


int main() {
	UI ui;
	School school;
	school.initData();
	while (1)
	{
		ui.welcomeUI();
		char ch;
		//从键盘输入一个字符
		cin >> ch;
		switch (ch){
			case '1':{
				Student s;
				s.inputStuInfo();
				school.addStudent(s);
				break;
			}
			case '2': {
				int id;
				cout << "请输入要查询的学号：";
				cin >> id;
				school.queryStudentById(id);
				break;
			}
			case '3': {
				int id;
				char ch;

				cout << "请输入要修改信息学生的学号：";
				cin >> id;
				Student* stu = school.queryStudentByIdForModify(id);
				if (stu != NULL) {
					cout << "请选择你要修改的选项：1.学号 2.姓名 3.年龄 4.成绩" << endl;
					cin >> ch;
					if (ch == '1') {
						cout << "请输入新的学号：";
						int newId;
						cin >> newId;
						if (newId == id) {
							stu->setId(newId);
						}else if (school.queryIdForAddModify(newId)) {
							cout << "学号重复" << endl;
							break;
						}
						else {
							stu->setId(newId);
						}
					}
					else {
						stu->modifyStuInfo(ch);
					}
				}
				else {
					cout << "未查询到相关信息！" << endl;
				}
				break;
			}
			case '4': {
				int id;
				cout << "请输入要删除信息学生的学号：";
				cin >> id;
				school.deleteStudent(id);
				break;
			}
			case '5': {
				school.queryAll();
				break;
			}
			case '0': {
				ui.exitUI();
				break;
			}
			default:break;
		}

	}
	return 0;
}