#include <iostream>
#include <string>

using namespace std;

class Food {
public:
	Food(int civil, int force, string name, int territory) :
		civil_(civil), force_(force), name_(name), territory_(territory) {}
private:
	int civil_;			//±¹¹Î ¼ö 
	int force_;			//±º·Â
	string name_;		//ÀÌ¸§
	int territory_;		//¶¥(¸éÀû)
};

class Korea : public Food {
public:
	Korea(int civil, int force, string name, int territory,  int rice, int hangul):
		Food(civil, force, name, territory), rice_(rice), hangul_(hangul){}
private:
	int rice_;
	int hangul_;			//ÇÑ±ÛÀÇ Èû
};

class Jelly : public Food {
public:
	Jelly(int civil, int force, string name, int territory, int galafin, int sugar_):
		Food(civil, force, name, territory), galafin_(galafin), sugar_(sugar){}
private:
	int galafin_;
	int sugar_;			//»çÅÁÀÇ Èû
};

class Chese : public Food {
public:
	Chese(int civil, int force, string name, int territory, int red_):
		Food(civil, force, name, territory), red_(red){}
private:
	int red_;
};