#include"Student.h"
#include<vector>
using namespace std;
class School
{
private:
	vector<Student> students;
public:
	School() {}
	//���ѧ��
	void addStudent(Student student) {
		this->students.push_back(student);
	}
	//���ݳ�ʼ��
	void initData() {
		this->addStudent(Student(1000, "����", 20, 80));
		this->addStudent(Student(1001, "����", 19, 86));
	}
	//��ѯ����ѧ����Ϣ
	void queryAll() {
		for (int i = 0; i < students.size(); i++) {
				students[i].printInfo();
				cout << "***************************************** " << endl;
		}
	}
	//��ѯѧ����Ϣ��ѧ�Ų�ѯ
	void queryStudentById(int id) {
		for (int i = 0; i < students.size(); i++) {
			if (students[i].getId() == id) {
				students[i].printInfo();
				return;
			}
		}
		cout << "δ��ѯ�������Ϣ" << endl;
	}
	//��ѯѧ����Ϣ���޸���Ϣ��ѧ�Ų�ѯ ����ѧ��
	Student* queryStudentByIdForModify(int id) {
		for (int i = 0; i < students.size(); i++) {
			if (students[i].getId() == id) {
				return &students[i];
			}
			else {
				return NULL;
			}
		}
	}
	//ɾ�����ѧ����Ϣ
	void deleteStudent(int id) {
		vector<Student>::iterator iter = students.begin();
		for (int i = 0; i < students.size(); i++) {
			if (students[i].getId() == id) {
				students.erase(iter);
				cout << "ɾ���ɹ�" << endl;
				return;
			}
			iter++;
		}
		cout << "δ��ѯ�������Ϣ" << endl;
		return;
	}

};
