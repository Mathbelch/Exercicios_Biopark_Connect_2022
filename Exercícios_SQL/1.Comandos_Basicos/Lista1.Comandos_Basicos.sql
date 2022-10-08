CREATE DATABASE Lista1;
USE Lista1;

CREATE TABLE alunos(
	codigo INT, 
	nome VARCHAR (50),
	telefone VARCHAR (50),
	cidade VARCHAR (50)
);

DESC alunos;

CREATE TABLE alunos2(
	codigo INT, 
	nome VARCHAR (200),
	telefone VARCHAR (50), 
	cidade VARCHAR (100)
);

DESC alunos2;

CREATE TABLE funcionarios(
	nome VARCHAR (50),
    endereco VARCHAR (50),
    telefone VARCHAR (15),
    cidade VARCHAR (20),
    estado VARCHAR (20),
    cep VARCHAR (20),
    rg VARCHAR (20),
    cpf CHAR (11),
    salario FLOAT
);

DESC funcionarios;
    
CREATE TABLE fornecedores(
	nome VARCHAR (50),
    endereco VARCHAR (50),
    telefone VARCHAR (15),
    cidade VARCHAR (20),
    estado VARCHAR (20),
    cep VARCHAR (10),
    cnpj CHAR (14),
    email VARCHAR (50)
);

DESC fornecedores;
    
CREATE TABLE livros(
	codigo INT,
    nome VARCHAR (50),
    categoria VARCHAR (20),
    resumo VARCHAR (200),
    preco_custo FLOAT,
    preco_venda FLOAT
);

DESC livros;

CREATE TABLE estoque(
	codigo INT,
    nome_do_produto VARCHAR (50),
    categoria VARCHAR (50),
    quantidade INT,
    fornecedor VARCHAR (50)
    );
    
DESC estoque;

CREATE TABLE notas(
	codigo INT,
    nome_do_aluno VARCHAR (50),
    bimestre SMALLINT
    );
    
DESC notas;

CREATE TABLE caixa(
	codigo INT,
    data_ DATE,
    descricao VARCHAR (200),
    debito FLOAT,
    credito FLOAT
    );
    
DESC caixa;

CREATE TABLE contas_a_pagar(
	codig INT,
    data_conta DATE,
    descricao VARCHAR (200),
    valor FLOAT,
    data_pagamento DATE
    );
    
DESC contas_a_pagar;

CREATE TABLE contas_a_receber(
	codigo INT,
	data_conta DATE,
    descricao VARCHAR (200),
    valor FLOAT,
    data_recebimento DATE
    );

DESC contas_a_receber;

CREATE TABLE filmes(
	codigo INT,
    nome VARCHAR (20),
    sinopse VARCHAR (200),
    categoria VARCHAR (20),
    diretor VARCHAR (20)
    );
    
DESC filmes;

CREATE TABLE CDs(
	codigo INT,
    nome VARCHAR (20),
    cantor VARCHAR (20),
    ano INT,
    quantidade_de_musicas SMALLINT
    );
    
DESC CDs;
    
DROP TABLE alunos2;

DESC alunos2; 

DROP TABLE livros;

DROP TABLE contas_a_pagar;

DROP TABLE contas_a_receber;

DESC livros;

DESC contas_a_pagar;

DESC contas_a_receber;

DESC filmes;

DESC alunos;

ALTER TABLE alunos RENAME TO super_alunos;

DESC alunos; -- tabela excluida

DESC super_alunos; -- tabela renomeada.

ALTER TABLE estoque RENAME TO produtos;

ALTER TABLE notas RENAME TO aprovados;

ALTER TABLE aprovados RENAME TO notas;

DROP TABLE notas;

DESC notas; -- tabela excluida, por isso nao aparece!

ALTER TABLE super_alunos RENAME TO alunos;

ALTER TABLE alunos RENAME TO estudantes;

ALTER TABLE estudantes RENAME TO super_estudantes;

DESC super_estudantes;

DROP TABLE super_estudantes;

DESC super_estudantes; -- não aparece pois a tabela foi excluida

DESC alunos; -- não aparece pois a tabela foi excluida

DESC caixa;

ALTER TABLE caixa ADD observacao VARCHAR (100);

ALTER TABLE caixa ADD saldo FLOAT;

DESC caixa;
