algoritmo "Exemplo 13"
// Fun��o : Elaborar um programa que efetue a apresenta��o do valor da convers�o
//         em real de um valor lido em d�lar. O programa deve solicitar o valor da cota��o
//         do d�lar e tamb�m a quantidade de d�lares dispon�vel com o usu�rio, para que
//         seja apresentado o valor em moeda brasileira.
// Autor : Rafael Gomides
// Data : 3/7/2018
// Se��o de Declara��es 
var

dolar, cotacao, mreal:real

inicio
// Se��o de Comandos 
escreva("Informe cota��o do dolar: ")
leia(cotacao)
escreva("Informe montante do valor em dolar que possui: ")
leia(dolar)

mreal<-dolar*cotacao

escreva("Voc� possui: R$",mreal:2:2)

fimalgoritmo
