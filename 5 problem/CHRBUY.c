#include <stdio.h>

int main() {
	
 int T,W,P,K;
 scanf("%d",&T);
 
 while(T--){
     
     scanf("%d %d %d",&W,&P,&K);
     
     int total_stylishness = 0;
     
     if( K <= W){
         
         total_stylishness = K * 2;
         
     } else{ 
         
         total_stylishness = (W * 2) + ( K - W);
         
 }
    printf("%d\n", total_stylishness);
 
}

}