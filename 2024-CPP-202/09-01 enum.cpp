#include <iostream>

using namespace std;

//������ ����
enum FoodStyle {
	KOREAN,							//0	(0�� ����Ʈ ���̰� ���� �ְ� ������ KOREAN=0���� �Ѵ�)
	JAPANESE,						//1
	CHINESE							//2	
};

void main(void) {
	
	//�������� ����ϸ� �������� ��������, �߰��� ���� �����ϰ� �߰��� �� �ִ�.

	int style = FoodStyle::KOREAN;

	switch (style) {
		case KOREAN:
			cout << "��ġ, ��, �����" << endl;
			break;
		case JAPANESE:
			cout << "�ʹ�, Ÿ�ھ߳�, ���" << endl;
			break;
		case CHINESE:
			cout << "������, ���ķ�, ������" << endl;
			break;
	}
	
}