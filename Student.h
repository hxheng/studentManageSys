#pragma once
#include <string>
#include<iostream>
using namespace std;
class Student {
private:
	//ѧ��
	int id;
	//����
	string name;
	//����
	int age;
	//�ɼ�
	int score;
public:
	Student(int id = 0, string name = "", int age = 0, int score = 0 ) {
		this->id = id;
		this->name = name;
		this->age = age;
		this->score = score;
	}
	//¼��ѧ����Ϣ
	void inputStuInfo();
	//�޸�ѧ����Ϣ
	void modifyStuInfo();
	//��ӡѧ����Ϣ
	void printInfo();
	//��ȡѧ��
	int getId() { return id; }
	void setName(string name) { this->name = name; }
	void setAge(string name) { this->name = name; }
	void setScore(string name) { this->name = name; }
};
void Student::inputStuInfo() {
	int id, age, score;
	string name;
	cout << "������ѧ�ţ�" << endl;
	cin >> id;

	cout << "������������" << endl;
	cin >> name;

	cout << "���������䣺" << endl;
	cin >> age;

	cout << "������ɼ���" << endl;
	cin >> score;

	this->id = id;
	this->name = name;
	this->age = age;
	this->score = score;

	cout << "ѧ����Ϣ¼��ɹ�" << endl;
}
void Student::printInfo() {
	cout << "ѧ�ţ�" << this->id << "\n������" << this->name << "\n���䣺" << this->age << "\n�ɼ���" << this->score << endl;
};
void Student::modifyStuInfo() {
	cout << "��ѡ����Ҫ�޸ĵ�ѡ�1.���� 2.���� 3.�ɼ�" << endl;
	char ch;
	cin >> ch;
	switch (ch) {
	case '1': {
		cout << "�������µ�������";
		string name;
		cin >> name;
		this->setName(name);
		break;
	}
	case '2': {
		cout << "�������µ����䣺";
		string age;
		cin >> age;
		this->setAge(age);
		break;
	}
	case '3': {
		cout << "�������µĳɼ���";
		string score;
		cin >> score;
		this->setScore(score);
		break;
	}
	default: break;
	}

}