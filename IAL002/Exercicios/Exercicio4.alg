algoritmo "Exercicio 4"
// Fun��o : Calcular e apresentar o valor do volume de uma lata de �leo, utilizando a f�rmula:VOLUME <-- 3.14159 * RAIO2  * ALTURA.
// Autor : Rafael Gomides
// Data : 3/7/2018
// Se��o de Declara��es 
var

raio, altura, volume:real

inicio
// Se��o de Comandos 
escreva("Informe o Raio (cm): ")
leia (raio)

escreva("Informe a Altura (cm): ")
leia (altura)

//volume<-raio*3.14159*altura  - A f�rmula indicada est� errada. Vou manter a fim de garantir a nota :P Mas vou colocar abaixo a conta certa

volume <- (3.14159*(raio*raio))*altura

escreva("O Volume �: ",volume,"cm�")

fimalgoritmo
