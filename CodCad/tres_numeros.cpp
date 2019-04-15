#include<cstdio>

int main(void)
{
    double a[5], soma=0;

    for(int i = 0; i<5; i++)scanf("%lf", &a[i]);

    for(int i=0; i<5; i++){
        for(int j=i; j<5; j++){
            if(a[i]>a[j]){
                a[i]-=a[j];
                a[j]+=a[i];
                a[i]=a[j]-a[i];
            }
        }
    }

    for(int i=1; i<4; i++)soma+=a[i];

    printf("%.1lf\n", soma);

    return 0;
}
