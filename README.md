# RODA-DA-FORTUNA-JOGO-EM-C
JOGO DA FORTUNA É UM JOGO DE SORTE DESENVOLVIDO EM C PARA TESTAR A SORTE DO JOGADOR. DESEJA TENTAR?
Escreva um programa em linguagem C que adicione um número aleatório com sinal em
complemento de dois a um valor inteiro em 4 bits. Siga as seguintes orientações abaixo:
Nome da variável aleatória: sua_sorte
Faixa da variável aleatória: 1000 <= sua_sorte <= 0111 (em complemento de dois)
Nome da variável de retorno: fortuna_infortunio;
Faixa da variável de retorno: 1000 <= fortuna_infortunio <= 0111
Cálculo da variável de retorno: fortuna_infortunio = fortuna_infortunio + sua_sorte
Nome da função do jogo:
fortuna_infortunio = roda_da_fortuna(fortuna_infortúnio, tentativas);
Forma de jogar
Escreva um mensagem explicando o jogo e suas regras jogo.
<atenção, o formato é livre, mas pressupõe que seja claro para o jogador não ter de que
reclamar. De uma forma geral, o jogo apresenta um valor aleatório inicial que é apresentado
ao jogador. O jogador tem que girar a roda. Caso não goste do resultado tem mais 3 tentativas
para mudar. A primeira é sempre obrigatória. Ele não ficar com o valor inicial>
Atribua o valor inicial da variável fortuna_infortunio ao valor da variável sua_sorte;
Apresente esse valor inicial e pergunte se ele quer (s) jogar ou (d) desistir;
Se for jogar escreva
“Fortuna ou Infortúnio! O que será?”
Crie um laço para que vai de tentativa = 0 até tentativa igual a 3 e faça o seguinte:
Chame a função fortuna_infortunio <= roda_da_fortuna(fortuna_infortúnio, tentativa);
Apresente o resultado ao jogador com da seguinte forma:
 Se for positivo: “Fortuna! fortuna_infortunio”;
 Se for negativo: “Infortúnio! fortuna_infortunio; “
 Apresente o aviso: “Você tem tem <o número de tentativas> tentativas.
 Pergunte pelo teclado o seguinte: (“p de Para ou c de Continua? e registere o valor na
 variável escolha.
 se escolha for igual a p então interrompa o laço “para”;
retorne o valor fortuna_infortunio;
Finalize o jogo.
Essa forma de jogar está escrita como um algoritmo somente para ajudar a uniformizar o
comportamento e os nomes das variáveis, mas você tem toda a liberdade para fazer o seu
próprio programa, desde que tenha o mesmo comportamento.
O programa deverá tratar a soma de forma circular. Ou seja. Na roda da fortuna não tem
overflow. Sempre que extrapolar a capacidade de representação, ela deve prosseguir.
Dica: estude como o complemento de dois se comporta como progressão circula (ver figura na
próxima página), onde o maior valor negativo, se decrementado de um é igual ao maior valor
positivo. Semelhantemente o maior valor positivo se incrementado de um é igual ao maior
valor negativo. Com isso, os valores extremos são também vizinhos.
Atenção! A única função específica do C que é permitido utilizar é a função que gera números
aleatórios.
Será dado um ponto extra para as equipes que conseguiram implementar usando menos
memória. Dica: use a função que informa o tamanho do tipo da variável.
