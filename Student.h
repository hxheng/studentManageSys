#pragma once
#include <string>
#include<iostream>
using namespace std;

class Student {
private:
	//学号
	int id;
	//姓名
	string name;
	//年龄
	int age;
	//成绩
	int score;
public:
	Student(int id = 0, string name = "", int age = 0, int score = 0 ) {
		this->id = id;
		this->name = name;
		this->age = age;
		this->score = score;
	}
	//录入学生信息
	void inputStuInfo();
	//修改学生信息
	void modifyStuInfo(char ch);
	//打印学生信息
	void printInfo();
	//获取学号
	int getId() { return id; }
	void setName(string name) { this->name = name; }
	void setAge(int age) { this->age = age; }
	void setScore(int score) { this->score = score; }
	void setId(int id) { this->id = id; }
};
void Student::inputStuInfo() {
	int id, age, score;
	string name;
	cout << "请输入学号：" << endl;
	cin >> id;

	cout << "请输入姓名：" << endl;
	cin >> name;

	cout << "请输入年龄：" << endl;
	cin >> age;

	cout << "请输入成绩：" << endl;
	cin >> score;

	this->id = id;
	this->name = name;
	this->age = age;
	this->score = score;

}
void Student::printInfo() {
	cout << "学号：" << this->id << "\n姓名：" << this->name << "\n年龄：" << this->age << "\n成绩：" << this->score << endl;
};
void Student::modifyStuInfo(char ch) {
	
	
	switch (ch) {
	case '1': {
		break;
	}
	case '2': {
		cout << "请输入新的姓名：";
		string name;
		cin >> name;
		this->setName(name);
		break;
	}
	case '3': {
		cout << "请输入新的年龄：";
		int age;
		cin >> age;
		this->setAge(age);
		break;
	}
	case '4': {
		cout << "请输入新的成绩：";
		int score;
		cin >> score;
		this->setScore(score);
		break;
	}
	default: break;
	}

}