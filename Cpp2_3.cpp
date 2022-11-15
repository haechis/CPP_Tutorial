#include <iostream>

using namespace std;

int main(){

    // 2-3 . 부동 소수점.
    float num0 = 1.5;
    float num1 = num0 * 1.5;
    float num2 = num0 / 2;
    float num3 = num0 - 3;

    cout<<num0<<endl; // 1.5
    cout<<num1<<endl; // 2.25
    cout<<num2<<endl; // 0.75
    cout<<num3<<endl; // -1.5

    // 부동 소수점
    // : 첫 비트: 부호, 지수부, 가수부 ,, 로 구분 되어 있음.
    // 지수부는 127을 0으로 하여 계산한다..
    // 예) 10의 6제곱은, 지수부에서 133으로 표현된다.
    /*
    1) float.
    32 bit (usually), exponent: 8, mantissa:23
    2) double
    64 bit (usually), exponent(지수부): 11, mantissa(가수부):52
    3) long double
    64~128
    */

    float num10 = 1.0;
    double num11 = 1.0;
    long double num20 = 1.0;

    cout << sizeof(num0) << endl;
    cout << sizeof(num1) << endl;
    cout << sizeof(num2) << endl;

    cout << sizeof(1.0f) << endl;
    cout << sizeof(1.0) << endl;
    cout << sizeof(1.0L) << endl; // 플랫폼 마다 사이즈가 좀 다름
    

    return 0;
}