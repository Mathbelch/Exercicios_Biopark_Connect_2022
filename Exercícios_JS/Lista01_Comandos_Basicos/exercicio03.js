const valorHoraNormal = 10.0;
const valorHoraExtra = 15.0;
const impostos = 0.1;

let qtdHoraNormal = parseFloat(prompt("Indique a quantidade de horas normais trabalhadas:"));
let qtdHoraExtra = parseFloat(prompt("Indique a quantidade de horas extras trabalhadas:"));

let salarioBruto = ((qtdHoraNormal * valorHoraNormal) + (qtdHoraExtra * valorHoraExtra)).toFixed(2);;
let salarioLiquido = (salarioBruto * (1 - impostos)).toFixed(2);

alert("Salario bruto: R$" + salarioBruto + "\nSalario liquido: R$" + salarioLiquido);