#include"Student.h"
#include<vector>
using namespace std;

class School
{
private:
	vector<Student> students;
public:
	School() {}
	//添加学生
	void addStudent(Student student) {
		if (queryIdForAddModify(student.getId())) {
			cout << "学号重复，请重新录入！" << endl;
			return;
		}

		this->students.push_back(student);

		cout << "学生信息录入成功" << endl;
	}
	//数据初始化
	void initData() {
		this->addStudent(Student(1000, "张三", 20, 80));
		this->addStudent(Student(1001, "李四", 19, 86));
	}
	//查询所有学生信息
	void queryAll() {
		for (int i = 0; i < students.size(); i++) {
				students[i].printInfo();
				cout << "***************************************** " << endl;
		}
	}
	//查询学生信息：学号查询
	void queryStudentById(int id) {
		for (int i = 0; i < students.size(); i++) {
			if (students[i].getId() == id) {
				students[i].printInfo();
				return;
			}
		}
		cout << "未查询到相关信息" << endl;
	}
	//学号校验：不能重复
	bool queryIdForAddModify(int id) {
		for (int i = 0; i < students.size(); i++) {
			if (students[i].getId() == id) {
				return true;
			}
		}
		return false;
	}
	//查询学生信息以修改信息：学号查询 返回学生
	Student* queryStudentByIdForModify(int id) {
		for (int i = 0; i < students.size(); i++) {
			if (students[i].getId() == id) {
				return &students[i];
			}
		}
		return NULL;
	}
	//删除相关学生信息
	void deleteStudent(int id) {
		vector<Student>::iterator iter = students.begin();
		for (int i = 0; i < students.size(); i++) {
			if (students[i].getId() == id) {
				students.erase(iter);
				cout << "删除成功" << endl;
				return;
			}
			iter++;
		}
		cout << "未查询到相关信息" << endl;
		return;
	}

};
