#include<iostream>
using namespace std;
class UI
{
private:
public:
	//��ʼ����
	void welcomeUI();
	void exitUI();
};
void UI::welcomeUI() {
	printf("*\t��ӭʹ�ø�Уѧ��ѧ������ϵͳ\t*");
	printf("\n*****************************************\n");
	printf("*            ��ѡ�����б�             *\n");
	printf("*            1.¼��ѧ��������Ϣ         *\n");
	printf("*            2.��ѯѧ��������Ϣ         *\n");
	printf("*            3.�޸�ѧ��������Ϣ         *\n");
	printf("*            4.ɾ��ѧ��������Ϣ         *\n");
	printf("*            5.��ѯ��¼������ѧ����Ϣ   *\n");
	printf("*            0.�˳�ϵͳ                 *\n");
	printf("*****************************************\n");
}

void UI::exitUI() {
	printf("*****************************************\n");
	printf("*\t��ӭ�ٴ�ʹ��\t*");
	printf("\n*****************************************\n");
	getchar();
	exit(0);
}
