﻿#include <iostream>
#include <map>

using namespace std;

void main(void)
{
	map<string, long long> money;

	// 맵 추가
	money["하츄핑"] = 10000000000;
	money["샤샤핑"] = 30000000000;
	money["공쥬핑"] = 100;


	// 반복자
	map<string, long long>::iterator iter;
	for (iter = money.begin(); iter != money.end(); iter++)
		cout << iter->first << "는 " << iter->second << endl;

	// 값 수정
	money["하츄핑"] = 10000000000;
	cout << money["하츄핑"] << endl;

	// 크기
	cout << money.size() << endl;

}