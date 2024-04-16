#include<stdio.h>
#include<limits.h>
int main(){
    //z=122, a=97
      char c;
      scanf("%c",&c);
      int charValue=c;
      char nextCharValue=charValue+1;
      char nextAlphabet=nextCharValue;
      if(charValue==122){
        nextAlphabet='a';
      }
      printf("%c",nextAlphabet);
    return 0;
}