/*
 outside main
*/
#include <stdio.h>
void caca(){}
int main()
{
/*
 inside main
*/
char*a="/*%c outside main%c*/%c#include <stdio.h>%cvoid caca(){}%cint main()%c{%c/*%c inside main%c*/%cchar*a=%c%s%c;%ccaca();%cprintf(a,10,10,10,10,10,10,10,10,10,10,34,a,34,10,10,10,10,10);%creturn 0;%c}%c";
caca();
printf(a,10,10,10,10,10,10,10,10,10,10,34,a,34,10,10,10,10,10);
return 0;
}
