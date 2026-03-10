#include <stdio.h>

int main() {
    int T,H,L,W;
    scanf("%d",&T);
    
    while (T--){
        
        scanf("%d %d %d",&H,&L,&W);
        
        int area = 2 * (H * L + L * W + W * H);
        int max_gifts = 1000 / area;
        
        printf("%d\n",  max_gifts );
    }
  

}

