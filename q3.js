const jsonData = require('./dados.json')

var menor = jsonData[0].valor
var maior = jsonData[0].valor
var media = 0
var cont = 0
var cont2 = 0

for(var i = 1 ; i<30 ; i++){
    if(jsonData[i].valor < menor){
        menor = jsonData[i].valor
    }
}

for(var i = 1 ; i<30 ; i++){
    if(jsonData[i].valor > maior){
        maior = jsonData[i].valor
    }
}



for(var i = 0 ; i<30 ; i++){
    if(jsonData[i].valor != 0){
        media += (jsonData[i].valor)
        cont++
    }  
}

media /= cont

for(var i = 0 ; i<30 ; i++){
    if(jsonData[i].valor > media){
        cont2++
    }
}

console.log(`Menor valor de faturamento ocorrido em um dia do mês: R$ ${menor}`)
console.log(`Maior valor de faturamento ocorrido em um dia do mês: R$ ${maior}`)
console.log(`Número de dias no mês em que o valor de faturamento diário foi maior que a média mensal: ${cont2} dias`)