#include<stdio.h>
#include<limits.h>
int main(){
      int givenNumber, fiD, seD;
      scanf("%d",&givenNumber);
      fiD=givenNumber/10;
      seD=givenNumber%10;
      if(fiD%seD==0 || seD%fiD==0){
        printf("Yes");
      }else{
        printf("No");
      }
    return 0;
}