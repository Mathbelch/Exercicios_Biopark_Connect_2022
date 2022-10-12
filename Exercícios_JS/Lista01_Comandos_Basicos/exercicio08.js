let sombraHomem = parseFloat(prompt("Informe a medida da sua sombra (em metros):"));
let alturaHomem = parseFloat(prompt("Informe a sua altura (em metros):"));
let sombraPredio = parseFloat(prompt("Informe a medida da sombra do prédio (em metros):"));

let alturaPredio = ((sombraPredio / sombraHomem) * alturaHomem).toFixed(2);

alert("Altura do prédio: " + alturaPredio + " metros.");