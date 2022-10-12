const partesAgua = 0.8;
const partesSuco = 0.2;
let qtdSuco = parseInt(prompt("Indique quantos litros de suco deseja fazer:"));
alert("Serão necessários " + (qtdSuco * partesAgua).toFixed(1) + " litros de água e " + (qtdSuco * partesSuco).toFixed(1) + " litros de suco");
