// #pragma warning(disable: 4996) // vs에서 error 무시.
#include <cstdio>

int main(){

    int num;
    // num = 1;
    int n = scanf("%d", &num); //scanf 받을 때 & 붙여서 받아야 함.
    printf("%d",n); // 잘 입력 받았으면 n = 1
    printf("%d",num); // 입력받은 num을 출력

    int num0, num1, num2;
    // 올바른 입력 방법
    // 10 + 20 = 30
    // 만약, 10 20 30 과 같이 넣으면, 10만 제대로 들어가고 나머지 num1, num2에는 쓰레기값이 들어간다.
    scanf("%d + %d = %d",&num0, &num1, &num2);
    printf("%d, %d, %d\n",num0, num1, num2);

    float f0;
    double d0, d1;
    // scanf에서는 lf가 double , f가 float.
    scanf("%lf %f %lf", &d0, &d1, &f0);
    printf("%lf %lf %f\n",d0, d1, f0);

    int x, y;
    // %o: 8진수 , %x: 16진수
    scanf("%o %x",&x, &y);
    printf("%d , %d ", x, y)
    

    // scanf 자주 접하는 오류 !!
    // 예를 들어, a + (enter) 하면, ch에 a와 enter가 들어간다. (new line의 ASCII CODE는 10)
    // 만약 ch에 ab를 넣으면 a, b가 들어감.
    char ch;
    scanf("%c", &ch);
    printf("1, %c\n", ch);

    scanf("%c", &ch);
    printf("2, %c\n",ch);

    // 해결책으로 fflush(stdin)을 제시하지만, 모든 플랫폼에서 다 동작하지 않으니 주의해야 함.
    // 따라서, getchar();를 사용함.

    char ch;
    scanf("%c", &ch);
    printf("1, %c\n", ch);

    getchar();
    // 버퍼에 들어간 것 확인.
    // ch = getchar();
    // printf("%d", ch); --> 버퍼에 들어감 (엔터가)

    scanf("%c", &ch);
    printf("2, %c\n",ch);


    // 파일처럼 동작.
    freopen("input.txt","r",stdin);

    int num;
    scanf("%d", &num);
    printf("%d", num);


}