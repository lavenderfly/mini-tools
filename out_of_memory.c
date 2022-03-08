#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
int main(int argc, char** argv){
int* a;
char b[100];
sprintf(b,"echo -1000 > /proc/%d/oom_score_adj",getpid());
puts(b);
system(b);
int c=100;
if(argc == 2){
sscanf(argv[1],"%d", &c);
}
printf("item size: %d\n", c);
while(1){
a= (int*)malloc(c*4);
if(a==NULL)
        break;
int i;
for(i=0;i<c;++i){
a[i]=i;
}
}
puts("NULL error");
while(1);
}
