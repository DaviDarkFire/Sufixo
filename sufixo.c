#include <stdio.h>
int conta_dig(int num){
	int cont = 0;
	while(num != 0){
		num = num/10;		
		cont++;
	}
	return cont;	
}
int sufixo(int a, int b, int qtd_dig){
	int m = 1;
	for(int cont = 1; cont<=qtd_dig; cont++)
		m = m*10;	
	a = a%m;	
	if(a == b){
		return 1;
	}else{
		return 0;
	}
}
int main(void){
	int a, b, qtd_dig;
	scanf("%d", &a);
	scanf("%d", &b);
	qtd_dig = conta_dig(b);
	printf("%d\n", sufixo(a, b, qtd_dig));
	return 0;
}