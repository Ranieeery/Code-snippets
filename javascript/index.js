// Estou revendo JS e mesmo eu sabendo o
// conteúdo introdutório estou refazendo
// para ajudar meu irmão que está estudando.

console.log("Hello world");
//--------------------------
let nome = "Carlos";
let idade = 20;
let verdade = false;
let lista = ["ovo", "farinha", "leite", "achocolatado"]; //array
let dados = { nome: "Rafael", idade: 19 }; //objeto

console.log(
  `Idade: ${idade + 1} - 
  Validação: ${verdade} - 
  Lista: ${lista} - \n
  Objeto: ${dados.nome}, ${dados.idade}`
);
console.log(`Nome: ${typeof nome}`);
console.log(typeof Object);
//--------------------------
console.log(("b" + "a" + +"a" + "a").toLowerCase());
//--------------------------
if (idade >= 18) {
  console.log("Maior de idade");
} else {
  console.log("Menor de idade");
}

console.log(idade >= 18 ? "Maior" : "Menor");

console.log("20" == idade);
console.log("20" === idade);

if (idade < 18) {
  console.log("Criança");
} else if (idade >= 18 && idade < 60) {
  console.log("Adulto");
} else {
  console.log("Idoso");
}

console.log(
  idade < 18 ? "Criança" : idade >= 18 && idade < 60 ? "Adulto" : "Idoso"
);
//--------------------------
let profisao = "bombeiro";
let texto;

switch (profisao) {
  case "fiscal":
    texto = "Camisa amarela";
    break;
  case "bombeiro":
    texto = "Camisa vermelha";
    break;
  case "policial":
    texto = "Camisa azul";
    break;
  default:
    texto = "Camisa branca";
    break;
}
console.log(texto);
//--------------------------
function getName() {
  return nome;
}

console.log(getName());

function setName(nome) {
  this.nome = nome;
  return `O nome salvo foi: ${nome}`;
}

console.log(setName(nome));
//--------------------------
const soma = (a, b) => a + b;

function sqrtSoma(a, b) {
  function sqrt(x) {
    return Math.sqrt(x);
  }
  return sqrt(a) + sqrt(b);
}

console.log(sqrtSoma(4, 5));

function sqrtSoma(a, b) {
  const sqrt = (x) => Math.sqrt(x);
  return sqrt(a) + sqrt(b);
}

console.log(sqrtSoma(4, 5));
//--------------------------
console.log(lista[1]);

let lista2 = ["teste", "test", [1, 2]];
console.log(lista2[2]);
console.log(lista2[2][1]);

let ingredientes = ["ovo", "farinha", "leite", "manteiga", "chocolate"];
ingredientes[6] = "fermento";
console.log(ingredientes.length);
console.log(ingredientes);

let ingredientes2 = ["ovo", "farinha", "leite", "manteiga", "chocolate"];
ingredientes2.push("fermento");
console.log(ingredientes2.length);
console.log(ingredientes2);

ingredientes2.pop(); // Remove o último
console.log(ingredientes2);

ingredientes2.shift(); // Remove o primeiro
console.log(ingredientes2);
//--------------------------
let personagem = {
  nome: "Raner",
  classe: "Tiefling",
};

console.log(personagem);
console.log(personagem.classe);
//--------------------------
console.log("Tabuada:");

for (let i = 1; i <= 10; i++) {
  for (let n = 0; n <= 10; n++) {
    console.log(`${i} x ${n} = ${i * n}`);
  }
  console.log("----------------");
}
let diasSemana = [
  "Domingo",
  "Segunda",
  "Terça",
  "Quarta",
  "Quinta",
  "Sexta",
  "Sábado",
];

for (let i = 0; i < diasSemana.length; i++) {
  console.log(diasSemana[i]);
}
console.log("----------------");

for (let i in diasSemana) {
  console.log(diasSemana[i]);
}
console.log("----------------");

for (let dia of diasSemana) {
  console.log(dia);
}
//--------------------------