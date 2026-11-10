#include <stdio.h>

int main(void)
{
    long n,c,a=0;
    scanf("%ld", &n);
    if(n<0) printf("NG");
    else{
        for(c=1;c<=n;c++)a=a+c;
        printf("%ld",a);
    }
    /* TODO: n が負なら NG、そうでなければ 1+2+...+n を for 文で計算して表示 */
    return 0;
}
