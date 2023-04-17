#include <stdio.h>
int main(void){
int a[5] =  {4, 5, 6, 8};
printf("%s%8s\n", "Element", "Value" );
for (size_t i = 0; i < 5; i++){
	printf("%zu%8d\n", i, a[i]);
}
return (0);
}
