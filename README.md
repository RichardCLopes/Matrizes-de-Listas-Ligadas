# Matrizes-de-Listas-Ligadas

## Descrição do Projeto 
É um programa para manipulação de matrizes de números reais que permite ao usuário: 
  1. Declarar uma matriz: fornecendo seu nome e dimensões desejadas.
  2. Destruir uma matriz: fornecendo seu nome. 
  3. Imprimir uma matriz: fornecendo seu nome. 
  4. Atribuir um elemento a uma matriz: fornecendo o nome da matriz, as coordenadas e o valor. 
  5. Atribuir uma linha a uma matriz: fornecendo o nome da matriz, o índice da linha e a sequência de elementos.
  6. Atribuir uma coluna a uma matriz: fornecendo o nome da matriz, o índice da coluna e a sequência de elementos.
  7. Transpor uma matriz: fornecendo seu nome e o nome da matriz resultante (não precisa estar declarada).
  8. Somar duas matrizes: fornecendo seus nomes e o nome de uma terceira matriz que deverá conter o resultado (não deve estar declarada). As 2 matrizes devem conter as mesmas dimensões.
  9. Dividir uma matriz por outra (elemento a elemento): fornecendo seus nomes e o nome de uma terceira matriz que deverá conter o resultado (não deve estar declarada). As 2 matrizes devem conter as mesmas dimensões e a matriz que será o denominador da divisão não deve conter nenhum elemento igual a 0.
  10. Multiplicar uma matriz por outra: fornecendo seus nomes e o nome de uma terceira matriz que deverá conter o resultado (não deve estar declarada). Sendo A<sub>m1xn1</sub> e B<sub>m2xn2</sub> as matrizes de entrada e AxB a operação desejada, n1 deve ser igual a m2.
  11. Multiplicar duas matrizes (elemento a elemento): fornecendo seus nomes e o nome de uma terceira matriz que deverá conter o resultado (não deve estar declarada). As 2 matrizes devem conter as mesmas dimensões. 
<br>

Para exercer essas funções, o sistema mantêm uma lista ligada de matrizes onde cada nó contêm o nome da matriz, um ponteiro para a
matriz alocada dinamicamente (com as dimensões especificadas pelo usuário) e um ponteiro para o próximo nó. Os nós desta lista ligada são alocados
conforme a necessidade, ou seja, quando o usuário quer criar uma matriz ou chamar uma operação que resulte em uma matriz. A Figura 1 ilustra esta abordagem:
<br><br>
<img style="width: 50%" align="center" src="figura1.png"/>
<br><br>
Quando o usuário optar por descartar uma matriz, esta é liberada da memória, assim como seu nó é liberado da lista ligada. Dois TAD's
(Tipos Abstratos de Dados) são implementados, um para a lista ligada e um para as matrizes. 
<br>

## Comandos e saídas
As funcionalidades do ambiente são requisitadas por meio de comandos seguidos dos dados necessários. Os comandos são representados por duas
letras maiúsculas. Os comandos que o sistema deve reconhecer são especificados a seguir. O símbolo // denota um comentário e portanto não faz
parte da saída ou dos comandos. 

### Criar matriz 
<table>
  <tr>
    <td>Comando</td>
    <td>CM &ltnome sem espaços&gt &ltnúmero de linhas&gt &ltnúmero de colunas&gt </td>
  </tr>
  <tr>
    <td>Saída</td>
    <td>OK //Em caso de sucesso <br>ERRO //Caso a matriz já exista ou alguma das dimensões não esteja entre 1 e 50</td>
  </tr>
</table>

### Destruir matriz  
<table>
  <tr>
    <td>Comando</td>
    <td>DM &ltnome&gt </td>
  </tr>
  <tr>
    <td>Saída</td>
    <td>OK //Em caso de sucesso <br>ERRO //Caso a matriz não exista</td>
  </tr>
</table>

### Imprimir matriz   
<table>
  <tr>
    <td>Comando</td>
    <td>IM &ltnome&gt </td>
  </tr>
  <tr>
    <td>Saída</td>
    <td>a<sub>1,1</sub> ... a<sub>1,m</sub><br>... //Separados por espaço (com formato %4.2f)<br>a<sub>n,1</sub> ... a<sub>n,m</sub><br>ERRO //Caso a matriz não exista</td>
  </tr>
</table>

### Atribuir um elemento à matriz 
<table>
  <tr>
    <td>Comando</td>
    <td>AE &ltnome&gt &ltlinha&gt &ltcoluna&gt &ltvalor&gt</td>
  </tr>
  <tr>
    <td>Saída</td>
    <td>OK //Em caso de sucesso<br>ERRO //Caso a matriz não exista ou as coordenadas sejam inválidas</td>
  </tr>
</table>

### Atribuir uma linha à matriz
<table>
  <tr>
    <td>Comando</td>
    <td>AL &ltnome&gt &ltlinha&gt &ltval1&gt ... &ltval<sub>n</sub>&gt #</td>
  </tr>
  <tr>
    <td>Saída</td>
    <td>OK //Em caso de sucesso<br>ERRO //Caso a matriz não exista, a linha seja inválida ou a quantidade de valores não seja condizente com as dimensões da matriz</td>
  </tr>
</table>

### Atribuir uma coluna à matriz 
<table>
  <tr>
    <td>Comando</td>
    <td>AC &ltnome&gt &ltcoluna&gt &ltval1&gt ... &ltval<sub>m</sub>&gt #</td>
  </tr>
  <tr>
    <td>Saída</td>
    <td>OK //Em caso de sucesso<br>ERRO //Caso a matriz não exista, a coluna seja inválida ou a quantidade de valores não seja condizente com as dimensões da matriz</td>
  </tr>
</table>

### Transpor uma matriz  
<table>
  <tr>
    <td>Comando</td>
    <td>TM &ltnome&gt &ltnome-resultado sem espaços&gt</td>
  </tr>
  <tr>
    <td>Saída</td>
    <td>//Imprime a matriz resultante (mesmo formato do comando IM)<br>ERRO //Caso a matriz não exista ou a matriz resultante já exista</td>
  </tr>
</table>

### Somar duas matrizes   
<table>
  <tr>
    <td>Comando</td>
    <td>SM &ltnome1&gt &ltnome2&gt &ltnome-resultado sem espaços&gt</td>
  </tr>
  <tr>
    <td>Saída</td>
    <td>//Imprime matriz resultante (mesmo formato do comando IM)<br>ERRO //Caso alguma das matrizes não exista, suas dimensões não sejam as mesmas ou a matriz resultante já exista</td>
  </tr>
</table>

### Dividir uma matriz por outra (elemento a elemento)   
<table>
  <tr>
    <td>Comando</td>
    <td>DV &ltnome1&gt &ltnome2&gt &ltnome-resultado sem espaços&gt</td>
  </tr>
  <tr>
    <td>Saída</td>
    <td>//Imprime matriz resultante (mesmo formato do comando IM)<br>ERRO //Caso alguma das matrizes não exista, suas dimensões não sejam as mesmas, a segunda matriz contenha algum elemento igual a 0 ou a matriz resultante já exista</td>
  </tr>
</table>

### Multiplicar uma matriz por outra   
<table>
  <tr>
    <td>Comando</td>
    <td>MM &ltnome1&gt &ltnome2&gt &ltnome-resultado sem espaços&gt</td>
  </tr>
  <tr>
    <td>Saída</td>
    <td>//Imprime matriz resultante (mesmo formato do comando IM)<br>ERRO //Caso alguma das matrizes não exista, suas dimensões estejam incorretas ou a matriz resultante já exista</td>
  </tr>
</table>

### Multiplicar uma matriz por outra (elemento a elemento)   
<table>
  <tr>
    <td>Comando</td>
    <td>ME &ltnome1&gt &ltnome2&gt &ltnome-resultado sem espaços&gt</td>
  </tr>
  <tr>
    <td>Saída</td>
    <td>//Imprime matriz resultante (mesmo formato do comando IM)<br>ERRO //Caso alguma das matrizes não exista, suas dimensões não sejam as mesmas ou a matriz resultante já exista</td>
  </tr>
</table>

### Finaliza a execução  
<table>
  <tr>
    <td>Comando</td>
    <td>FE</td>
  </tr>
  <tr>
    <td>Saída</td>
    <td>//Finaliza a execução do programa</td>
  </tr>
</table>
