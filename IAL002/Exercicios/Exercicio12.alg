algoritmo "Exercicio 12"
// Função : Efetuar o cálculo e a apresentação do valor de uma prestação em atraso, utilizando a fórmula
//        PRESTAÇÃO <-- VALOR + (VALOR * (TAXA/100) * TEMPO)
// Autor : Rafael Gomides
// Data : 3/7/2018
// Seção de Declarações 
var

prestacao, valor, taxa:real
tempo:inteiro

inicio
// Seção de Comandos

escreva ("Informe o valor original: ")
leia(valor)
escreva ("Informe a taxa: ")
leia(taxa)
escreva ("informe os dias de atraso: ")
leia(tempo)

prestacao<-valor+(valor*(taxa/100)*tempo)

escreva ("O valor da prestação atualizado: ",prestacao)
 
fimalgoritmo
