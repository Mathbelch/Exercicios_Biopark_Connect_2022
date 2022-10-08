CREATE DATABASE controledelivros;
USE controledelivros;

CREATE TABLE autor(
id_autor INT PRIMARY KEY,
nome VARCHAR(50),
idade INT,
valor_hr DECIMAL(10,2)
);

CREATE TABLE editora(
id_editora INT PRIMARY KEY,
nome VARCHAR(50),
telefone VARCHAR(12)
);

CREATE TABLE estilo(
id_estilo INT PRIMARY KEY,
nome VARCHAR(50)
);

CREATE TABLE livro(
id_livro INT PRIMARY KEY,
titulo VARCHAR(50),
id_estilo INT,
id_autor INT,
id_editora INT,
valor DECIMAL(10,2),
CONSTRAINT fk_livro_estilo FOREIGN KEY (id_estilo) REFERENCES estilo(id_estilo),
CONSTRAINT fk_livro_autor FOREIGN KEY (id_autor) REFERENCES autor(id_autor),
CONSTRAINT fk_livro_editora FOREIGN KEY (id_editora) REFERENCES editora(id_editora)
);

INSERT INTO editora VALUES
(1,'Abril','12334567'),
(2,'Globo','123345'),
(3,'Saraiva','1233451212'),
(4,'BBBBB','123345'),
(5,'CCCC','12334521312'),
(6,'EEEE','12334521312'),
(7,'FFF','12334521312'),
(8,'GGGG','12334521312');

INSERT INTO autor VALUES
(1,'Paulo Coelho',70,120.3),
(2,'Agatha Christie',50,120.3),
(3,'J K Rowling',70,120.3),
(4,'Dan Brown',35,120.3),
(5,'J R R Tolkien',70,120.3),
(6,'João Abreu',25,5.3);

INSERT INTO estilo VALUES
(1,'Comédia'),
(2,'Drama'),
(3,'Ficção'),
(4,'Suspense'),
(5,'Romance'),
(6,'Ação'),
(7,'Terror');

INSERT INTO livro VALUES
(1,'Livro - 123',1,1,1,1.5),
(2,'Livro - 234',2,2,2,2.5),
(3,'Livro - 333',3,3,3,5.5),
(4,'Livro - 444',4,4,4,12.5),
(5,'Livro - 555',5,1,2,15.5),
(6,'Livro - 575',5,1,2,20.5),
(7,'Livro - 585',5,1,2,10.5),
(8,'Livro - 666',5,2,3,15.5),
(9,'Livro - 777',5,4,5,20.5);
