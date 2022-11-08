const idosos = [
    { id: 0, nome: "genoveva", idade: "65", vivo: true },
    { id: 1, nome: "creitons", idade: "58", vivo: true },
    { id: 2, nome: "genival", idade: "81", vivo: false },
    { id: 3, nome: "irineu", idade: "60", vivo: null },
    { id: 4, nome: "iracema", idade: "32", vivo: true },
    { id: 5, nome: "mirileu", idade: "85", vivo: false },
    { id: 6, nome: "virmondo", idade: "123", vivo: true },
    { id: 7, nome: "vinhado", idade: "12", vivo: false },
    { id: 8, nome: "Lindomar", idade: "60", vivo: true },
    { id: 9, nome: "celestino", idade: "68", vivo: true },
    { id: 10, nome: "felisberg", idade: "72", vivo: false },
    { id: 11, nome: "eunice", idade: "67", vivo: true },
    { id: 12, nome: "josefina", idade: "92", vivo: true },
    { id: 13, nome: "virosvaldo", idade: "12", vivo: false },
    { id: 14, nome: "masteromio", idade: "85", vivo: false  }
];

// Ex.1:

let botao = document.getElementById("butt");

function funcao1(){
    console.log("\n\nTODOS OS IDOSOS:");
    idosos.forEach(function(item){
        console.log("nome:"+ item.nome)
       })
};

function funcao2(){
    console.log("\n\nIDOSOS VIVOS:");
    idosos.forEach(function(item){
        if (item.vivo === true){
            console.log("nome:"+ item.nome)
        }
       });
}

function funcao3(){
    console.log("\n\nIDOSOS MORTOS:");
    idosos.forEach(function(item){
        if (item.vivo !== true){
            console.log("nome:"+ item.nome)
        }
       });
}

function funcao4(){
    console.log("\n\nIDOSOS 'JOVENS'':");
    idosos.forEach(function(item){
        if (item.idade < 40){
            console.log("nome:"+ item.nome)
        }
       });
}

// Ex.2:
let divisao = document.getElementById("Ex5");
divisao.innerText = idosos[6].nome;

// Ex.3:
const coisa = document.createElement("coisa");
coisa.innerText = "Elemento criado";
pai1.appendChild(coisa);

// Ex.4:
const coisa2 = document.createElement("coisa2");
pai2.appendChild(coisa2);
coisa2.innerText = `O idoso de nome: ${idosos[7].nome} está com ${idosos[7].idade} anos e a informação se ele está vivo ainda é ${idosos[7].vivo}.`

// Ex.5:
idosos.forEach(function(item){
    const coisa3 = document.createElement("coisa3");
    coisa3.innerText = "> O idoso de nome: " 
    + item.nome + " está com " + item.idade + " anos e a informação se ele está vivo ainda é " + item.vivo + "!\n\n";
    pai3.appendChild(coisa3);
});

// Ex.6:
idosos.forEach(function(item){
    if(item.idade > 60){
        const coisa4 = document.createElement("coisa4");
        coisa4.innerText = "> Nome: " + item.nome + "; Idade: " + item.idade + "; Vivo: " + item.vivo + "!\n\n";
        pai4.appendChild(coisa4);
    }
});

//Ex.7: Ver aquivo lista4.css