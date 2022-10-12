const engorda = 0.15;
const emagrece = 0.2;
let pesoAtual = parseFloat(prompt("Informe seu peso atual (em Kg): "));
let pesoEngorda = (pesoAtual * (1 + engorda)).toFixed(1);
let pesoEmagrece = (pesoAtual * (1 - emagrece)).toFixed(1);
alert("Se você engordar 15% seu peso será de " + pesoEngorda + "Kg.\nSe você emagrecer 20% seu peso será de " + pesoEmagrece +"Kg.")