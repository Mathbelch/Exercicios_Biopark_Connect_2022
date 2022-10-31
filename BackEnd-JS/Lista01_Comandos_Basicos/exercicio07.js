let qtdMoeda1Cent = parseInt(prompt("Indique a quantidade de moedas de 1 centavo: "));
let qtdMoeda5Cent = parseInt(prompt("Indique a quantidade de moedas de 5 centavos: "));
let qtdMoeda10Cent = parseInt(prompt("Indique a quantidade de moedas de 10 centavos: "));
let qtdMoeda25Cent = parseInt(prompt("Indique a quantidade de moedas de 25 centavos: "));
let qtdMoeda50Cent = parseInt(prompt("Indique a quantidade de moedas de 50 centavos: "));
let qtdMoeda100Cent = parseInt(prompt("Indique a quantidade de moedas de 1 real: "));
let total = ((qtdMoeda1Cent + (qtdMoeda5Cent * 5) + (qtdMoeda10Cent * 10) + (qtdMoeda25Cent * 25) + (qtdMoeda50Cent * 50) + (qtdMoeda100Cent * 100)) / 100).toFixed(2);
alert("Total economizado: R$" + total + "!");