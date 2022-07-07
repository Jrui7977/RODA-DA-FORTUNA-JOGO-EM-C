#include <conio.h>
#include<string.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include<stdio.h>
#include<time.h>//necessário p/ função time()
#include<locale.h>

//transforma para binario

long long binario(int valor_decimal)
{
    long long valor_binario = 0;
    int resto, sequencial = 1;
 
    //Enquanto o valor decimal for diferente de zero
    while (valor_decimal != 0)
    {
        //Pega o resto da divisão
        resto = valor_decimal % 2;
         
        //Divide o valor decimal por 2
        valor_decimal /= 2;
         
        //Incrementa o valor binário, multiplicando o resto da divisão pelo sequencial
        valor_binario += resto * sequencial;
         
        //Multiplica o sequencial por 10
        sequencial *= 10;
    }
     
    return valor_binario;
}
// transforma para decimal
int binarioDecimal(int n){
    if(n<2){
        return n;
    }
    else{
        return 2*binarioDecimal(n/10)+n%10;
    }
}
//função do jogo roda da fortuna
int roda_da_fortuna(fortuna_infortunio, tentativas){
	// converte o fortuna_infortunio para binário
	fortuna_infortunio = binario(fortuna_infortunio);
	//printf("\nValor em Binário : %d\n\n",fortuna_infortunio); mostra o correspondente do numero em binario;
	//se a conversão realizada para binário for maior que "1000"(1000 = 8) converte para decimal
	if(fortuna_infortunio>=1000){
	// os valores representados na imagem do relógio vão até o valor decimal 15, a partir do -8 todos os numeros são ordenados
	// de forma crescente, a formula dada é = n - 8 e n = n-8
	fortuna_infortunio = binarioDecimal(fortuna_infortunio);
	fortuna_infortunio = fortuna_infortunio - 8;
	fortuna_infortunio = fortuna_infortunio - 8;
	}else{
		// por outro lado, se o numero nao for superior ou igual a 1000, o fortuna infortunio binário é convertido para decimal
		fortuna_infortunio = binarioDecimal(fortuna_infortunio) ;
	}
	// se o valor decimal for inferior a zero é retornadon na tela o infortunio
	if(fortuna_infortunio<0){
	printf("\nInfortunio!! \n\nO numero foi : %d\nVocê tem [%d] tentativas\n\n",fortuna_infortunio,tentativas-1);
	//senao retorna Fortunio
	}else{
		printf("\nFortuna!!\n\nO numero foi : %d\nVocê tem [%d] tentativas\n\n",fortuna_infortunio,tentativas-1);
		}
}

int main(){
	// biblioteca local utilizada para setar a linguagem de programa para Portugues Brasileiro
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));//gerar numeros aleatorios a patir de uma semente, nesse caso (time(null)
	//inicializo a variavel tentativas;
	int tentativas,tamanho,fortuna_infortunio,aux;
	char escolha;
	// gera o numero aleatorio apenas para inicializar a variavel
	int sua_sorte = rand()%15;
	// inicia o laço de repetição começando com 3 tentativas
	printf(" \n\t\tREGRAS DO JOGO : \n");
	printf(" \n\t\tVocê tem [3] tentativas para girar a roda\n ");
	printf(" \n\t\tSe o valor adquirido após girar for positivo o seu resultado será Fortuna senão, Infortúnio\n");
	printf(" \n\t\tSe quiser parar em algum momento do jogo\n\n\t\tpressione a tecla 'p' ou 'P' quando sugerido ou 'c' para continuar\n");
	printf(" \n\t\tBoa sorte!\n");
	for(tentativas = 3; tentativas!=0;tentativas--){
	printf("\n\t\t\t\t FORTUNA OU INFORTÚNIO! O que será?\n");
	printf("\n\n\nC para continuar e P para Parar : \n");
	scanf("%s",&escolha);
	//condição de parada caso o usuario digite P ou p de "para"
	if(escolha == 'p' || escolha == 'P'){
		break;
	}
	// gera valores aleatórios a partir de um valor de temp
	// variavel aloca o valor aleatório em decimal
	fortuna_infortunio = rand()%15;
	//chamada da função com os parametros tentativas(é decrementado) e fortuna_infortunio(decimal) para depois ser convertido
	//em binário.
	aux = fortuna_infortunio+sua_sorte;//é realizada a soma dos valores aleatórios
	if(aux>15){//maior que 15 pois seriam numeros de 5 bits
	aux = binario(aux>>1);//verificar o numero deslocado em binário
	fortuna_infortunio = binarioDecimal(aux);
	}else{
		fortuna_infortunio = aux;//senão o valor pode ser representado em 4bits
	}	
	fortuna_infortunio = roda_da_fortuna(fortuna_infortunio,tentativas);
		}
	}
