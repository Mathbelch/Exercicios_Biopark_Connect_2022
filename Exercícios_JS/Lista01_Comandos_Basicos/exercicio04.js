const anelChipPreco = 4.0;
const anelAlimentoPreco = 3.5;
const qtdAnelChipFrango = 1;
const qtdAnelAlimentoFrango = 2;

let qtdFrangos = parseInt(prompt("Quantos frangos deseja marcar?"));
let gastoTotal = (qtdFrangos * (qtdAnelChipFrango * anelChipPreco + qtdAnelAlimentoFrango * anelAlimentoPreco)).toFixed(2);

alert("Gasto total para marcar todos os " + qtdFrangos + " frangos: R$" + gastoTotal);