#include <iostream>
#include <numeric>

using namespace std;

int main()
{
    // unsigned (부호 없는)
    
    // 0 0 0 0 0 0 0 1
    uint8_t num0 = 1; // base 10

    // 16 = 2*8^1 + 0*8^0
    // 16 = 1 * 2^4 + 0 * 2^3 + 0& 2^2 + 0* 2^1 + 0 * 2^0
    // 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 
    uint16_t num1 = 020; // base 8 ( 앞에 0이 있으면 8진수)
    
    // 255 = 15* 16^1 + 15 * 16 &0
    // 255 = 1* 2^7 + 1*2^6 + 1*2^5 + 1 * 2^4 + 1 * 2 ^ 3 + 1 * 2 ^ 2 + 1 *2 ^1 + 1 * 2^ 0 
    uint32_t num2 = 0xff; // base 16 ,, a가 10이고, f가 15임

    // 10 = 1 * 2^3 + 0*2^2 + 1 * 2^1 + 0 & 2^0
    uint32_t num3 = 0b1010; // base2

    // * Unsigned 계속 * //
    
    // 8 bit max = 2^8 - 1

    // 16 bit max = 65535 = 2^16 - 1

    // test.
    cout<< "numeric limits: \n";
    cout << (int)numeric_limits<uint8_t>::max()<<endl;
    cout << numeric_limits<uint16_t>::max()<<endl;
    cout << numeric_limits<uint32_t>::max()<<endl;
    cout << numeric_limits<uint64_t>::max()<<endl;
    
    // sigend (부호 있는)
    // 2의 보수 , 양의 값에서 2의 보수를 취한 값이 음수가 된다.
    // 방법. 1) 각 비트 반전 2) 1을 더함
    // 예시.
    // 3 = 2*1 + 2*0
    //   => 0 0 0 0 0 0 1 1
    // 1) 각 비트 반전
    //   => 1 1 1 1 1 1 0 0
    // 2) 1을 더함
    //   => 1 1 1 1 1 1 0 1
    // 얘가 왜 -3..?
    // 다시 2의 보수
    //   => 0 0 0 0 0 0 1 0
    // +1
    //   => 0 0 0 0 0 0 1 1
    // 3에 음의값을 취하면 됨.

    // test.
    cout<< "numeric limits: \n";
    cout << (int)numeric_limits<int8_t>::max()<<endl;
    cout << numeric_limits<int16_t>::max()<<endl;
    cout << numeric_limits<int32_t>::max()<<endl;
    cout << numeric_limits<int64_t>::max()<<endl;

    // 음수의 덧셈.
    /*-6 + (-7) = -13
    1) 6
    0 0 0 0 0 1 1 0
    1-1) -6
    1 1 1 1 1 0 1 0
    2) 7
    0 0 0 0 0 1 1 1
    2-1) -7
    1 1 1 1 1 0 0 1
    3) -6 + (-7)
    1 1 1 1 0 0 1 1 // 표현을 못하는 맨 앞자리는 걍 버림 
    // 그리고 sign 비트가 1이니까,
    3)의 보수
    0 0 0 0 1 1 0 0
    3-1) 1더함
    0 0 0 0 1 1 0 1

    */
   /* 덧셈 뺄셈
   6-7 = -1
   1) 6
   0 0 0 0 0 1 1 0
   2) 7 
   0 0 0 0 0 1 1 1
   2-1) -7
   1 1 1 1 1 0 0 1
   3) 6+ (-7)
   1 1 1 1 1 1 1 1
   // sign 비트가 1이니까
   4) 다시 보수
   0 0 0 0 0 0 0 0
   5) +1
   0 0 0 0 0 0 0 1
   */

    // Overflow: 표현할 수 있는 최대값보다 더 커지는 상태
    // Signed 최대값에서 1 더하면, -> 최소값 됨
    // 예.
    // 0 1 1 1 1 1 1 1 -> 127 + 1
    // 1 0 0 0 0 0 0 0 -> -128

    // Underflow: 표현할 수 있는 값보다 작아지는 상태
    // -> 1 더커지면, 최대값이 됨.
    return 0;
}