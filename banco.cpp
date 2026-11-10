#include<stdio.h>

int senha;
float saldo = 500;
int opcao;
float dep;
float saque;
float maiorDep = 0;

int main(){
	
	do{
		printf("\nDigite sua senha: ");
		scanf("%d", &senha);
		if(senha != 1346){
			printf("\nSenha incorret");
		} else {
			printf("\nSenha correta. Seja bem vindo!!");
		}
	} while (senha != 1346);
	
	do{
		printf("\n\n===== Banco =====");
		printf("\nEscolha uma opcao");
		printf("\n1 - Depositar");
		printf("\n2 - Sacar");
		printf("\n3 - Consultar Saldo e Estatistica");
		printf("\n0 - Sair");
		
		printf("\n\nDigite a opcao: ");
		scanf("%d", &opcao);
		
		if(opcao > 3){
			printf("\nOpcao invalida, tente outra");
		} else if(opcao == 3){
			printf("\nSaldo atual: %.2f", saldo);
			printf("\nO maior deposito feito ate agora foi de: %.2f", maiorDep);
		} else if(opcao == 2){
			printf("\nDigite sua senha para sacar: ");
			scanf("%d", &senha);
			if(senha == 1346){
				printf("\nQuanto deseja sacar: ");
				scanf("%f", &saque);
				if(saque > saldo){
					printf("\nSaldo Insuficiente");
				} else {
					saldo = saldo - saque;
					printf("\nSaque realizado com sucesso");
				}
			} else {
				printf("\nSenha incorreta! Operacao cancelada");
			}
		} else if(opcao == 1){
			printf("\nQuanto quer depositar: ");
			scanf("%f", &dep);
			if(dep <= 0){
				printf("\nValor invalido");
			} else {
				saldo = saldo + dep;
				printf("\nDeposito de %.2f feito", dep);
				if(dep > maiorDep){
					maiorDep = dep;
				}
			}
		} else if(opcao == 0){
			printf("\nObrigado por usar nosso banco!");
		} 
	}while (opcao != 0);
		
	return 0;
}
