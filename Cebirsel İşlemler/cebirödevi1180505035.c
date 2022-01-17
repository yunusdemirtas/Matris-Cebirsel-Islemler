#include <stdio.h>
#include <stdlib.h>

matrisolusturma(a,b,c,d,e,f,g,h,k){
    
	printf ("\n\n");
	printf(" [%d  %d  %d]\n",a,b,c);
	printf(" [%d  %d  %d]\n",d,e,f);
	printf(" [%d  %d  %d]\n",g,h,k);
	printf("\n\n\n\n");
}

matrisolusturma2(l,m,n,o,p,r,s,t,u){
    
	printf ("\n\n");
	printf(" [%d  %d  %d]\n",l,m,n);
	printf(" [%d  %d  %d]\n",o,p,r);
	printf(" [%d  %d  %d]\n",s,t,u);
	
}

matristoplama(a,b,c,d,e,f,g,h,k,l,m,n,o,p,r,s,t,u){
    printf ("\n\n\n MATRIS TOPLAMI\n\n");
	printf(" [%d  %d  %d]\n",a+l,b+m,c+n);
	printf(" [%d  %d  %d]\n",d+o,e+p,f+r);
	printf(" [%d  %d  %d]\n",g+s,h+t,k+u);
	
}

matriscikarma1(a,b,c,d,e,f,g,h,k,l,m,n,o,p,r,s,t,u){
    printf ("\n\n\n MATRIS CIKARIMI\n\n");
	printf(" [%d  %d  %d]\n",a-l,b-m,c-n);
	printf(" [%d  %d  %d]\n",d-o,e-p,f-r);
	printf(" [%d  %d  %d]\n",g-s,h-t,k-u);
	
}
matriscikarma2(a,b,c,d,e,f,g,h,k,l,m,n,o,p,r,s,t,u){
    printf ("\n\n\n MATRIS CIKARIMI\n\n");
	printf(" [%d  %d  %d]\n",l-a,m-b,n-c);
	printf(" [%d  %d  %d]\n",o-d,p-e,r-f);
	printf(" [%d  %d  %d]\n",s-g,t-h,u-k);
	
}
matriscarpma(a,b,c,d,e,f,g,h,k,l,m,n,o,p,r,s,t,u){
	printf ("\n\n\n MATRIS CARPIMI\n\n");
	printf(" [%d  %d  %d]\n",a*l+b*o+c*s,a*m+b*p+c*t,a*n+b*r+c*u);
	printf(" [%d  %d  %d]\n",d*l+e*o+f*s,d*m+e*p+f*t,d*n+e*r+f*u);
	printf(" [%d  %d  %d]\n",g*l+h*o+k*s,g*m+h*p+k*t,g*n+h*r+k*u);
}
matrissabitsayicarp(a,b,c,d,e,f,g,h,k,l,m,n,o,p,r,s,t,u,sabit){
	printf ("\n\n\n MATRIS SABIT CARPIMI\n\n");
	printf(" [%d  %d  %d]\n",a*sabit,b*sabit,c*sabit);
	printf(" [%d  %d  %d]\n",d*sabit,e*sabit,f*sabit);
	printf(" [%d  %d  %d]\n",g*sabit,h*sabit,k*sabit);
}

matrisdeterminant1(a,b,c,d,e,f,g,h,k){
	printf ("\n\n\n 1.MATRIS DETERMINANTI\n\n");
	printf("   %d  \n",(a*e*k+d*h*c+g*b*f)-(c*e*g+f*h*a+k*b*d));
}

matrisdeterminant2(l,m,n,o,p,r,s,t,u){
	printf ("\n\n\n 2.MATRIS DETERMINANTI\n\n");
	printf("   %d  \n",(l*p*u+o*t*n+s*m*r)-(n*p*s+r*t*l+u*m*o));
}

matrisinvolutif1(a,b,c,d,e,f,g,h,k){
	printf ("\n\n\n 1.MATRIS INVOLUTIF MI\n\n");
	if (a*a+b*d+c*g==1&a*b+b*e+c*h==0&a*c+b*f+c*k==0&d*a+e*d+f*g==0&d*b+e*e+f*h==1&d*c+e*f+f*k==0&g*a+h*d+k*g==0&g*b+h*e+k*h==0&g*c+h*f+k*k==1)
	printf(" 1.MATRIS INVOLUTIFTIR");
	else {
	printf(" 1.MATRIS INVOLUTIF DEGILDIR");
	}
}

matrisinvolutif2(l,m,n,o,p,r,s,t,u){
	printf ("\n\n\n 2.MATRIS INVOLUTIF MI\n\n");
	if (l*l+m*o+n*s==1&l*m+m*p+n*t==0&l*n+m*r+n*u==0&o*l+p*o+r*s==0&o*m+p*p+r*t==1&o*n+p*r+r*u==0&s*l+t*o+u*s==0&s*m+t*p+u*t==0&s*n+t*r+u*u==1)
	printf(" 2.MATRIS INVOLUTIFTIR");
	else {
	printf(" 2.MATRIS INVOLUTIF DEGILDIR");
	}
}



main (){
	int cikarmasecim;
	int sabit;
	int a,b,c,d,e,f,g,h,k;
	printf (" 1.MATRIS\n\n");
	printf(" 1.satir 1.sutun ");
	scanf ("%d",&a);
	printf(" 1.satir 2.sutun ");
	scanf ("%d",&b);
	printf(" 1.satir 3.sutun ");
	scanf ("%d",&c);
	printf(" 2.satir 1.sutun ");
	scanf ("%d",&d);
	printf(" 2.satir 2.sutun ");
	scanf ("%d",&e);
	printf(" 2.satir 3.sutun ");
	scanf ("%d",&f);
	printf(" 3.satir 1.sutun ");
	scanf ("%d",&g);
	printf(" 3.satir 2.sutun ");
	scanf ("%d",&h);
	printf(" 3.satir 3.sutun ");
	scanf ("%d",&k);
	matrisolusturma(a,b,c,d,e,f,g,h,k);
	
	int l,m,n,o,p,r,s,t,u;
	printf (" 2.MATRIS\n\n");
	printf(" 1.satir 1.sutun ");
	scanf ("%d",&l);
	printf(" 1.satir 2.sutun ");
	scanf ("%d",&m);
	printf(" 1.satir 3.sutun ");
	scanf ("%d",&n);
	printf(" 2.satir 1.sutun ");
	scanf ("%d",&o);
	printf(" 2.satir 2.sutun ");
	scanf ("%d",&p);
	printf(" 2.satir 3.sutun ");
	scanf ("%d",&r);
	printf(" 3.satir 1.sutun ");
	scanf ("%d",&s);
	printf(" 3.satir 2.sutun ");
	scanf ("%d",&t);
	printf(" 3.satir 3.sutun ");
	scanf ("%d",&u);
	matrisolusturma2(l,m,n,o,p,r,s,t,u);
	matristoplama(a,b,c,d,e,f,g,h,k,l,m,n,o,p,r,s,t,u);
	printf ("\n\n\n1.matrisden 2.matrisi cikaricaksaniz 1 e basin");
	printf ("\n2.matrisden 1.matrisi cikaricaksaniz 2 ye basin\n");
	scanf ("%d",&cikarmasecim);
	if (cikarmasecim==1)
		matriscikarma1(a,b,c,d,e,f,g,h,k,l,m,n,o,p,r,s,t,u);
	
		else {
		
			matriscikarma2(a,b,c,d,e,f,g,h,k,l,m,n,o,p,r,s,t,u);
	}
	matriscarpma(a,b,c,d,e,f,g,h,k,l,m,n,o,p,r,s,t,u);
	printf("\n\n\n Carpmak istediginiz sabit sayiyi girermisiniz lutfen ");
	scanf("%d",&sabit);
	matrissabitsayicarp(a,b,c,d,e,f,g,h,k,l,m,n,o,p,r,s,t,u,sabit);
	matrisdeterminant1(a,b,c,d,e,f,g,h,k);
	matrisdeterminant2(l,m,n,o,p,r,s,t,u);
	matrisinvolutif1(a,b,c,d,e,f,g,h,k);
	matrisinvolutif2(l,m,n,o,p,r,s,t,u);

}
