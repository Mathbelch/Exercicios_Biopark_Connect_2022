const desconto = 0.1;
let preco = parseFloat(prompt("Informe o preço do produto (R$): "));
let novoPreco = (preco * (1 - desconto)).toFixed(2);
alert("Preço antigo: R$" + preco + ".\nPreço com desconto: R$" + novoPreco + ".");