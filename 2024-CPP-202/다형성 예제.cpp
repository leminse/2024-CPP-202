#include <iostream>
#include <string>

using namespace std;

class Food {
public:
	Food(int civil, int force, string name, int territory) :
		civil_(civil), force_(force), name_(name), territory_(territory) {}

	void show() {
		cout << "국민 수 : " << civil_ << endl;
		cout << "국력 : " << force_ << endl;
		cout << "이름 : " << name_ << endl;
		cout << "면적 : " << territory__ << endl;
	}

private:
	int civil_;			//국민 수 
	int force_;			//군력
	string name_;		//이름
	int territory_;		//땅(면적)
};

class Kimchi : public Food {
public:
	Kimchi(int civil, int force, string name, int territory,  int rice, int hangul):
		Food(civil, force, name, territory), rice_(rice), garlic_(hangul){}

	void show() {
		cout << "밥 : " << rice_ << endl;
		cout << "마늘 : " << garlic_ << endl;
	}

private:
	int rice_;
	int garlic_;			//김치의 힘
};

class Candy : public Food {
public:
	Candy(int civil, int force, string name, int territory, int galafin, int sugar_):
		Food(civil, force, name, territory), jelly_(galafin), sugar_(sugar){}
private:
	int jelly_;
	int sugar_;			//사탕의 힘
};

class cheese : public Food {
public:
	cheese(int civil, int force, string name, int territory, int red_):
		Food(civil, force, name, territory), cheddar_(cheddar), milk_(milk) {}

	void show() {
		cout << "우유 : " << milk_ << endl;
		cout << "체다 : " << cheddar_ << endl;
	}

private:
	int milk_;
	int cheddar_;	//체다의 힘..?
};

void main(void) {
	Food* player = new Kimchi(15, 95, "열무김치", 30, 20, 10);
	Food* friends = new cheese(100, 20, "짜계치", 100, 20, 100);

	player->show();

	cout << endl << endl;
	cout << "상대방" << endl;
	friends->show();

	cout << "-------------------------------" << endl;

	int select;
	cout << "1. 공격" << endl;
	cout << "2. 특수1" << endl;
	cout << "1. 특수2" << endl;
	cout << "1. 방어" << endl;

	cin >> select;

	switch (select)
	{
	case 1:
		cout << "공격" << endl;
		break;
	case 2:
		cout << "특수1" << endl;
		break;
	case 3:
		cout << "특수2" << endl;
		break;
	case 4:
		cout << "방어" << endl;
		break;
	default:
		cout << "디폴트" << endl;
	}
	system("pause");
}

	delete friends;
	delete player;
