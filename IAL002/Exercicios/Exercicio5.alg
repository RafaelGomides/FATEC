algoritmo "Exercicio 5"
// Função : Ler dois valores inteiros para as variáveis A e B e efetuar a troca
//dos valores de forma que a variável A passe a possuir o valor da variável B e
//a variável B passe a possuir o valor da variável A. Apresentar os valores trocados.
// Autor : Rafael Gomides
// Data : 3/7/2018
// Seção de Declarações 
var

a, b, c: inteiro

inicio
// Seção de Comandos
escreva ("Escreva o valor de A: ")
leia (a)
escreva ("Escreva o valor de B: ")
leia (b)

c <- a

a <- b

b <- c

escreval ("")

escreval ("Valor de A: ",a)
escreval ("Valor de B: ",b)

fimalgoritmo
