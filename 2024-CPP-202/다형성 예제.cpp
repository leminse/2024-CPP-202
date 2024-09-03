#include <iostream>
#include <string>

using namespace std;

class Food {
public:
	Food(int civil, int force, string name, int territory) :
		civil_(civil), force_(force), name_(name), territory_(territory) {}
private:
	int civil_;			//���� �� 
	int force_;			//����
	string name_;		//�̸�
	int territory_;		//��(����)
};

class Korea : public Food {
public:
	Korea(int civil, int force, string name, int territory,  int rice, int hangul):
		Food(civil, force, name, territory), rice_(rice), hangul_(hangul){}
private:
	int rice_;
	int hangul_;			//�ѱ��� ��
};

class Jelly : public Food {
public:
	Jelly(int civil, int force, string name, int territory, int galafin, int sugar_):
		Food(civil, force, name, territory), galafin_(galafin), sugar_(sugar){}
private:
	int galafin_;
	int sugar_;			//������ ��
};

class Chese : public Food {
public:
	Chese(int civil, int force, string name, int territory, int red_):
		Food(civil, force, name, territory), red_(red){}
private:
	int red_;
};