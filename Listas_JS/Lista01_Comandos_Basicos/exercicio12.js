let num1 = parseFloat(prompt("Informe o primeiro número: "));
let num2;

do {
    num2 = parseFloat(prompt("Informe o segundo número: "));
    if (num2 == 0) {
        alert("O segundo número não pode ser zero!");
    }
} while (num2 == 0);

let divisao = num1 / num2;

alert(num1 + " / " + num2 + " = " + divisao);
