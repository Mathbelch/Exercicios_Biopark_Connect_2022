let altura = parseFloat(prompt("Indique a altura da caixa d'água, em metros: "));
let raio = parseFloat(prompt("Indique o raio da caixa d'água, em metros: "));
let volume = (Math.PI * Math.pow(raio, 2) * altura).toFixed(2);
alert("A caixa d'água tem volume de " + volume + "m³!");
