// 4 – Os seus produtos também tem um custo! Nada na vida é de graça. Adicione estes custos também ao contador de despesas, após cada venda.

const atendimentos = [];
let ativo = true;
let saldo = 0.0;
let despesas = 0.0;

while(ativo)
{       
    let produto = {};
    let opcao = parseInt(prompt("Olá.\nDigite a opção desejada:\n1 - Exibir Menu.\n2 - Novo Pedido.\n3 - Exibir Promoções.\n4 - Saldo de caixa.\n5 - Lista de itens vendidos (ver no console).\n6 - Encerrar aplicação."));

    switch (opcao)
    {
        case 1:
            alert("*****Menu*****\n1 - Cachorro Quente - R$8,00;\n2 - Burguer - R$10,00;\n3 - Misto quente - R$7,00;");
            break;

        case 2:
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

            case 3:
                alert("*****Menu de Promoções*****\n1 - Dois ou mais cachorros quentes por R$7,50 cada;\n2 - Três ou mais burguers por R$8,00 cada;\n3 - Dois ou mais mistos quentes por R$6,50 cada;");
                break;

            case 4:
                alert("Saldo em caixa = R$" + saldo.toFixed(2));
                break;

            case 5:
                console.table(atendimentos); // Para exibir uma tabela com todos os atendimentos realizados.
                break;

            default:
                ativo = false; // Para sair da aplicação e encerrar o Loop.
        }
    }