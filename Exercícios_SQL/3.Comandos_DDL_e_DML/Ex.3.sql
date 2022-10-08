CREATE DATABASE ESCOLA_EX3;
USE ESCOLA_EX3;

CREATE TABLE instrutores (
  id INT NOT NULL AUTO_INCREMENT,
  nome VARCHAR(50) NOT NULL,
  email VARCHAR(50) NOT NULL,
  valor_hora INTEGER UNSIGNED NULL,
  certificados VARCHAR(255) NULL,
  PRIMARY KEY(id)
);
CREATE TABLE cursos (
  id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  nome VARCHAR(50) NOT NULL,
  requisito VARCHAR(255) NULL,
  carga_horaria SMALLINT UNSIGNED NULL,
  preco DOUBLE UNSIGNED NULL,
  PRIMARY KEY(id)
);
 
CREATE TABLE alunos (
  id INT NOT NULL AUTO_INCREMENT,
  cpf CHAR(11) NOT NULL,
  nome VARCHAR(50) NOT NULL,
  email VARCHAR(50) NOT NULL,
  fone CHAR(14) NOT NULL,
  data_nascimento DATE NULL,
  PRIMARY KEY(id)
);
 
CREATE TABLE turmas (
  id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  instrutores_id INT NOT NULL,
  cursos_id INTEGER UNSIGNED NOT NULL,
  data_inicio DATE NULL,
  data_final DATE NULL,
  carga_horaria SMALLINT UNSIGNED NULL,
  PRIMARY KEY(id),
  INDEX turmas_FKIndex1(cursos_id),
  INDEX turmas_FKIndex2(instrutores_id),
  CONSTRAINT CURSO_TURMA_FK FOREIGN KEY(cursos_id)
    REFERENCES cursos(id),
  CONSTRAINT INSTRUTOR_TURMA_FK FOREIGN KEY(instrutores_id)
    REFERENCES instrutores(id)
);
 
CREATE TABLE matriculas (
  id INTEGER UNSIGNED NOT NULL AUTO_INCREMENT,
  turmas_id INTEGER UNSIGNED NOT NULL,
  alunos_id INT NOT NULL,
  data_matricula DATE NULL,
  PRIMARY KEY(id),
   CONSTRAINT ALUNO_MATRICULA_FK FOREIGN KEY(alunos_id)
    REFERENCES alunos(id),
  CONSTRAINT TURMA_MATRICULA_FK FOREIGN KEY(turmas_id)
    REFERENCES turmas(id)
);

-- 1: Fazer 5 INSERT INTO por tabela!

SELECT * FROM alunos;
INSERT INTO alunos(cpf,nome,email,fone,data_nascimento) VALUES ('42568745688','Julio','julio@email.com','45785741255',20110314);
INSERT INTO alunos(cpf,nome,email,fone,data_nascimento) VALUES ('45789632154','Marcos','marcos@email.com','4574225634',20170322);
INSERT INTO alunos(cpf,nome,email,fone,data_nascimento) VALUES ('14523658741','Anderson','ander@email.com','4554782365',20000716);
INSERT INTO alunos(cpf,nome,email,fone,data_nascimento) VALUES ('03652145785','Luiza','luiza@email.com','4574698215',19980302);
INSERT INTO alunos(cpf,nome,email,fone,data_nascimento) VALUES ('45698523541','Janaina','jana@email.com','4541236584',19990912);

SELECT * FROM cursos;
INSERT INTO cursos(nome,requisito,carga_horaria,preco) VALUES ('Ciencias biológicas','não há',45,1200);
INSERT INTO cursos(nome,requisito,carga_horaria,preco) VALUES ('Ciencias humanas','não há',40,1000);
INSERT INTO cursos(nome,requisito,carga_horaria,preco) VALUES ('Matemático','não há',60,1500);
INSERT INTO cursos(nome,requisito,carga_horaria,preco) VALUES ('Artes','não há',30,900);
INSERT INTO cursos(nome,requisito,carga_horaria,preco) VALUES ('Literatura','não há',35,850);

SELECT * FROM instrutores;
INSERT INTO instrutores(nome,email,valor_hora,certificados) VALUES ('Carlos','carlos@email.com',25,'Mestre');
INSERT INTO instrutores(nome,email,valor_hora,certificados) VALUES ('Manuel','manuel@email.com',25,'Mestre');
INSERT INTO instrutores(nome,email,valor_hora,certificados) VALUES ('Elisangela','elis@email.com',30,'Doutor');
INSERT INTO instrutores(nome,email,valor_hora,certificados) VALUES ('Matheus','math@email.com',25,'Mestre');
INSERT INTO instrutores(nome,email,valor_hora,certificados) VALUES ('Leonardo','leo@email.com',30,'Doutor');

SELECT * FROM turmas;
INSERT INTO turmas(instrutores_id,cursos_id,data_inicio,data_final,carga_horaria) VALUES (1,3,20220408,20221224,20);
INSERT INTO turmas(instrutores_id,cursos_id,data_inicio,data_final,carga_horaria) VALUES (2,2,20220408,20221224,20);
INSERT INTO turmas(instrutores_id,cursos_id,data_inicio,data_final,carga_horaria) VALUES (4,5,20220408,20221224,20);
INSERT INTO turmas(instrutores_id,cursos_id,data_inicio,data_final,carga_horaria) VALUES (5,4,20220408,20221224,20);
INSERT INTO turmas(instrutores_id,cursos_id,data_inicio,data_final,carga_horaria) VALUES (3,1,20220408,20221224,20);

SELECT * FROM matriculas;
INSERT INTO matriculas(turmas_id,alunos_id,data_matricula) VALUES (3,1,20220312);
INSERT INTO matriculas(turmas_id,alunos_id,data_matricula) VALUES (4,2,20220325);
INSERT INTO matriculas(turmas_id,alunos_id,data_matricula) VALUES (5,4,20220320);
INSERT INTO matriculas(turmas_id,alunos_id,data_matricula) VALUES (2,5,20220302);
INSERT INTO matriculas(turmas_id,alunos_id,data_matricula) VALUES (4,3,20220305);

-- 2: Fazer um UPDATE na tabela instrutores, alterando o nome de um dos instrutores (Filtrar pelo id do instrutor).
SELECT * FROM instrutores;
UPDATE instrutores SET nome = 'Elisandra' WHERE id = 4;

-- 3: Fazer um UPDATE na tabela instrutores, alterando o e-mail de um dos instrutores(Filtrar pelo nome do instrutor);
SELECT * FROM instrutores;
UPDATE instrutores SET email = 'lis@email.com' WHERE nome = 'Elisandra';

-- 4: Fazer dois UPDATE na tabela cursos, seguindo a mesma lógica do exercício 2 e 3;
SELECT * FROM cursos;
UPDATE cursos SET nome = 'Matematica' WHERE id = 3;
UPDATE cursos SET carga_horaria = 35 WHERE nome = 'Artes';

-- 5: Fazer dois UPDATE na tabela turmas trocando o instrutor de 2 turmas diferentes;
SELECT * FROM turmas;
UPDATE turmas SET instrutores_id = 2 WHERE id = 3;
UPDATE turmas SET instrutores_id = 3 WHERE id = 2;

-- 6: Fazer 2 DELETE por tabela do banco de dados;
SELECT * FROM matriculas;
DELETE FROM matriculas WHERE id=1;
DELETE FROM matriculas WHERE id=2;
DELETE FROM matriculas WHERE id=4;

SELECT * FROM alunos;
DELETE FROM alunos WHERE id=1;
DELETE FROM alunos WHERE id=2;

SELECT * FROM turmas;
DELETE FROM turmas WHERE id=1;
DELETE FROM turmas WHERE id=3;
DELETE FROM turmas WHERE id=2;

SELECT * FROM cursos;
DELETE FROM cursos WHERE id=2;
DELETE FROM cursos WHERE id=3;

SELECT * FROM instrutores;
DELETE FROM instrutores WHERE id=1;
DELETE FROM instrutores WHERE id=2;

