#include <stdio.h>
#include <conio.h>
#include <math.h>

char Akif(char a){
 
scanf("%c",&a);
 
return a;
}
 
int main(){
int b,c,d,e;
char a;
char i;
i=Akif(a);
printf("Enter two numbers\n");
scanf("%d",&b);
scanf("%d",&c);
 
if(i=='+'){
 
d=b+c;
 
printf("%d",d);
 }
 
else if(i=='-'){ d=b-c;
 
printf("%d",d);
 
}
 
else if(i=='*'){ d=b*c;
 
printf("%d",d);
 
}
else if(i=='/'){ d=b/c;
 
printf("%d",d);
 
} 
getch ();
 
return 0;
 
}
