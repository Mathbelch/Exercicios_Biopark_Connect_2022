let qtdLata350 = parseInt(prompt("Total de latas de 350mL compradas: "));
let qtdGarrafa600 = parseInt(prompt("Total de garrafas de 600mL compradas: "));
let qtdGarraga2 = parseInt(prompt("Total de latas de 2L compradas: "));

let totalRefri = ((qtdLata350 * 0.35) + (qtdGarrafa600 * 0.6) + (qtdGarraga2 * 2));

alert("Total de refrigerante comprado: " + totalRefri + " Litros!");