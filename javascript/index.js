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