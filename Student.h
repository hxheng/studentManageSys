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
	void modifyStuInfo(char ch);
	//��ӡѧ����Ϣ
	void printInfo();
	//��ȡѧ��
	int getId() { return id; }
	void setName(string name) { this->name = name; }
	void setAge(int age) { this->age = age; }
	void setScore(int score) { this->score = score; }
	void setId(int id) { this->id = id; }
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

}
void Student::printInfo() {
	cout << "ѧ�ţ�" << this->id << "\n������" << this->name << "\n���䣺" << this->age << "\n�ɼ���" << this->score << endl;
};
void Student::modifyStuInfo(char ch) {
	
	
	switch (ch) {
	case '1': {
		break;
	}
	case '2': {
		cout << "�������µ�������";
		string name;
		cin >> name;
		this->setName(name);
		break;
	}
	case '3': {
		cout << "�������µ����䣺";
		int age;
		cin >> age;
		this->setAge(age);
		break;
	}
	case '4': {
		cout << "�������µĳɼ���";
		int score;
		cin >> score;
		this->setScore(score);
		break;
	}
	default: break;
	}

}