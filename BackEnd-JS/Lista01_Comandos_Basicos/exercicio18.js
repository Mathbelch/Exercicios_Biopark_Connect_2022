let altura = parseFloat(prompt("Informa a altura do trapézio (em m): "));
let base1 = parseFloat(prompt("Informa uma das bases do trapézio (em m): "));
let base2 = parseFloat(prompt("Informa a outra base do trapézio (em m): "));

area = (((base1 + base2) * altura) / 2).toFixed(2);

alert("Dados:\n- Altura = " + altura.toFixed(2) + " metros;\n- Bases: " + base1.toFixed(2) + " metros ; " + base2.toFixed(2) + " metros.\n\n Área = " + area + " metros!");