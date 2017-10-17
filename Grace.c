#include <stdio.h>
/*
 yolo
*/

#define CHAR "#include <stdio.h>%c/*%c yolo%c*/%c%c#define CHAR %c%s%c%c#define WRITE() FILE *f=fopen(%cGrace_kid.c%c, %cw%c);fprintf(f,CHAR,10,10,10,10,10,34,CHAR,34,10,34,34,34,34,10,10,10,34,34,10);fclose(f);%c#define FT(x) int main(){WRITE();return 0;}%c%cFT(%c%c)%c"
#define WRITE() FILE *f=fopen("Grace_kid.c", "w");fprintf(f,CHAR,10,10,10,10,10,34,CHAR,34,10,34,34,34,34,10,10,10,34,34,10);fclose(f);
#define FT(x) int main(){WRITE();return 0;}

FT("")
