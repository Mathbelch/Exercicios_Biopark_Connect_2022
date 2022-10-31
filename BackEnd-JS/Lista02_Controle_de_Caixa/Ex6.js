// 6 - Desenvolva uma maneira de obter um extrato individual de quantos itens foram vendidos.

const atendimentos = [];
let ativo = true;
let saldo = 0.0;
let despesas = 0.0;

while(ativo)
{       
    let produto = {};
    let opcao = parseInt(prompt("Olá.\nDigite a opção desejada:\n1 - Exibir Menu.\n2 - Exibir Promoções.\n3 - Novo Pedido.\n4 - Relatórios.\n0 - Encerrar Aplicação."));

    switch (opcao)
    {
        case 1:
            alert("********** MENU **********\n1 - Cachorro Quente - R$8,00;\n2 - Burguer - R$10,00;\n3 - Misto quente - R$7,00;");
            break;

        case 2:
            alert("******************** PROMOÇÕES ********************\n1 - Dois ou mais cachorros quentes por R$7,50 cada;\n2 - Três ou mais burguers por R$8,00 cada;\n3 - Dois ou mais mistos quentes por R$6,50 cada;");
            break;

        case 3:
            let escolha = parseInt(prompt("Digite o código do pedido:\n1 - Cachorro Quente\n2 - Burguer\n3 - Misto quente"));
            switch(escolha)
            {
                case 1:
                    produto.nome = "Cachorro Quente";
                    produto.quantidade = parseInt(prompt("Informe a quantidade desejada: "));
                    if (produto.quantidade < 2)
                    {
                        produto.preco = 8;
                    }
                    else
                    {
                        produto.preco = 7.5;
                    }
                    produto.valorFinal = produto.quantidade * produto.preco;
                    produto.custo = 4.5 * produto.quantidade;
                    atendimentos.push(produto);
                    saldo += produto.valorFinal;
                    despesas += produto.custo;
                    break;

                case 2:
                    produto.nome = "Hamburguer";
                    produto.quantidade = parseInt(prompt("Informe a quantidade desejada: "));
                    if (produto.quantidade < 3)
                    {
                        produto.preco = 10;
                    }
                    else
                    {
                        produto.preco = 8.5;
                    }
                    produto.valorFinal = produto.quantidade * produto.preco;
                    produto.custo = 5 * produto.quantidade;
                    atendimentos.push(produto);
                    saldo += produto.valorFinal;
                    despesas += produto.custo;
                    break;
                
                case 3:
                    produto.nome = "Misto Quente";
                    produto.quantidade = parseInt(prompt("Informe a quantidade desejada: "));
                    if (produto.quantidade < 2)
                    {
                        produto.preco = 7;
                    }
                    else
                    {
                        produto.preco = 6.5;
                    }
                    produto.valorFinal = produto.quantidade * produto.preco;
                    produto.custo = 4 * produto.quantidade;
                    atendimentos.push(produto);
                    saldo += produto.valorFinal;
                    despesas += produto.custo;
                    break;

                default:
                    alert("Produto não cadastro");
            }
            break;

        case 4:
            let ativo2 = true;
            while(ativo2)
            {
                let escolha2 = parseInt(prompt("Relatórios.\nDigite a opção desejada:\n0 - Voltar.\n1 - Saldo de caixa.\n2 - Relatório de vendas (ver no console).\n3 - Calcular saldo do dia.\n4 - Relatório de quantidades vendidas.\n5 - Encerrar aplicação."));
                switch (escolha2)
                {
                    case 1:
                        alert("Saldo em caixa = R$" + saldo.toFixed(2));
                        break;
                    case 2:
                        console.table(atendimentos); // Para exibir uma tabela com todos os atendimentos realizados.
                        break;
                    case 3:
                        calcularSaldoDia();
                        break;
                    case 4:
                        relatorioQtds();
                        break;
                    case 5:
                        ativo2 = false;
                        ativo = false;
                        break
                    default:
                        ativo2 = false;
                }
            }
            break;
        default:
            ativo = false; // Para sair da aplicação e encerrar o Loop.
    }
}


function calcularSaldoDia()
{
    let saldoDia = saldo - despesas;
    alert("Entradas = R$" + saldo.toFixed(2) + "\nCustos = R$" + despesas.toFixed(2) + "\nLucro do dia = R$" + saldoDia.toFixed(2));
}

function relatorioQtds()
{
    let vendasTotal = 0;
    let relatorioQuantidadesVendidas = [0, 0, 0]; // Ordem do menu: 1, 2, 3 ; [0] cachorro quente, [1] burguer, [2] misto quente.
    for (let i = 0; i <atendimentos.length; i++)
    {
        vendasTotal += atendimentos[i].quantidade;
        if (atendimentos[i].nome == "Cachorro Quente")
        {
            relatorioQuantidadesVendidas[0] = relatorioQuantidadesVendidas[0] + atendimentos[i].quantidade;
        }
        else if (atendimentos[i].nome == "Hamburguer")
        {
            relatorioQuantidadesVendidas[1] = relatorioQuantidadesVendidas[1] + atendimentos[i].quantidade;
        }
        else if (atendimentos[i].nome == "Misto Quente")
        {
            relatorioQuantidadesVendidas[2] = relatorioQuantidadesVendidas[2] + atendimentos[i].quantidade;
        }
    }
    alert("Total de vendas: " + vendasTotal + " produtos, sendo\n\n- Cachorro Quente - " + relatorioQuantidadesVendidas[0] + "\n- Burguer - " + relatorioQuantidadesVendidas[1] + "\n- Misto quente - " + relatorioQuantidadesVendidas[2]);
    console.log("Total de vendas: " + vendasTotal + " produtos, sendo:\n- Cachorro Quente - " + relatorioQuantidadesVendidas[0] + "\n- Burguer - " + relatorioQuantidadesVendidas[1] + "\n- Misto quente - " + relatorioQuantidadesVendidas[2]);
    
} 