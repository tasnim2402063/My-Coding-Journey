#include <stdio.h>
#include <math.h>

int main() {
	int T, N;
	
	scanf("%d",&T);
	
	while(T--){
	    
	    scanf("%d",&N);
	    
	    int root = sqrt (N);
	    int result = root * root;
	    
	    printf(" %d\n", result);
	}

}

