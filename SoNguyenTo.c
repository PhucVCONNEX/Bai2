#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


bool ngTo(int n) {
	if(n < 2) {
		return false;
	}
	int i;
	for(i = 2; i <= (n/2); i++) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}

int main(int argc, char *argv[]) {
    if (argc !=3) {
        printf("Usage: %s <number>\\n", argv[0]);
        return 1;
    }
    int a = atoi (argv[1]);
    int b = atoi (argv[2]);
	if(1 <= a && a <= b && b <= 10000000000) {
		int i;
		for(i = a; i <= b; i++) {
			if(ngTo(i)) {
				printf("%10d", i);
			}
		}
	} else {
		printf("Ban da nhap sai gia tri a b");
	}
	 
	return 0;
}
