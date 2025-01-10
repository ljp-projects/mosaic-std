#include <stdio.h>

void _debug_assert_nptr(void* n) {
	if (n == NULL) {
		printf("Equal to nullptr");
	} else {
		printf("not equal to nullptr");
	}
}
