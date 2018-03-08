algoritmo "Exercicio 4"
// Função : Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula:VOLUME <-- 3.14159 * RAIO2  * ALTURA.
// Autor : Rafael Gomides
// Data : 3/7/2018
// Seção de Declarações 
var

raio, altura, volume:real

inicio
// Seção de Comandos 
escreva("Informe o Raio (cm): ")
leia (raio)

escreva("Informe a Altura (cm): ")
leia (altura)

//volume<-raio*3.14159*altura  - A fórmula indicada está errada. Vou manter a fim de garantir a nota :P Mas vou colocar abaixo a conta certa

volume <- (3.14159*(raio*raio))*altura

escreva("O Volume é: ",volume,"cm³")

fimalgoritmo
