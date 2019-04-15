#include<cstdio>

int main(){
    int n, cont = 0;
    scanf("%d", &n);

    while(n>=100){n=n-100; cont++;}
    while(n>=50){n=n-50; cont++;}
    while(n>=25){n=n-25; cont++;}
    while(n>=10){n=n-10; cont++;}
    while(n>=5){n=n-5; cont++;}
    while(n>=1){n=n-1; cont++;}

    printf("%d\n", cont);

    return 0;
}
