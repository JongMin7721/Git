#include <stdio.h>

int main()
{
    int i;
    int *ptr;
    int **dptr;

    i = 1234;

    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);            //i에 1234란 값이 들어있다.
    printf("address of i == %p\n", &i);         //i의 주소가 들어있다.
    printf("value of ptr == %p\n", ptr);        //ptr는 아직 입력을 안했기 때문에 쓰레기값 출력
    printf("address of ptr == %p\n", &ptr);     //ptr의 주소가 들어있다.


    ptr = &i; /* ptr is now holding the address of i */ //ptr에 i의 주소를 입력.

    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);                    //i의 값인 1234 출력.
    printf("address of i == %p\n", &i);                 //i의 주소 출력.
    printf("value of ptr == %p\n", ptr);                //ptr에 입력했던 i의 주소 출력.
    printf("address of ptr == %p\n", &ptr);             //ptr의 주소 출력.
    printf("value of *ptr == %d\n", *ptr);              //*ptr은 ptr가 가르키는 값인 i를 출력.

    dptr = &ptr; /* dptr is now holding the address of ptr */       //dptr에 ptr의 주소를 입력.

    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);                    //i의 값 출력.
    printf("address of i == %p\n", &i);                 //i의 주소 출력.
    printf("value of ptr == %p\n", ptr);                //ptr에 입력했던 i의 주소 출력.
    printf("address of ptr == %p\n", &ptr);             //ptr의 주소 출력.
    printf("value of *ptr == %d\n", *ptr);              //*ptr은 ptr가 가르키는 값인 i를 출력.
    printf("value of dptr == %p\n", dptr);              //dptr에 입력했던 ptr의 주소 출력.
    printf("address of ptr == %p\n", &dptr);            //dptr의 주소를 출력.
    printf("value of *dptr == %p\n", *dptr);            //*dptr은 dptr가 가르키는 ptr의 값, 즉 i의 주소 출력.
    printf("value of **dptr == %d\n", **dptr);          //**dptr은 dptr가 가르키는 ptr로 이동 후 다시 ptr가 가르키는 값인 i를 출력.

    *ptr = 7777; /* changing the value of *ptr */       //*ptr에 7777을 입력했으므로 *ptr이 가르키는 i의 값에 7777을 입력.

    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);                    //방금 위의 설명으로 i의 값은 7777이 된다.
    printf("value of *ptr == %d\n", *ptr);              //*ptr가 가르키는 값 i의 값인 7777이 출력됨.
    printf("value of **dptr == %d\n", **dptr);          //**dptr이 가르키는값인 *ptr을 출력, *ptr은 i의 값이므로 7777을 출력.

    **dptr = 8888; /* changing the value of **dptr */   //**dptr에 8888을 입력. **dptr은 *ptr을 가르키고 *ptr은 i를 가르키므로 I에 8888입력.

    printf("\n[after **dptr = 8888] \n");               
    printf("value of i == %d\n", i);                    //i에 입력한 8888출력.
    printf("value of *ptr == %d\n", *ptr);              //*ptr은 i를 가르키므로 8888출력.
    printf("value of **dptr == %d\n", **dptr);          //**dptr은 *ptr을, *ptr은 i를 가르키므로 8888출력.

    printf("\n[-----  [WonJongMin]  [2019038014]  -----] \n");
    
    return 0;
}