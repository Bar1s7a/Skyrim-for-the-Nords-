#include<stdio.h>

int main(){
int x, i, y=0, t = 1, s = 1;
scanf("%d", &x);
    while ( x > 0 ){
		y = y + x%10*t;
		t *=2;
		x= x / 10;
}
printf("%d", y);
system ("pause");
return 0;
}
