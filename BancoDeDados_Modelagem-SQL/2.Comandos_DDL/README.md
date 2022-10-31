# Exercicios da Lista 2.Comandos DDL!
**Ex.1** Crie um Banco de Dados com nome CLINICA. A seguir crie as tabelas neste Banco de Dados conforme a relação abaixo:
<br>OBS: DEFINIR AS CHAVES PRIMÁRIAS DE CADA TABELA E AS CHAVES ESTRANGEIRAS NOS RELACIONAMENTOS!<br>
<b>Veja a imagem do diagrama DER do modelo!</b><br>
<ul>
<li>Sala:
<ul type="square">
<li>Numero_Sala: inteiro, único e não nulo. Checar se é maior que 1 e menor que 50;</li>
<li>Andar: inteiro, único e não nulo. Checar se é menor que 12;</li>
</ul>
</li>
<li>Medicos:
<ul type="square">
<li>CRM: varchar (15), único e não nulo;</li>
<li>Nome: varchar (40) e não nulo;</li>
<li>Idade: inteiro e checar se é maior que 23 anos;</li>
<li>Especialidade: char (20), não nulo e valor padrão “Ortopedia”;</li>
<li>CPF: varchar (15), único e não nulo;</li>
<li>Data de admissão: date;</li>
</ul>
</li>
<li>Pacientes:
<ul type="square">
<li>RG: varchar (15), único e não nulo;</li>
<li>Nome: varchar (40) e não nulo;</li>
<li>Data_Nascimento: date;</li>
<li>Cidade: char (30) e valor padrão “Itabuna”;</li>
<li>Doenca: varchar (40), não nulo;</li>
<li>Plano_Saude: varchar (40), não nulo e valor padrão “SUS”;</li>
</ul>
</li>
<li>Funcionarios:
<ul type="square">
<li>Matricula: varchar (15), único e não nulo;</li>
<li>Nome: varchar (40) e não nulo;</li>
<li>Data_Nascimento: date e não nulo;</li>
<li>Data_Admissao: date e não nulaCargo: varchar (40), não nulo e valor padrão “Assistente Médico”;</li>
<li>Salario: float, não nulo e valor padrão R$510,00;</li>
</ul>
</li>
<li>Consultas:
<ul type="square">
<li>Codigo_Consulta: inteiro, único e não nulo;</li>
<li>Data_Horario: datetime;</li>
</ul>
</li>
</ul>

**Ex.2** Crie um Banco de Dados com nome ELEIÇÃO. A seguir  crie as tabelas neste Banco de Dados conforme a relação abaixo:
<br>OBS: DEFINIR AS CHAVES PRIMÁRIAS DE CADA TABELA E AS CHAVES ESTRANGEIRAS NOS RELACIONAMENTOS!<br>
<b>Veja a imagem do diagrama DER do modelo!</b><br>
<ul>
<li>Cargo:
<ul type="square">
<li>Codigo_Cargo: inteiro, único e não nulo;</li>
<li>Nome_Cargo: varchar (30), único e não nulo. Checar se é diferente de “Prefeito” e “Vereador";</li>
<li>Salario: float, não nulo e valor padrão R$17000,00;</li>
<li>Numero_Vagas: inteiro, único e não nulo;</li>
</ul>
</li>
<li>Candidatos:
<ul type="square">
<li>Numero_Candidato: inteiro, único e não nulo;</li>
<li>Nome: varchar (40), único e não nulo;</li>
<li>Codigo_Cargo: inteiro e não nulo;</li>
<li>Codigo_Partido inteiro e não nulo;</li>
</ul>
</li>
<li>Partido:
<ul type="square">
<li>Codigo_Partido: inteiro, único e não nulo;</li>
<li>Sigla: char (5), único e não nulo;</li>
<li>Nome: varchar (40), único e não nulo;</li>
<li>Numero: inteiro, único e não nulo;</li>
</ul>
</li>
<li>Eleitor:
<ul type="square">
<li>Titulo_Eleitor: varchar (30), único e não nulo;</li>
<li>Zona_Eleitoral: char (5) e não nulo;</li>
<li>Sessao_Eleitoral: char (5) e não nulo;</li>
<li>Nome: varchar (40) e não nulo;</li>
</ul>
</li>
<li>Votos:
<ul type="square">
<li>Titulo_Eleitor: varchar (30), único e não nulo;</li>
<li>Numero_Candidato: inteiro e não nulo;</li>
</ul>
</li>
</ul>

**Ex.3** Crie um BD com o nome REVENDEDORA_CARROS de acordo com a descrição indicada. Utilize as regras de restrições (constraints), caso seja necessário:
<br>OBS: DEFINIR AS CHAVES PRIMÁRIAS DE CADA TABELA E AS CHAVES ESTRANGEIRAS NOS RELACIONAMENTOS!<br>
<ul>
<li>Uma revendedora de veículos usados pretende informatizar o seu sistema de vendas, com o intuito de manter um histórico das vendas realizadas.</li>
<li>Cada automóvel é identificado por um código nacional (RENAVAM) e possui as seguintes características: 
<ul type="square">
<li>Placa;</li> 
<li>Marca;</li>
<li>Modelo;</li>
<li>Ano de fabricação;</li>
<li>Ano do modelo;</li>
<li>Cor;</li>
<li>Motor; </li>
<li>Número de portas;</li>
<li>Tipo de combustível;</li>
<li>Preço.</li>
</ul>
</li>
<li>Os clientes, quando são cadastrados na revedendora, são identificados por um <b>código numérico</b>, e devem fornecer:
<ul type="square">
<li>Nome e sobrenome.</li>
<li>Telefone;</li>
<li>Endereço completo (rua, número, complemento, bairro, cidade, estado, CEP);</li>
</ul>
</li>
<li>Também são cadastrados os vendedores, que são identificados por um <b>código numérico</b>, e devem fornecer: 
<ul type="square">
<li>Nome e sobrenome.</li>
<li>Telefone;</li>
<li>Endereço completo (rua, número, complemento, bairro, cidade, estado, CEP);</li>
<li>Data de admissão;</li>
<li>Salário fixo;</li>
</ul>
</li>
<li>Cada negócio efetuado deverá ser registrado com detalhamento de data e preço pago, além da identidade do comprador, do vendedor e do automóvel vendido.
</li>