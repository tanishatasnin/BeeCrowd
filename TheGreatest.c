#include <stdio.h>

int main() {
 int a,b,s,maiorAB;
scanf("%d %d %d", &a, &b, &s);
//maiorAB=((a+b)+abs(a-b)/2)
    maiorAB = a;
 if(a < b || a < s){
  if(b < s){
   maiorAB = s;
  }else{
   maiorAB = b;
  }
 }
  printf("%d eh o maior\n", maiorAB);
    return 0;
}
