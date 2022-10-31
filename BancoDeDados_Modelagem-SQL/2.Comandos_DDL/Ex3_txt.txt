CREATE DATABASE revendedora_carros;
USE revendedora_carros;

CREATE TABLE automovel(
	id_veiculo SMALLINT PRIMARY KEY,
	codigo_renavam INT NOT NULL UNIQUE,
    placa CHAR(7) NOT NULL UNIQUE,
    marca VARCHAR(20) NOT NULL,
    modelo VARCHAR(20) NOT NULL,
    ano_fabricacao YEAR NOT NULL,
    ano_modelo YEAR NOT NULL,
    cor VARCHAR(20) NOT NULL,
    motor VARCHAR(5) NOT NULL,
    numero_portas SMALLINT NOT NULL,
    tipo_combustivel VARCHAR(20) NOT NULL,
    preco DECIMAL(10,2) NOT NULL
);

CREATE TABLE clientes(
	id_cliente SMALLINT PRIMARY KEY,
    nome VARCHAR(20) NOT NULL,
    sobrenome VARCHAR(20) NOT NULL,
    telefone INT NOT NULL,
    end_rua VARCHAR(20) NOT NULL,
    end_numero SMALLINT NOT NULL,
    end_complemento VARCHAR(10),
    end_bairro VARCHAR(20) NOT NULL,
    end_cidade VARCHAR(20) NOT NULL,
    end_estado VARCHAR(20) NOT NULL,
    end_cep INT NOT NULL
);

CREATE TABLE vendedores(
	id_vendedor SMALLINT PRIMARY KEY,
    nome VARCHAR(20) NOT NULL,
    sobrenome VARCHAR(20) NOT NULL,
    telefone INT NOT NULL,
	end_rua VARCHAR(20) NOT NULL,
    end_numero SMALLINT NOT NULL,
    end_complemento VARCHAR(10),
    end_bairro VARCHAR(20) NOT NULL,
    end_cidade VARCHAR(20) NOT NULL,
    end_estado VARCHAR(20) NOT NULL,
    end_cep INT NOT NULL,
    data_admissao DATE NOT NULL,
    salario_fixo DECIMAL(10,2) NOT NULL
);

CREATE TABLE negocio(
	data_negocio DATE NOT NULL,
    peco_pago DECIMAL(10,2) NOT NULL,
    id_cliente SMALLINT NOT NULL,
    id_vendedor SMALLINT NOT NULL,
    id_veiculo SMALLINT NOT NULL,
    CONSTRAINT fk_negocio_cliente FOREIGN KEY (id_cliente) REFERENCES clientes (id_cliente),
    CONSTRAINT fk_negocio_vendedor FOREIGN KEY (id_vendedor) REFERENCES vendedores (id_vendedor),
    CONSTRAINT fk_negocio_veiculo FOREIGN KEY (id_veiculo) REFERENCES automovel (id_veiculo)
    );