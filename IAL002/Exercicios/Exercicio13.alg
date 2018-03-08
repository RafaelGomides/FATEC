algoritmo "Exemplo 13"
// Função : Elaborar um programa que efetue a apresentação do valor da conversão
//         em real de um valor lido em dólar. O programa deve solicitar o valor da cotação
//         do dólar e também a quantidade de dólares disponível com o usuário, para que
//         seja apresentado o valor em moeda brasileira.
// Autor : Rafael Gomides
// Data : 3/7/2018
// Seção de Declarações 
var

dolar, cotacao, mreal:real

inicio
// Seção de Comandos 
escreva("Informe cotação do dolar: ")
leia(cotacao)
escreva("Informe montante do valor em dolar que possui: ")
leia(dolar)

mreal<-dolar*cotacao

escreva("Você possui: R$",mreal:2:2)

fimalgoritmo
