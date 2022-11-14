#include <iostream> 
// iostream: 출력/입력을 위함.
int main(){ //cpp 파일은 이 main 함수부터 부조건 시작.
    // cout 뒤에 녀석을 출력한다.
    std::cout<<"Hello World!";
    
    // 함수의 반환값이 0이다.
    return 0;
}
// y = f(x)
// y = main()
// 0 = main()
// return 0을 하는 이유!!
// 어떤 누군가가 이 프로그램을 실행할 떄, return 0을 하면 정상적으로 종료되었다고 알려주는 것이고,
// return 0이 아니라면 비정상적인 종료가 있었을 것이다. 