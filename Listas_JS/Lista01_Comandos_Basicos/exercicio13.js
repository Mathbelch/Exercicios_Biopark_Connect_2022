const peso1 = 2;
const peso2 = 3;

let nota1 = parseFloat(prompt("Informe a primeira nota: "));
let nota2 = parseFloat(prompt("Informe a segunda nota: "));
let total = (((nota1 * peso1) + (nota2 * peso2)) / (peso1 + peso2)).toFixed(2);
alert("Media = " + total);
