#include<stdio.h>
#include<conio.h>
#include<math.h>
  double  luythua2(unsigned int n){
  double  s=1;
	for(int i=1;i<=n;i++){
	s*=2;
	}
	return s;		
}

 double  giaithua(unsigned int n){
 double   g=1;
	for(int i=1;i<=n;i++){
	g*=i;
	}
	return g;		
}
 float  tich(unsigned int n){
  float  t=1;
	for(int i=1;i<=n;i++){
	t=t*(1+1/(pow(i,2)));
	}
	return t;		
}
double can(unsigned int n){
	double a=0;
	for(int i=1;i<=n;i++) a=sqrt(2+a);
	return a;
}
int main(){
	unsigned int n;
	scanf("%d",&n);
	printf("%.0lf\n %.0lf\n %.4f\n %.3lf",luythua2(n),giaithua(n),tich(n),can(n));
	
	getch();
}