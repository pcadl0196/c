#include <stdio.h>
//소수 프로그램
int main() {
    //우리가 소수인지 판별하고 있는 수
    int guess  = 5; //소수의 배열
    int prime[1000]; //현재까지 찾은 (소수의 개수 - 1) 
    //아래 두개의 소수를 미리 찾았으므로 초기값은 1이됨 (prime[0], prime[1])
    int index = 1; //for문 변수
    int i; //소수인지 판별을 위해 쓰이는 변수
    int ok; //처음 두 소수는 특별한 경우로 친다
    prime[0] = 2;
    prime[1] = 3;
    for(;;){
        //소수인지 아닌지 하나씩 점검할때마다 ok값은 0으로 초기화를 해줘야함
        ok = 0;
        //guess이하의 모든 소수들로 나누어보는 작업
        for(i = 0; i <= index; i++){
            if(guess % prime[i] != 0){
                ok++;
            }else{
                break;
            }
        }
        if(ok == (index +1)){
            index ++;
            prime[index] = guess;
            printf("소수 : %d \n", prime[index]);
            if(index == 999)break;
        }
        guess += 2;
    }
    return 0;
}