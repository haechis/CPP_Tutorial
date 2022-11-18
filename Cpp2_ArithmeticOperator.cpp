#include <iostream>

using namespace std;

int main(){

    // 연산자 우선순위 예시.
    cout << 40 - 32 / 2 << " == " << 24;

    // = ( equal)은 right-to-left 연산 하므로,
    int a,b,c;
    a = b = c = 10; // 이  가능하다.
    // 또 다른 단항 (Unary) 연산자 + , -는
    cout << +-+-1; //과 같이 쓸 수 있다.
    // 단, 
    // cout << --1; // 이것은 감소 연산자 이므로 안된다.

    // c++ 초기화. -> 자주 사용해서 익히자.
    int a(10);

    // 주의, 한 문장에서 한 변수를 두 번 변경하면 오류 발생 가능성 매우 높음.
    int num = 10;
    cout << ++num + num++ <<endl;
}