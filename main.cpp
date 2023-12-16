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
		//�Ӽ�������һ���ַ�
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
				cout << "������Ҫ��ѯ��ѧ�ţ�";
				cin >> id;
				school.queryStudentById(id);
				break;
			}
			case '3': {
				int id;
				char ch;

				cout << "������Ҫ�޸���Ϣѧ����ѧ�ţ�";
				cin >> id;
				Student* stu = school.queryStudentByIdForModify(id);
				if (stu != NULL) {
					cout << "��ѡ����Ҫ�޸ĵ�ѡ�1.ѧ�� 2.���� 3.���� 4.�ɼ�" << endl;
					cin >> ch;
					if (ch == '1') {
						cout << "�������µ�ѧ�ţ�";
						int newId;
						cin >> newId;
						if (newId == id) {
							stu->setId(newId);
						}else if (school.queryIdForAddModify(newId)) {
							cout << "ѧ���ظ�" << endl;
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
					cout << "δ��ѯ�������Ϣ��" << endl;
				}
				break;
			}
			case '4': {
				int id;
				cout << "������Ҫɾ����Ϣѧ����ѧ�ţ�";
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