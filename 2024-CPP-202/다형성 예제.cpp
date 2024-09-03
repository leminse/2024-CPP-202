#include <iostream>
#include <string>

using namespace std;

class Food {
public:
	Food(int civil, int force, string name, int territory) :
		civil_(civil), force_(force), name_(name), territory_(territory) {}

	void show() {
		cout << "���� �� : " << civil_ << endl;
		cout << "���� : " << force_ << endl;
		cout << "�̸� : " << name_ << endl;
		cout << "���� : " << territory__ << endl;
	}

private:
	int civil_;			//���� �� 
	int force_;			//����
	string name_;		//�̸�
	int territory_;		//��(����)
};

class Kimchi : public Food {
public:
	Kimchi(int civil, int force, string name, int territory,  int rice, int hangul):
		Food(civil, force, name, territory), rice_(rice), garlic_(hangul){}

	void show() {
		cout << "�� : " << rice_ << endl;
		cout << "���� : " << garlic_ << endl;
	}

private:
	int rice_;
	int garlic_;			//��ġ�� ��
};

class Candy : public Food {
public:
	Candy(int civil, int force, string name, int territory, int galafin, int sugar_):
		Food(civil, force, name, territory), jelly_(galafin), sugar_(sugar){}
private:
	int jelly_;
	int sugar_;			//������ ��
};

class cheese : public Food {
public:
	cheese(int civil, int force, string name, int territory, int red_):
		Food(civil, force, name, territory), cheddar_(cheddar), milk_(milk) {}

	void show() {
		cout << "���� : " << milk_ << endl;
		cout << "ü�� : " << cheddar_ << endl;
	}

private:
	int milk_;
	int cheddar_;	//ü���� ��..?
};

void main(void) {
	Food* player = new Kimchi(15, 95, "������ġ", 30, 20, 10);
	Food* friends = new cheese(100, 20, "¥��ġ", 100, 20, 100);

	player->show();

	cout << endl << endl;
	cout << "����" << endl;
	friends->show();

	cout << "-------------------------------" << endl;

	int select;
	cout << "1. ����" << endl;
	cout << "2. Ư��1" << endl;
	cout << "1. Ư��2" << endl;
	cout << "1. ���" << endl;

	cin >> select;

	switch (select)
	{
	case 1:
		cout << "����" << endl;
		break;
	case 2:
		cout << "Ư��1" << endl;
		break;
	case 3:
		cout << "Ư��2" << endl;
		break;
	case 4:
		cout << "���" << endl;
		break;
	default:
		cout << "����Ʈ" << endl;
	}
	system("pause");
}

	delete friends;
	delete player;
