#include <stdio.h>

int main() {
	int T,X,Y;
	scanf("%d",&T);
	
	while (T--){
	    
	    scanf("%d %d",&X,&Y);
	    
	    int alice = (Y + X)/2;
	    
	    int bob = (Y - X)/2;
	    
	    printf("%d %d\n", alice, bob);
	}
}

