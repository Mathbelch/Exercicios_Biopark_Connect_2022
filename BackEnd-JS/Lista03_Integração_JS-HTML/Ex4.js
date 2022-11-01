let cpf;
let validacao = document.getElementById("validacao");

function checarCpf() {
    cpf = document.getElementById("cpf");
    if (cpf.value.length === 11)
    {
        if(confirm(`Confirme o cpf informado: ${cpf.value}`))
        {
            validacao.innerText = "CPF válido."
        }
        else
        {
            validacao.innerText = "Operação cancelada."
        }
    }
    else  
    {
        alert("CPF INVÁLIDO!");
        if (cpf.value.length < 11)
        {
            validacao.innerText = "CPF informado possui menos de 11 dígitos."
        }
        else 
        {
            validacao.innerText = "CPF informado possui mais de 11 dígitos."
        }
    }
}

