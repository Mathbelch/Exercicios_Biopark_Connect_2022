create database controledelivrosFinal;
use controledelivrosFinal;

create table autor(
id_autor int primary key,
nome varchar(50) not null,
idade int,
valor_hr decimal(10,2) not null
);

create table editora(
id_editora int primary key,
nome varchar(50) not null,
telefone varchar(12)
);

create table estilo(
id_estilo int primary key,
nome varchar(50) not null
);

create table livro(
id_livro int primary key,
titulo varchar(50) not null,
id_editora int not null,
valor decimal(10,2),
constraint fk_livro_editora foreign key (id_editora) references editora(id_editora)
);

create table livro_autor(
	id_autor int not null,
    id_livro int not null,
    primary key(id_autor,id_livro),
    foreign key (id_autor) references autor(id_autor),
    foreign key (id_livro) references livro(id_livro)
);

create table livro_estilo(
	id_estilo int not null,
    id_livro int not null,
    primary key(id_estilo,id_livro),
    foreign key (id_livro) references livro(id_livro),
    foreign key (id_estilo) references estilo(id_estilo)
);

insert into editora values
(1,'Abril','12334567'),
(2,'Globo','123345'),
(3,'Saraiva','1233451212'),
(4,'BBBBB','123345'),
(5,'CCCC','12334521312'),
(6,'EEEE','12334521312'),
(7,'FFF','12334521312'),
(8,'GGGG','12334521312');

insert into autor values
(1,'Paulo Coelho',70,120.3),
(2,'Agatha Christie',50,120.3),
(3,'J K Rowling',70,120.3),
(4,'Dan Brown',35,120.3),
(5,'J R R Tolkien',70,120.3),
(6,'João Abreu',25,5.3),
(7,'Pedro Maria',35,20.3);

insert into estilo values
(1,'Comédia'),
(2,'Drama'),
(3,'Ficção'),
(4,'Suspense'),
(5,'Romance'),
(6,'Ação'),
(7,'Terror');

insert into livro values
(1,'Livro - 123',1,1.5),
(2,'Livro - 234',2,2.5),
(3,'Livro - 333',3,5.5),
(4,'Livro - 444',4,12.5),
(5,'Livro - 555',5,15.5),
(6,'Livro - 566',5,20.5),
(7,'Livro - 544',5,10.5),
(8,'Livro - 666',5,15.5),
(9,'Livro - 777',5,20.5);

insert into livro_autor values
(1,1),
(2,2),
(3,3),
(4,4),
(5,5),
(2,6),
(5,7),
(5,8),
(5,9);

insert into livro_estilo values
(1,1),
(2,2),
(3,3),
(4,4),
(5,5),
(5,6),
(2,7),
(2,8),
(2,9);


-- EX.01:
SELECT l.titulo, ed.nome, es.nome, a.nome
FROM livro AS l 
INNER JOIN editora AS ed ON ed.id_editora = l.id_editora
INNER JOIN livro_estilo AS LE ON l.id_livro = LE.id_livro
INNER JOIN estilo AS es ON es.id_estilo = LE.id_estilo
INNER JOIN livro_autor AS LA ON LA.id_livro = l.id_livro
INNER JOIN autor AS a ON a.id_autor = LA.id_autor;

-- EX.02:
SELECT l.titulo, ed.nome AS editora
FROM livro AS l 
INNER JOIN editora AS ed ON ed.id_editora = l.id_editora
WHERE ed.telefone = 123345;

-- EX.03:
SELECT l.titulo, a.nome AS autor
FROM livro AS l 
INNER JOIN livro_autor AS LA ON LA.id_livro = l.id_livro
INNER JOIN autor AS a ON a.id_autor = LA.id_autor
WHERE a.idade = 35;

-- EX.04:
SELECT l.titulo, a.nome AS autor, ed.nome AS editora
FROM livro AS l 
INNER JOIN editora AS ed ON ed.id_editora = l.id_editora
INNER JOIN livro_autor AS LA ON LA.id_livro = l.id_livro
INNER JOIN autor AS a ON a.id_autor = LA.id_autor
WHERE a.nome LIKE 'Dan Brown';

-- EX:05:
SELECT l.titulo, a.nome AS autor, ed.nome AS editora
FROM livro AS l 
INNER JOIN editora AS ed ON ed.id_editora = l.id_editora
INNER JOIN livro_autor AS LA ON LA.id_livro = l.id_livro
INNER JOIN autor AS a ON a.id_autor = LA.id_autor
WHERE a.nome LIKE 'Dan Brown' AND a.idade = 35;

-- EX.06:
SELECT l.titulo, a.nome AS autor, ed.nome AS editora
FROM livro AS l 
INNER JOIN editora AS ed ON ed.id_editora = l.id_editora
INNER JOIN livro_autor AS LA ON LA.id_livro = l.id_livro
INNER JOIN autor AS a ON a.id_autor = LA.id_autor
WHERE a.nome LIKE 'Dan Brown' AND ed.telefone = 123345;

-- EX.07:
SELECT l.titulo, es.nome AS estilo
FROM livro AS l 
INNER JOIN livro_estilo AS LE ON l.id_livro = LE.id_livro
INNER JOIN estilo AS es ON es.id_estilo = LE.id_estilo
WHERE es.nome LIKE 'Romance';

-- EX.08:
SELECT l.titulo, es.nome AS estilo
FROM livro AS l 
INNER JOIN livro_estilo AS LE ON l.id_livro = LE.id_livro
INNER JOIN estilo AS es ON es.id_estilo = LE.id_estilo
INNER JOIN editora AS ed ON ed.id_editora = l.id_editora
WHERE ed.nome LIKE 'Globo';

-- EX.09:
SELECT l.titulo, l.valor  
FROM livro AS l
WHERE l.valor = (
	SELECT MAX(valor) FROM livro
    );

-- EX.10:
SELECT l.titulo, l.valor
FROM livro AS l
where l.valor = (
	SELECT MIN(valor) FROM livro
    );
    
-- EX.11:
SELECT AVG(valor) FROM livro;

-- EX.12:
SELECT a.nome, AVG(l.valor) AS media_de_custo
FROM livro AS l
INNER JOIN livro_autor AS LA ON LA.id_livro = l.id_livro
INNER JOIN autor AS a ON a.id_autor = LA.id_autor
GROUP BY a.nome;

-- EX.13: 
SELECT COUNT(id_livro) AS numero_de_livros FROM livro;

-- EX.14:
SELECT id_editora, COUNT(id_livro) AS numero_de_livros
FROM livro AS l 
WHERE l.id_editora = 2;

-- Ex.15:
SELECT id_estilo, COUNT(id_livro) AS numero_de_livros
FROM livro_estilo
WHERE id_estilo = 5;

-- EX.16:
SELECT l.titulo, ed.nome AS editora
FROM livro AS l 
INNER JOIN editora AS ed ON ed.id_editora = l.id_editora;

-- EX.17:
SELECT l.titulo, ed.nome AS editora
FROM livro AS l 
INNER JOIN editora AS ed ON ed.id_editora = l.id_editora
WHERE ed.nome LIKE 'a%';

-- EX.18:
SELECT a.nome AS autor
FROM autor AS a
LEFT JOIN livro_autor AS la ON a.id_autor = la.id_autor
WHERE la.id_livro IS NULL;

-- EX.19:
SELECT ed.nome AS editora
FROM editora AS ed 
LEFT JOIN livro AS l ON ed.id_editora = l.id_editora
WHERE l.id_editora IS NULL;

-- EX.20:
SELECT es.nome AS estilo
FROM estilo AS es
LEFT JOIN livro_estilo AS le ON es.id_estilo = le.id_estilo
WHERE le.id_estilo IS NULL;

-- EX.21: 
SELECT a.nome AS autor, COUNT(la.id_livro) AS qtd_livros
FROM autor as a
INNER JOIN livro_autor AS la ON la.id_autor = a.id_autor
GROUP BY a.nome;

-- EX.22:
SELECT ed.nome AS editora, COUNT(l.id_livro) AS qtd_livros
FROM livro AS l
INNER JOIN editora as ed ON ed.id_editora = l.id_editora
GROUP BY ed.nome;

-- EX.23:
SELECT es.nome AS estilo, COUNT(le.id_livro) AS qtd_livros
FROM estilo as es
INNER JOIN livro_estilo AS le ON le.id_estilo = es.id_estilo
GROUP BY es.nome;

-- EX.24:
SELECT ed.nome AS editora, COUNT(livro.id_livro) AS qtd_de_livros
FROM editora AS ed 
INNER JOIN livro ON livro.id_editora = ed.id_editora
WHERE ed.nome LIKE 'CCCC';

-- ex.25:
SELECT a.nome AS autor, COUNT(la.id_livro) AS qtd_de_livros
FROM autor AS a
INNER JOIN livro_autor AS la ON a.id_autor = la.id_autor
WHERE a.nome LIKE 'J R R Tolkien';

