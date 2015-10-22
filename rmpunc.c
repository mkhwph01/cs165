#include <stdio.h>
int main(int argc, char* argv[]) {

/*char c; 

c = getchar(); 

while (c != EOF) { 

if (!ispunc(c)) 

printf("%c",c); 

c=getchar(); 

}
*/


char c; 

c=getchar();

while ((c=getchar()) != EOF) { 

if (!ispunc(c)) 

printf("%c",c); 

c=getchar();

} 

return 0;

}
