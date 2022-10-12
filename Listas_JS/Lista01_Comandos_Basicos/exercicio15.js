const comissao = 0.04;
let salarioFixo = parseFloat(prompt("Informe o salário fixo do funcionário: "));
let vendas = parseFloat(prompt("Informe o total de vendas: "));
let comissaoVendas = (vendas * comissao);
let salarioFinal = (salarioFixo + comissaoVendas);
alert("Comissão sob vendas: R$" + comissaoVendas.toFixed(2) + "Salário final: R$" + salarioFinal.toFixed(2) + ".");
