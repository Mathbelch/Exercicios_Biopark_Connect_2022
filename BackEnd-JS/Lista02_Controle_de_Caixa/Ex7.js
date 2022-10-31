// 7 –Crie uma tabela no console com todos os dados de venda de cada produto. 
const atendimentos = [];
let ativo = true;
let saldo = 0.0;
let despesas = 0.0;

while(ativo)
{       
    const produto = {};
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
                let escolha2 = parseInt(prompt("Relatórios.\nDigite a opção desejada:\n0 - Voltar.\n1 - Saldo de caixa.\n2 - Relatório de vendas (ver no console).\n3 - Calcular saldo do dia.\n4 - Relatório de quantidades vendidas.\n5 - Relatório Completo de vendas por produto (ver no console)\n6 - Encerrar aplicação."));
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
                        relatorioVendasProduto();
                        break;
                    case 6:
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


function calcularSaldoDia() {
    let saldoDia = saldo - despesas;
    alert("Entradas = R$" + saldo.toFixed(2) + "\nCustos = R$" + despesas.toFixed(2) + "\nLucro do dia = R$" + saldoDia.toFixed(2));
}

function relatorioQtds() {
    let vendasTotal = 0;
    let relatorioQuantidadesVendidas = [0, 0, 0]; // Ordem do menu: 1, 2, 3 ; [0] cachorro quente, [1] burguer, [2] misto quente.
    
    for (let i = 0; i < atendimentos.length; i++)
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

function relatorioVendasProduto() {
    const vendaCompleto = [];
    let relatorioQuantidadesVendidas = [0, 0, 0]; // Ordem do menu: 1, 2, 3 ; [0] cachorro quente, [1] burguer, [2] misto quente.
    let qtdRegular = [0, 0, 0];
    let qtdPromocional = [0, 0, 0];
    for (let i = 0, tam = atendimentos.length; i < tam; i++)
    {
        if (atendimentos[i].nome == "Cachorro Quente")
        {
            relatorioQuantidadesVendidas[0] = relatorioQuantidadesVendidas[0] + atendimentos[i].quantidade;
            if (atendimentos[i].quantidade < 2)
            {
                qtdRegular[0]++;
            }
            else
            {
                qtdPromocional[0] = qtdPromocional[0] + atendimentos[i].quantidade;
            }
        }
        else if (atendimentos[i].nome == "Hamburguer")
        {
            relatorioQuantidadesVendidas[1] = relatorioQuantidadesVendidas[1] + atendimentos[i].quantidade;
            if (atendimentos[i].quantidade < 3)
            {
                qtdRegular[1] = qtdRegular[i] + atendimentos[i].quantidade;;
            }
            else
            {
                qtdPromocional[1] = qtdPromocional[1] + atendimentos[i].quantidade;
            }
        }
        else if (atendimentos[i].nome == "Misto Quente")
        {
            relatorioQuantidadesVendidas[2] = relatorioQuantidadesVendidas[2] + atendimentos[i].quantidade;
            if (atendimentos[i].quantidade < 2)
            {
                qtdRegular[2]++;
            }
            else
            {
                qtdPromocional[2] = qtdPromocional[2] + atendimentos[i].quantidade;
            }
        }
    }
    {
        const vendasProdutos = {};
        vendasProdutos.produto = "Cachorro Quente";
        vendasProdutos.qtdVendida = relatorioQuantidadesVendidas[0];
        vendasProdutos.qtdRegular = qtdRegular[0];
        vendasProdutos.qtdPromocional = qtdPromocional[0];
        vendasProdutos.entrada = ((qtdRegular[0] * 8) + (qtdPromocional[0] * 7.5)).toFixed(2);
        vendasProdutos.custos = (relatorioQuantidadesVendidas[2] * 4.5).toFixed(2);
        vendasProdutos.lucro = (vendasProdutos.entrada - vendasProdutos.custos).toFixed(2);
        vendaCompleto.push(vendasProdutos);
    }
    {
        const vendasProdutos = {};
        vendasProdutos.produto = "Hamburguer";
        vendasProdutos.qtdVendida = relatorioQuantidadesVendidas[1];
        vendasProdutos.qtdRegular = qtdRegular[1];
        vendasProdutos.qtdPromocional = qtdPromocional[1];
        vendasProdutos.entrada = (qtdRegular[1] * 10 + qtdPromocional[1] * 8.5).toFixed(2);
        vendasProdutos.custos = (relatorioQuantidadesVendidas[2] * 5).toFixed(2);
        vendasProdutos.lucro = (vendasProdutos.entrada - vendasProdutos.custos).toFixed(2);
        vendaCompleto.push(vendasProdutos);
    }
    {    
        const vendasProdutos = {};
        vendasProdutos.produto = "Misto Quente";
        vendasProdutos.qtdVendida = relatorioQuantidadesVendidas[2];
        vendasProdutos.qtdRegular = qtdRegular[2];
        vendasProdutos.qtdPromocional = qtdPromocional[2];
        vendasProdutos.entrada = (qtdRegular[2] * 7 + qtdPromocional[2] * 6.5).toFixed(2);
        vendasProdutos.custos = (relatorioQuantidadesVendidas[2] * 4).toFixed(2);
        vendasProdutos.lucro = (vendasProdutos.entrada - vendasProdutos.custos).toFixed(2);
        vendaCompleto.push(vendasProdutos);
    }
    console.table(vendaCompleto);
}