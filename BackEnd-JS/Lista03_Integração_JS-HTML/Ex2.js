let nome;
let texto = document.getElementById("texto");
function mostrarNome() {
    nome = prompt("Insira seu nome");
    texto.innerText = `Tenha um bom dia, sr(a) ${nome}`;
}