let catetoA = parseFloat(prompt("Informe o valor (em m) do primeiro cateto: "));
let catetoB = parseFloat(prompt("Informe o valor (em m) do segundo cateto: "));

let hipotenusa = Math.sqrt((catetoA * catetoA) + (catetoB * catetoB));
alert("Hipotenusa = " + hipotenusa.toFixed(2) + " metros!");