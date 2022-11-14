#include <iostream>

int main(){
    int num0 = 11;
    int num1 = 011; // 8진수
    int num2 = 0b11; // 2진수
    int num3 = 0x11; // 16진수

    int intNum = 0;
    long longNum = 0;
    int* intPointer = & intNum;

    // 개발 환경마다 차지하는 bit 수가 다름
    std::cout<< sizeof(intNum) <<std::endl; // 4
    std::cout<< sizeof(longNum) <<std::endl; // Linux: 8 / VS에서 하면 4 (windows)
    std::cout<< sizeof(intPointer) <<std::endl; // 8

    // 개발에 상관없이 사용하려면
    int8_t num00 = 0;
    int16_t num10= 0;
    int32_t num20 = 0;
    std::cout<< sizeof(num00) <<std::endl;
    std::cout<< sizeof(num10) <<std::endl;
    std::cout<< sizeof(num20) <<std::endl;
}