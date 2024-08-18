#include <stdio.h>
int main() {
int base,power,i,result=1;
printf("Enter base : ");
scanf("%d",&base);
printf("Enter power : ");
scanf("%d",&power);
if(power==0){
printf("%d^%d = 1",base,power);
}
else{
while(i<power){
result*=base;
i++;
}
printf("result = %d",result);
}
return 0;
}
