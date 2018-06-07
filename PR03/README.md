# PR03 - Prova 03 (Projeto: Sapo++)
## Aluno
Abmael Dantas Gomes

## Como compilar o projeto
  $ make

## Como executar o projeto
  $ ./bin/Sapo++

## Especificação do projeto

1. Leitura de informações para instanciar objetos da classe Sapo em arquivo está em Arquivo.cpp (linha 41) em readSapos();
2. Leitura de informações para instanciar objetos da classe Pista em arquivo está em Arquivo.cpp (linha 4) em readPistas();

3. A interface está em Interface.hpp / Interface.cpp, tendo o menu e alguns fragmentos da interface que foram portados para estes arquivos;
3. a) Ver_Sapos() em Main.cpp (linha 14);
3. b) Ver_Pistas() em Main.cpp (34);
3. c) A função para de fato iniciar a corrida está definida em Corrida.cpp (linha 90), porém algumas configurações (como quais sapos irão competir nessa corrida ou qual pista será corrida) são feitas em Main.cpp (linha 99);
3. d) A ciração de sapos é iniciada em Main.cpp (linha 67) onde é chamado o construtor da classe (Sapo.cpp [linha 29]) para instanciar um objeto;
3. e) A ciração de pistas é iniciada em Main.cpp (linha 76) onde é chamado o construtor da classe (Pista.cpp [linha 11]) para instanciar um objeto;

4. a) As configurações (como quais sapos irão competir nessa corrida ou qual pista será corrida) são feitas em Main.cpp (linha 99);
4. b) Os sapos que irão competir são mostrados numa tela limpa que inicia com o nome da corrida em Main.cpp (linha 183);
4. c) O programa aguarda a interação do usuário para começar a corrida;

5. a) A mecaninca de "turnos" está definida em Corrida.cpp (linha 90) e permite que cada sapo pule somente uma vez e cada pulo é sucedido pelo pulo do próximo sapo. A cada pulo é impresso na tela qual sapo pulou, quantos metros o pulo teve, a nova posição do sapo e a quantidade de pulos naquela corrida que o sapo já deu;
5. b) A verificação de quais sapos já cruzaram a linha de chegada da corrida é feita em Corrida.cpp (linha 102), fazendo assim com que os sapos que já terminaram a corrida não pulem nem imprimam mais informações na tela; 
5. c) A condição em Corrida.cpp (linha 118) atualiza caso o sapo da vez tenha chegado ao fim da corrida um contador que indicará se todos os competidores já chegaram ao término da corrida. Liberando a continuação da execução do programa que mostra o Rank dos sapos em ordem de chegada fornecendo informações como sua última posição e o número de pulos.

6. A escrita do arquivo é feita logo após a criação de qualquer sapo ou pista (Main.cpp [linha 68 e linha 77]) e ao término de quaquer corrida Main.cpp (linha 191) com chamadas das funções "writeSapos" e "writePistas" definidas em Arquivo.cpp (linha 104 e linha 78, respectivamente). 

Os arquivos do doxygen estão em /docs/html.

### [Link para o projeto no Github no meu repositório da disciplina](https://github.com/abmaeld/LPI/tree/master/PR03)