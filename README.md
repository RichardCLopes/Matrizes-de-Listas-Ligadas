# Matrizes-de-Listas-Ligadas

### Descrição do Projeto 
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

<table>
  <tr>
    <td>John</td>
    <td>Doe</td>
  </tr>
  <tr>
    <td>Jane</td>
    <td>Doe</td>
  </tr>
</table>
