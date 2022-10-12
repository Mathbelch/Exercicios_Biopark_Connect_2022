let salarioMin = (parseFloat(prompt("Informe o valor do salário mínimo atualmente: "))).toFixed(2);
let salarioFunc = (parseFloat(prompt("Informe o valor do salário do funcionário atualmente: "))).toFixed(2);
let calculo = (salarioFunc / salarioMin).toFixed(0);
alert("O funcionário recebe o equivalente à " + calculo + " salários mínimos.")