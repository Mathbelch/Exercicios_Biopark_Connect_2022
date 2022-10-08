# Exercicios da Lista 3.Comandos DDL e DML!
## Para os exercícios abaixo é necessário desativar o MODO SAFE do MySQL (Edit -> Preferences -> SQL Editor):<br />
<h2><b>Ex.1</b> - Criar o Banco de Dados Controle de livros, adicionando os atributos necessários para as entidades, bem como aplicando os corretos relacionamentos!</h2>
<ul>
<li>Livros;</li>
<li>Editoras;</li>
<li>Autores;</li>
<li>Categoria;</li>
</ul>

**Regras:**
<ul>
<li>Cada Livro pode pertencer apena a uma editora;;</li>
<li>Livros podem possuir mais que um autor;;</li>
<li>Livros podem possuir mais que uma categoria;;</li>
<li>Categorias, autores e editoras podem possuir mais que um livro;</li>
</ul>

**Desenvolver Comandos DML:**
<ul>
<li>2 insert por Tabela</li>
<li>1 Update por Tabela</li>
<li>1 Delete por Tabela</li>
</ul>

<h2><b>Ex.2</b> - Criar o banco de dados Escola, Lembrando de criar chaves primárias e chave estrangeiras, bem como incluindo corretamente os tipos de dados:</h2>
<ul>
<li>Criar a tabela professor;</li>
<li>Criar a tabela aluno;</li>
<li>Criar a tabela turma;</li>
<li>Criar a tabela aula;</li>
</ul>

**Regras:**
<ul>
<li>Aluno pode pertencer somente a uma turma;</li>
<li>Um turma pode ter vários alunos;</li>
<li>Um professor pode pertencer a várias turmas;</li>
<li>Uma turma pode ter vários professores;</li>
<li>Uma aula pode ter somente um professor;</li>
<li>Uma aula pode ter vários alunos;</li>
</ul>

**Desenvolver Comandos DML:**
<ul>
<li>2 insert por Tabela</li>
<li>1 Update por Tabela</li>
<li>1 Delete por Tabela</li>
</ul>
<br />

<h2><b>Ex.3</b> - Utilizar o Banco de Dados escola.sql e análisar o modelo DER para:</h2>
<ol>
 <li>Fazer 5 INSERT INTO em cada Tabela do banco de dados;</li>
 <li>Fazer um UPDATE na tabela instrutores, alterando o nome de um dos instrutores(Filtrar pelo id do instrutor);</li>
 <li>Fazer um UPDATE na tabela instrutores, alterando o e-mail de um dos instrutores(Filtrar pelo nome do instrutor);</li>
 <li>Fazer dois UPDATE na tabela cursos, seguindo a mesma lógica do exercício 2 e 3;</li>
 <li>Fazer dois UPDATE na tabela turmas trocando o instrutor de 2 turmas diferentes;</li>
 <li>fazer 2 DELETE por tabela do banco de dados;</li>
</ol>

<b>Obs: Lembrar sempre de fazer select entre as alterações para verificar se as mesmas aconteceram de maneira correta;</b>

