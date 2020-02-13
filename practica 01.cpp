#include<stdio.h>
#include<stdlib.h>
      int main(){
      	float a,b,c;
      	int opt;
      	printf("1=suma\n2=resta\n3=multiplicacion\n4=division");
      	printf("Seleccione una opcion");
      	scanf("%d",&opt);
      	printf("Ingrese el primer operador:  ");
      	scanf("%f",&a);
      	printf("Ingrese el segundo operador:  ");
      	scanf("%f",&b);
      	if(opt==1){
      		c=a+b;
		  }
	    else if(opt==2){
	    	c=a-b;
		}
		else if (opt==3){
			c=a*b;
		}
		else if(opt==4){
			while(b==0){
				printf("ERROR, b debe ser distinto de cero\n");
				printf("introduce el segundo operador:   ");
				scanf("%f",&b);
			}
			c=a/b ;
		}
      	else{
      		printf("obcion invalida");
			  c=0;
			
			  }
      		printf("el resultado es %f", c);	
			  	  }
	
