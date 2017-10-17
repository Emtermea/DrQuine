#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int X = 5;
int main(int ac, char**av)
{
(void)ac;char buf[10];
if (X != 0) {
if ((strcmp(av[0], "./Sully") == 0) || (strcmp(av[0], "../Sully") == 0)) {sprintf(buf, "Sully_%d.c", X);} else {sprintf(buf, "Sully_%d.c", --X);}
FILE *f = fopen(buf, "w");
char*a="#include <string.h>%c#include <stdlib.h>%c#include <stdio.h>%cint X = %d;%cint main(int ac, char**av)%c{%c(void)ac;char buf[10];%cif (X != 0) {%cif ((strcmp(av[0], %c./Sully%c) == 0) || (strcmp(av[0], %c../Sully%c) == 0)) {sprintf(buf, %cSully_%%d.c%c, X);} else {sprintf(buf, %cSully_%%d.c%c, --X);}%cFILE *f = fopen(buf, %cw%c);%cchar*a=%c%s%c;%cchar buf2[12];sprintf(buf2, %cSully_%%d%c, X);%cfprintf(f,a,10,10,10,X,10,10,10,10,10,34,34,34,34,34,34,34,34,10,34,34,10,34,a,34,10,34,34,10,10,34,34,10,10,10,10);%cchar cmd[256];sprintf(cmd, %cclang -Wall -Wextra -Werror %%s -o %%s && ./%%s%c, buf, buf2, buf2);%cfclose(f);system(cmd);}%creturn 0;%c}%c";
char buf2[12];sprintf(buf2, "Sully_%d", X);
fprintf(f,a,10,10,10,X,10,10,10,10,10,34,34,34,34,34,34,34,34,10,34,34,10,34,a,34,10,34,34,10,10,34,34,10,10,10,10);
char cmd[256];sprintf(cmd, "clang -Wall -Wextra -Werror %s -o %s && ./%s", buf, buf2, buf2);
fclose(f);system(cmd);}
return 0;
}
