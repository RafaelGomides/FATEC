algoritmo "Exercicio 8"
// Fun��o : Fa�a um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, meses e dias.
// Autor : Rafael Gomides
// Data : 3/7/2018
// Se��o de Declara��es
var

idDiasEntr, idAnos, idMeses, idDias:inteiro

inicio
// Se��o de Comandos
escreva("Informe sua idade em dias: ")
leia (idDiasEntr)

se (idDIasEntr>365) entao
   idAnos<-(idDiasEntr\365) //A BARRA INVERTIDA " \ " � UTILIZADA PARA DIVIS�O DE INTEIRO
   idDiasEntr<-idDiasEntr-(idAnos*365)
fimse

se (idDiasEntr>30) entao
   idMeses<-(idDiasEntr\30)
   idDiasEntr<-idDiasEntr-(idMeses*30)
fimse

idDias <- idDiasEntr

escreval ("Anos: ",idAnos)
escreval ("Meses: ",idMeses)
escreval ("Dias: ",idDias)
fimalgoritmo
