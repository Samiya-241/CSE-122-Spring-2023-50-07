#include<stdio.h>

void divisors(int x){
    int i;
    for(i=1;i<=x;i++){
    if(x%i==0){
        printf("%d\n",i);
    }
  }
}

int main()
{
  divisors(15);
}
