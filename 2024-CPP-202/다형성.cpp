#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
class Food {
public:
	Food(int civil, int force, string name, int territory)
		: civil_(civil), force_(force), name_(name), territory_(territory)
	{
	}
	virtual void show()
	{
		cout << "���� �� : " << civil_ << endl;
		cout << "���� : " << force_ << endl;
		cout << "�̸� : " << name_ << endl;
		cout << "���� : " << territory_ << endl;
	}
	virtual void attack(Food* target) = 0;
	int civil_;		// ���� ��
	int force_;		// ���� : 0�� �Ǹ� ���
	string name_;	// �̸�
	int territory_;	// ��(����)
};
class Kimchi : public Food {
public:
	Kimchi(int civil, int force, string name, int territory, int garlic, int pepper)
		: Food(civil, force, name, territory), garlic_(garlic), pepper_(pepper)
	{}
	{
		ca_ = 0;
	}

	void show()
	{
		@@ - 40, 13 + 42, 19 @@ class Kimchi : public Food {
			cout << "���� : " << pepper_ << endl;
		}

		// �⺻���� �� 3Ÿ���� ũ��Ƽ�� ������
		void attack(Food * target) override
		{
			target->force_ -= this->force_ * 2;
			ca_++;
			if (ca_ % 3 == 0)
				target->force_ -= this->force_ * 2;
			else
				target->force_ -= this->force_;
		}

		int garlic_;
		int pepper_;		// �ѱ��� ��
		int ca_;			// �⺻���� 3Ÿ�� ũ��Ƽ�� ����
	};

	class Jelly : public Food {
	public:
		Jelly(int civil, int force, string name, int territory, int gelatin, int sugar)
			: Food(civil, force, name, territory), gelatin_(gelatin), sugar_(sugar)
		{}
		void show()
		{
			Food::show();
			cout << "����ƾ : " << gelatin_ << endl;
			cout << "���� : " << sugar_ << endl;
		}
		void attack(Food* target) override
		{
			target->force_ += this->force_;
		}
		int gelatin_;
		int sugar_;		// ������ ��
	};
	class Cheese : public Food {
	public:
		Cheese(int civil, int force, string name, int territory, int milk, int rennet)
			: Food(civil, force, name, territory), milk_(milk), rennet_(rennet)
		{}
		void attack(Food* target) override
		{
			target->force_ += this->force_ / 3;
		}
		void show()
		{
			Food::show();
			cout << "���� : " << milk_ << endl;
			cout << "������ : " << rennet_ << endl;
		}
		int milk_;
		int rennet_;	// ������
	};
	void main(void)
	{
		Food* player = new Kimchi(15, 95, "����ġ", 86, 100, 100);
		Food* friends = new Cheese(100, 20, "¥��ġ", 100, 20, 100);
		while (true)
		{
			system("cls");
			cout << "�ڳ���" << endl;
			player->show();
			cout << endl << endl;
			cout << "�ڻ����" << endl;
			friends->show();
			cout << "-------------------------------" << endl;
			int select;
			cout << "1. ����" << endl;
			cout << "2. Ư��1" << endl;
			cout << "3. Ư��2" << endl;
			cout << "4. ���" << endl;
			cin >> select;
			switch (select)
			{
			case 1:
				//TODO : ����
				cout << "����" << endl;
				player->attack(friends);
				break;
			case 2:
				//TODO : Ư��1
				cout << "Ư��1" << endl;
				break;
			case 3:
				//TODO : Ư��2
				cout << "Ư��2" << endl;
				break;
			case 4:
				//TODO : ���
				cout << "���" << endl;
				break;
			default:
				cout << "����Ʈ" << endl;
			}
			system("pause");
		}

		delete friends;
		delete player;
	}