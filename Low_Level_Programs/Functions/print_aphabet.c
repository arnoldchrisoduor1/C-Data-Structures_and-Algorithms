#include <stdio.h>

int main(){
int count = 0;
while(count < 10 ){
for(int x = 'a'; x< 'z';x++){
	putchar(x);
}
count++;
putchar('\n');
}
}
