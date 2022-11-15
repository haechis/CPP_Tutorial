#include <iostream>
#include <cfloat>
#include <cstring>

using namespace std;

int main(){

    // 비교 연산 시, 오차 누적으로 인해 값이 달라질 수 있음!!
    float num0 = 1.0f;
    float num1 = 0.0f;
    for (int i = 0;i< 1000; i++)
        num1 = num1 + 0.001;
    
    if (num0 == num1)
        cout<< "Equal 0" <<endl;
    
    if (abs(num0 - num1) <= FLT_EPSILON) // float 에 관한 절대값
        cout << "Equal 1" << endl;

    unsigned int num00 = 0b00111111100000000000000000000000;
    float num11;
    memcpy(&num11, &num00, sizeof(num00));

    cout.precision(64);
    cout << "num11" << num11 << endl;

    // float이 또 위험한 이유~.
    float num20 = 1.0f;

    // 1.0의 메모리 레이아웃.
    // 0011, 1111,1000,0000,0000,0000,0000,0000 (32bit) => 1.0 (binary)
    // 1.0에서 더할 수 있는 가장 작은 값
    // 0011, 1111,1000,0000,0000,0000,0000,0001 (32bit) => 1.0 + epsilon.. (binary)
    // 즉 2^-23
    // 0011, 0100,0000,0000,0000,0000,0000,0000
    unsigned int num21 = 0b00110100000000000000000000000000;
    memcpy(&num20, &num21,sizeof(num21));
    cout << num20 + num20<< endl;

    // float max.
    float num4 = FLT_MAX;
    cout << num4 << endl;

    float num5;
    unsigned int num6 = 0b01111111111111111111111111111111;
    memcpy(&num5,&num6,sizeof(num6));
    cout<<num6<<endl;

    // float min
    float fltMin = FLT_MIN;
    unsigned int ifltMin;
    memcpy(&ifltMin, &fltMin, sizeof(fltMin));
    
    float fltTrueMin = FLT_TRUE_MIN;
    unsigned int ifltTrueMin;
    memcpy(&ifltTrueMin, &fltTrueMin, sizeof(fltTrueMin));

    cout<<ifltMin<<endl; 
    // 0000 , 0000 1000 0000 0000 0000 0000 0000 // 지수부만 1, => 10^-126(2)
    // 0000 0000 0000 0000 0000 0000 0000 0001 // Flt True Min => 10^126(2) * 10^-23(2) = 10^-149(2)
    cout<<ifltTrueMin<<endl;

    return 0;
}