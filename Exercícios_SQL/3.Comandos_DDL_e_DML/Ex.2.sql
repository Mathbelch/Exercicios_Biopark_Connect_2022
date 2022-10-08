CREATE DATABASE escola;
USE escola;

-- 1: Criar as tabelas/relações:

CREATE TABLE professor(
	id_professor SMALLINT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(30) NOT NULL,
    sobrenome VARCHAR(30) NOT NULL,
    cpf CHAR(11) NOT NULL UNIQUE,
    telefone VARCHAR(12) NOT NULL
);

CREATE TABLE aula(
	id_aula SMALLINT PRIMARY KEY AUTO_INCREMENT,
    materia VARCHAR(30) NOT NULL,
    carga_horaria_semanal_horas SMALLINT NOT NULL DEFAULT '3',
    id_professor SMALLINT NOT NULL,
    CONSTRAINT fk_aula_professor FOREIGN KEY (id_professor) REFERENCES professor (id_professor) 
);

CREATE TABLE turma(
	id_turma SMALLINT PRIMARY KEY AUTO_INCREMENT,
    numero_sala SMALLINT NOT NULL,
    curso VARCHAR(30) NOT NULL
);

CREATE TABLE aluno(
	id_aluno SMALLINT PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(30) NOT NULL,
    sobrenome VARCHAR(30) NOT NULL,
    cpf CHAR(11) NOT NULL UNIQUE,
    telefone VARCHAR(11) NOT NULL,
    id_turma SMALLINT NOT NULL,
    CONSTRAINT fk_aluno_turma FOREIGN KEY (id_turma) REFERENCES turma (id_turma)
);

CREATE TABLE professor_turma(
	id_professor SMALLINT NOT NULL,
    id_turma SMALLINT NOT NULL,
    PRIMARY KEY (id_professor, id_turma),
    CONSTRAINT fk_id_professor FOREIGN KEY (id_professor) REFERENCES professor (id_professor),
    CONSTRAINT fk_id_turma FOREIGN KEY (id_turma) REFERENCES turma (id_turma)
);

CREATE TABLE aula_aluno(
	id_aula SMALLINT NOT NULL,
    id_aluno SMALLINT NOT NULL,
    PRIMARY KEY (id_aula, id_aluno),
    CONSTRAINT fk_id_aula FOREIGN KEY (id_aula) REFERENCES aula (id_aula),
    CONSTRAINT fk_id_aluno FOREIGN KEY (id_aluno) REFERENCES aluno (id_aluno)
);

-- 2: Fazer duas inserções de dados por tabela:

SELECT * FROM professor;
INSERT INTO professor (nome, sobrenome, cpf, telefone) VALUES ("João","Ferreira","28834796871","45999335562");
INSERT INTO professor (nome, sobrenome, cpf, telefone) VALUES ("Leonel","Dourado","23654789200","4598745896");
SELECT * FROM professor;

SELECT * FROM aula;
INSERT INTO aula VALUES(1,"Biologia",5,1);
INSERT INTO aula (id_aula, materia,id_professor) VALUES (2,"Inglês",2);
SELECT * FROM aula;

SELECT * FROM turma;
INSERT INTO turma (numero_sala,curso) VALUES (12,"Ciências Biológicas");
INSERT INTO turma (numero_sala,curso) VALUES (21,"Linguas Estrangeiras");
SELECT * FROM turma;

SELECT * FROM aluno;
INSERT INTO aluno VALUES (1,"Lucio","Mauro",28874598712,457854123,1);
INSERT INTO aluno VALUES (2,"Ryana","Brecnh",27452366012,4577725698,2);
SELECT * FROM aluno;

SELECT * FROM professor_turma;
INSERT INTO professor_turma VALUES(1,1);
INSERT INTO professor_turma VALUES(2,2);
SELECT * FROM professor_turma;

SELECT * FROM aula_aluno;
INSERT INTO aula_aluno VALUES (1,1);
INSERT INTO aula_aluno VALUES (2,2);
SELECT * FROM aula_aluno;

-- 3: Fazer um Update por tabela:

UPDATE professor SET sobrenome = "Ferrado" WHERE id_professor = 1;
SELECT * FROM professor;

UPDATE aula SET carga_horaria_semanal_horas = 5 WHERE id_aula = 2;
SELECT * FROM aula;

UPDATE turma SET numero_sala = 15 WHERE curso = "Ciências Biológicas";
SELECT * FROM turma;

UPDATE aluno SET nome = "Riana" WHERE id_aluno = 2;
SELECT * FROM aluno;

-- 4: Fazer um Delete por tabela:

DELETE FROM professor_turma WHERE id_professor=1;
DELETE FROM aula_aluno WHERE id_aula=1;
DELETE FROM aula WHERE id_aula=1;
DELETE FROM professor WHERE id_professor=1;
DELETE FROM aluno WHERE id_turma=1;
DELETE FROM turma WHERE id_turma=1;

-- CHECAGEM: 
SELECT * FROM professor;
SELECT * FROM aula;
SELECT * FROM turma;
SELECT * FROM aluno;
SELECT * FROM professor_turma;
SELECT * FROM aula_aluno;