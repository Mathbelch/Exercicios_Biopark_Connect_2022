CREATE DATABASE controle_de_livros;
USE controle_de_livros;

-- 1: Criar as tabelas/relações:

CREATE TABLE editora(
	editora_id SMALLINT PRIMARY KEY AUTO_INCREMENT,
    nome_editora VARCHAR(20) NOT NULL,
    pais_editora VARCHAR(20) NOT NULL,
    telefone_editora INT NOT NULL UNIQUE
);
    
CREATE TABLE autor(
	autor_id SMALLINT PRIMARY KEY AUTO_INCREMENT,
    nome_autor VARCHAR(20) NOT NULL,
    sobrenome_autor VARCHAR(20) NOT NULL,
    nacionalidade VARCHAR(20) NOT NULL,
    data_nascimento DATE
);

CREATE TABLE categoria(
	categoria_id SMALLINT PRIMARY KEY AUTO_INCREMENT,
    genero VARCHAR(20) NOT NULL,
    sub_categoria VARCHAR(20)
);

CREATE TABLE livros(
	livro_id SMALLINT PRIMARY KEY AUTO_INCREMENT,
    codigo_ISBN INT NOT NULL UNIQUE,
    numero_edicao SMALLINT NOT NULL,
    numero_paginas SMALLINT NOT NULL,
    data_lancamento DATE NOT NULL,
    idioma VARCHAR(20) NOT NULL,
    titulo VARCHAR(20) NOT NULL,
    subtitulo VARCHAR(20),
    editora_id SMALLINT NOT NULL,
    CONSTRAINT fk_livros_editora FOREIGN KEY (editora_id) REFERENCES editora (editora_id)
);

CREATE TABLE livro_autor(
	livro_id SMALLINT NOT NULL,
    autor_id SMALLINT NOT NULL,
    PRIMARY KEY (livro_id, autor_id),
    FOREIGN KEY (livro_id) REFERENCES livros (livro_id),
    FOREIGN KEY (autor_id) REFERENCES autor (autor_id)
);

CREATE TABLE livro_categoria(
	livro_id SMALLINT NOT NULL,
    categoria_id SMALLINT NOT NULL,
    PRIMARY KEY (livro_id, categoria_id),
    FOREIGN KEY (livro_id) REFERENCES livros (livro_id),
    FOREIGN KEY (categoria_id) REFERENCES categoria (categoria_id)
);

-- 2: Inserir dados nas tabelas:

INSERT INTO categoria (categoria_id,genero,sub_categoria) VALUES (1,"terror","horror");
INSERT INTO categoria (genero,sub_categoria) VALUES ("terror","thriller");

INSERT INTO autor (nome_autor,sobrenome_autor,nacionalidade,data_nascimento) 
	VALUES("Stephen","King","USA",19470921);
INSERT INTO autor (nome_autor,sobrenome_autor,nacionalidade,data_nascimento) 
	VALUES ("Daniel","Brown","USA",19640622);

INSERT INTO editora (nome_editora,pais_editora,telefone_editora)
	VALUES("Arqueiro","Brasil",999332121),("Suma","Brasil",993332122);
        
INSERT INTO livros (codigo_ISBN,numero_edicao,numero_paginas,data_lancamento,idioma,titulo,editora_id)
	VALUES(856028094,1,1104,20140724,"Português","IT:A COISA",2),(978858041,1,432,20040101,"Português","O código da vinci",2);

INSERT INTO livro_autor VALUE (1,1),(2,2);
INSERT INTO livro_categoria VALUE (1,1),(2,2);

SELECT * FROM autor;
SELECT * FROM categoria;
SELECT * FROM editora;
SELECT * FROM livros;
SELECT * FROM livro_autor;
SELECT * FROM livro_categoria;

-- 3: Agora devemos alterar elementos das tabela:
UPDATE autor SET nacionalidade = "American" WHERE autor_id=1;
UPDATE categoria SET genero = "suspense" WHERE categoria_id = 2; 
UPDATE editora SET pais_editora="Br" WHERE pais_editora="Brasil";
UPDATE livros SET idioma="Pt" WHERE idioma="Português";

-- 4: Por fim, devemos deletar um elemento por tabela:
DELETE FROM livro_categoria WHERE livro_id=1;
DELETE FROM livro_autor WHERE livro_id=1;
DELETE FROM livros WHERE livro_id=1;
DELETE FROM autor WHERE autor_id=1;
DELETE FROM editora WHERE editora_id=1;
DELETE FROM categoria WHERE categoria_id=1;
