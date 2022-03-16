#include <stdio.h>

int main()
{
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("Size of char: %ld byte\n",sizeof(charType));        //charType은 char형으로 선언됐기 때문에 1바이트란 결과가 나온다.
    printf("Size of int: %ld bytes\n",sizeof(integerType));     //integerType은 integer형으로 선언됐기 때문에 4바이트란 결과가 나온다.
    printf("Size of float: %ld bytes\n",sizeof(floatType));     //floatType은 float형으로 선언됐기 때문에 4바이트란 결과가 나온다.
    printf("Size of double: %ld bytes\n",sizeof(doubleType));   //doubleType은 double형으로 선언됐기 때문에 8바이트란 결과가 나온다.

    printf("-----------------------------------------\n");

    printf("Size of char: %ld byte\n",sizeof(char));            //char은 1바이트이기 때문에 결과가 1이 나온다.
    printf("Size of int: %ld bytes\n",sizeof(int));             //int은 4바이트이기 때문에 결과가 4이 나온다.
    printf("Size of float: %ld bytes\n",sizeof(float));         //float은 4바이트이기 때문에 결과가 4이 나온다.
    printf("Size of double: %ld bytes\n",sizeof(double));       //double은 8바이트이기 때문에 결과가 8이 나온다.

    printf("-----------------------------------------\n");

    printf("Size of char*: %ld byte\n",sizeof(char*));          //포인터는 4바이트가 필요하다.
    printf("Size of int*: %ld bytes\n",sizeof(int*));           //아래는 모두 포인터기 때문에 4바이트란 결과가 나온다.
    printf("Size of float*: %ld bytes\n",sizeof(float*));
    printf("Size of double*: %ld bytes\n",sizeof(double*));

    printf("\n[-----  [WonJongMin]  [2019038014]  -----] \n");

    return 0;
}