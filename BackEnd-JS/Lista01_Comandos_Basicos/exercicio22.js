let numero = parseInt(prompt("Informe um número inteiro: "));
let i;
let results = [];

for (i = 0; i < 11; i++) 
{   
    results[i] = (numero + " * " + i + " = " + numero*i);
    console.log(numero + " * " + i + " = " + numero*i);
} 

alert(results[0] + "\n" + results[1] + "\n" + results[2] + "\n" + results[3] + "\n" + results[4] + "\n" + results[5] + 
    "\n" + results[6] + "\n" + results[7] + "\n" + results[8] + "\n" + results[9] + "\n" + results[10]);