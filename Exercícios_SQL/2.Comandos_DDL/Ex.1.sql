CREATE DATABASE clinica;
USE clinica;

CREATE TABLE medicos(
	id_medico SMALLINT PRIMARY KEY,
	crm VARCHAR(15) UNIQUE NOT NULL,
    nome VARCHAR(40) NOT NULL,
    idade INT,
    especialidade CHAR (20) NOT NULL DEFAULT 'Ortopedia',
    cpf VARCHAR(15) UNIQUE NOT NULL,
    data_admissao DATE,
    CHECK (idade>23)
);

CREATE TABLE pacientes(
	id_paciente SMALLINT PRIMARY KEY,
	rg VARCHAR(15) UNIQUE NOT NULL,
    nome VARCHAR(40) NOT NULL,
    data_nascimento DATE,
    cidade CHAR(30) DEFAULT 'Itabuna',
    doenca VARCHAR(40) NOT NULL,
    plano_saude VARCHAR(40) NOT NULL DEFAULT 'SUS'
);

CREATE TABLE funcionarios(
	matricula VARCHAR(15) UNIQUE NOT NULL,
    nome VARCHAR(40) NOT NULL,
    data_nascimento DATE NOT NULL,
    data_admissao DATE NOT NULL,
    cargo VARCHAR(40) NOT NULL DEFAULT 'assistente medico',
    salario FLOAT NOT NULL DEFAULT '510'
);

CREATE TABLE sala(
	id_sala SMALLINT PRIMARY KEY,
	numero_sala INT UNIQUE NOT NULL,
    andar INT UNIQUE NOT NULL,
    id_medico SMALLINT NOT NULL, 
    CHECK (numero_sala>1 AND numero_sala<50),
    CHECK (andar<12),
    CONSTRAINT fk_medico_sala FOREIGN KEY (id_medico) REFERENCES medicos(id_medico)
);

    
CREATE TABLE consultas(
	codigo_consulta INT PRIMARY KEY,
    data_horario DATETIME,
    id_medico SMALLINT NOT NULL,
    id_paciente SMALLINT NOT NULL,
    CONSTRAINT fk_consulta_medico FOREIGN KEY (id_medico) REFERENCES medicos (id_medico),
    CONSTRAINT fk_consulta_paciente FOREIGN KEY (id_paciente) REFERENCES pacientes (id_paciente)
);


    

    

    
    
    
    