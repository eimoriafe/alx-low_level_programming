#include <stdio.h>
#define SIZE 5
// Function main begins execution
int main (void){

int n[SIZE] = {1, 2, 3, 4, 5};

for (size_t i = 0; i < SIZE; ++i){
printf("%zu %d %s", i, n[i], "");
}

for (int j = 1; j <= n[i]; ++j){
printf("%c", '*');
}

puts("");
}
