int main(int argc, char* argv[]) {

/* char c; 

c = getchar(); 

while (c != EOF) { 

if (!ispunc(c)) 

printf("%c",c); 

c=getchar(); 

}

*/ 

char c; 

while ((c=getchar()) != EOF) { 

if (!ispunc(c)) 

printf("%c",c); 

} 

return 0;

}
