# Exercicios da Lista 5.3: Ponteiros!

**Ex.1** - Faça a alocação dinâmica de um vetor.

**Ex.2** - Faça a alocação dinâmica de uma matriz.

**Ex.3** - Escreva uma função chamada teste que recebe um valor n passado por valor e dois inteiros b e k passados por “referência". Sua função deve retornar em b e k valores tal que b<sup>k</sup> = n e b seja o menor
possível.
                                         
**Ex.4** - Faça uma função chamada primo que recebe como parâmetro um inteiro m e dois outros inteiros p1 e p2 passados por referência. A função deve retornar em p1 o maior número primo que é menor do que m e deve retornar em p2 o menor número primo que é maior do que m.

**Ex.5** - Faça uma função chamada media que recebe um vetor de double, um inteiro n que indica o tamanho do vetor, e um inteiro i passado por referência. A função deve retornar a média dos n elementos no vetor e no inteiro i, passado por referência, deve retornar a posição do elemento que tem o valor mais próximo da média.

**Ex.6** - Suponha que criamos uma estrutura para armazenar produtos de um supermercado, conténdo o nome, preço e quantidade de cada produto. Implemente duas funções, uma que devolve o vetor ordenado por preços e outra que devolve o vetor ordenado pela quantidade de itens no estoque. Funções void ordenaPreco(struct Produto vet[], intn) e void ordenaQuant(struct Produto vet[], int n).

**Ex.7** - Suponha que criamos uma estrutura para armazenar datas, conténdo o dia, mês e ano. Implemente um algoritmo que receba um vetor de Datas como parâmetro e que retorne as datas em
ordem cronológica (crie uma função com cabeçalho: void ordena(struct Data vet[], int tam).
Dica: Ordene o vetor separadamente por cada um dos campos.
