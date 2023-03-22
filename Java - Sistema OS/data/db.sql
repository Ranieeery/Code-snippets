-- CRUD:
-- Create -> CREATE DATABASE/TABLE
-- Read -> SELECT * FROM
-- Update -> UPDATE
-- Delete -> Delete

CREATE DATABASE dbInfo;

USE dbInfo;

CREATE TABLE tbUsers (
  iduser INT PRIMARY KEY AUTO_INCREMENT,
  user VARCHAR(50) NOT NULL,
  phone VARCHAR(15),
  login VARCHAR(15) NOT NULL UNIQUE,
  pass VARCHAR(15) NOT NULL
);

INSERT INTO tbUsers (user, phone, login, pass) 
VALUES ('Eduardo da Silva', '11 1111-1111', 'dusilva', 'dudu123');

INSERT INTO tbUsers (user, phone, login, pass) 
VALUES ('Administrador', '11 9999-9999', 'admin', 'admin');

SELECT * FROM tbUsers;

CREATE TABLE tbClients (
  idcli INT PRIMARY KEY AUTO_INCREMENT,
  namecli VARCHAR(50) NOT NULL,
  enderecocli VARCHAR(150),
  phonecli VARCHAR(15) NOT NULL,
  emailcli VARCHAR(50) NOT NULL
);

DESCRIBE tbClients;

INSERT INTO tbClients (namecli, enderecocli, phonecli, emailcli) 
VALUES ('Pedro Cunha Pereira', 'Rua Aristóteles, 123, Bairro Neverland, São Paulo', '11 99999-9999', 'pedroper@email.com');

CREATE TABLE tbOS (
  os INT PRIMARY KEY AUTO_INCREMENT,
  data_os TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
  equip VARCHAR(150) NOT NULL,
  defeito VARCHAR(150) NOT NULL,
  servico VARCHAR(150),
  tecnico VARCHAR(50),
  value DECIMAL(10,2),
  idcli INT NOT NULL,
  FOREIGN KEY(idcli) REFERENCES tbClients(idcli)
);

INSERT INTO tbOS (equip, defeito, servico, tecnico, value, idcli) 
VALUES ('Notebook Positivo', 'Não liga', 'Troca de PC', 'Victor Antares', 150.00, 1);

SELECT
  O.os,equip,defeito,servico,value,
  C.namecli,phonecli
FROM tbOS as O INNER JOIN tbClients as C
ON (O.idcli = C.idcli);