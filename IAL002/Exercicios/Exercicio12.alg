algoritmo "Exercicio 12"
// Fun��o : Efetuar o c�lculo e a apresenta��o do valor de uma presta��o em atraso, utilizando a f�rmula
//        PRESTA��O <-- VALOR + (VALOR * (TAXA/100) * TEMPO)
// Autor : Rafael Gomides
// Data : 3/7/2018
// Se��o de Declara��es 
var

prestacao, valor, taxa:real
tempo:inteiro

inicio
// Se��o de Comandos

escreva ("Informe o valor original: ")
leia(valor)
escreva ("Informe a taxa: ")
leia(taxa)
escreva ("informe os dias de atraso: ")
leia(tempo)

prestacao<-valor+(valor*(taxa/100)*tempo)

escreva ("O valor da presta��o atualizado: ",prestacao)
 
fimalgoritmo
