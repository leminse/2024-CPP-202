#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() // main의 반환 타입을 int로 수정
{
    map<string, long long> v;

    // 맵 추가
    v["하츄핑"] = 10000000000;
    v["샤샤핑"] = 30000000000;
    v["공쥬핑"] = 100;

    // 반복자
    for (auto iter = v.begin(); iter != v.end(); iter++)
        cout << iter->first << "는 " << iter->second << endl;

    // 값 수정
    v["하츄핑"] = 10000000000;
    cout << v["하츄핑"] << endl;

    // 크기
    cout << "맵의 크기: " << v.size() << endl;

    // 값 출력
    for (auto iter = v.begin(); iter != v.end(); iter++)
        cout << iter->second << endl;
     
    // 끝의 값 제거 (마지막 항목 삭제)
    if (!v.empty()) {
        auto last = --v.end(); // 마지막 요소의 반복자
        v.erase(last); // 마지막 요소 삭제
    }

    // 남은 값 출력
    cout << "남은 값들:" << endl;
    for (auto iter = v.begin(); iter != v.end(); iter++)
        cout << iter->first << "는 " << iter->second << endl;

    return 0; // 성공적으로 종료
}