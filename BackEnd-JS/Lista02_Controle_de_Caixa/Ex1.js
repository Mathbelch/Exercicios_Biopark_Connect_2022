// 1 – Você é o dono de uma cantina e deseja iniciar a venda de cachorro quentes. Um cachorro quente custa R$8,00. Se comprar dois, fica R$15,00 (oportunidade de ouro). Faça um algoritmo que receba um pedido nesta cantina; Você deve adicionar uma lista de produtos que já foram vendidos; Você deve criar um controle de caixa, para ver quanto entrou de dinheiro;

const atendimentos = [];
let ativo = true;
let saldo = 0.0;

while(ativo)
{       
    let produto = {};
    let opcao = parseInt(prompt("Olá.\nDigite a opção desejada:\n1 - Exibir Menu.\n2 - Novo Pedido.\n3 - Exibir Promoções.\n4 - Saldo de caixa.\n5 - Lista de itens vendidos (ver no console).\n6 - Encerrar aplicação."));

    switch (opcao)
    {
        case 1:
            alert("*****Menu*****\n1 - Cachorro Quente - R$8,00;");
            break;
        case 2:
            let escolha = parseInt(prompt("Digite o código do pedido:\n1 - Cachorro Quente"));
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
                    atendimentos.push(produto);
                    break;
                default:
                    alert("Produto não cadastro");
            }
            break;
            case 3:
                alert("*****Menu de Promoções*****\n1 - Dois ou mais cachorros quentes por R$7,50 cada;");
                break;
            case 4:
                for (let i = 0; i < atendimentos.length; i++)
                {
                    saldo = saldo + atendimentos[i].valorFinal;
                }
                alert("Saldo em caixa = R$" + saldo.toFixed(2));
                saldo = 0;
                break;
            case 5:
                console.table(atendimentos); // Para exibir uma tabela com todos os atendimentos realizados.
                break;
            default:
                ativo = false; // Para sair da aplicação e encerrar o Loop.
        }
    }


