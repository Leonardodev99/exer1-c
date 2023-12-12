#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void ascendingOrder(int num[], int n){
	int temp, i, j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n;j++){
			if(num[i]>num[j]){
				temp = num[i];
				num[i] = num[j];
				num[j]= temp;
				
			}
		}
	}
}

int main(int argc, char *argv[]) {
	int n,i;
	int num[n];
	
	printf("Insira o numero de elementos a serem armazenados no array: ");
	scanf("%d",&n);
	
	printf("Insira %d numeros de elementos na matriz:\n",n);
	for(i=0; i< n;i++){
		printf("elemento - %d: ",i);
		scanf("%d",&num[i]);
	}
	
	ascendingOrder( num, n);
	
	printf("Elementos da matriz em ordem crescente: \n");
	
   for (i = 0; i < n; i++){
   	printf(" %d", num[i]);
   	
   }
      

	printf("\n");	
			
	
	system("pause");
	
	return 0;
}

