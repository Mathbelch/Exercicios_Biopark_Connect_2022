const salarioJoao = 1200.0;
const conta1 = 200.0;
const conta2 = 120.0;
const multa = 0.02;

let salarioRestante = (salarioJoao - ((conta1 + conta2) * (1 + multa))).toFixed(2);
let answer = confirm("Dados do exercício:João recebeu seu salário de R$ 1200,00 e precisa pagar duas contas (C1=R$ 200,00 e C2=R$120,00) que estão atrasadas. Como as contas estão atrasadas, João terá de pagar multa de 2% sobre cada conta. Faça um algoritmo que calcule e mostre quanto restará do salário do João.\n\n Clique em confirm para ver a resposta:");

if (answer)
{
    alert("Restante do salário = R$" + salarioRestante + "!")
}