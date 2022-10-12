let anoNascimento = parseInt(prompt("Informe seu ano de nascimento: "));
let anoAtual = parseInt(prompt("Informe o ano atual: "));

let idadeAnos = anoAtual - anoNascimento;
let idadeMeses = idadeAnos * 12;
let idadeDias = idadeMeses * 31;
let idadeSemanas = (idadeDias / 7).toFixed(1);

alert("Você tem " + idadeAnos + " anos de vida, equivalente à " + idadeMeses + " meses, ou " + idadeSemanas + " semanas ou mesmo " + idadeDias + " dias!")