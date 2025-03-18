#include<stdio.h>
 void fibo(int a){
     int first=0;
     int second=1;
     int next;
     for (int i=1;i<=a;i++){
         next=first;
         first=second;
                  second=next+first;
         printf("%d ",next);
     }
    }
    int main(){
        int c;
        scanf("%d",&c);
        fibo(c);
   }