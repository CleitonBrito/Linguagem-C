# PROBABILIDADE #


## Intersecção ##

Quando falamos em dois eventos ao mesmo tempo devemos lembrar que a intersecção é um valor que está
presente nos dois eventos ao mesmo tempo, e devemos retirar esse valor (subtrair).



#### Exemplo 1 ####

Quando Paulo vai ao futebol, a probabilidade de ele encontrar Ricardo é 0,4; a probabilidade de ele encontrar Fernando é
igual a 0,10; a probabilidade de ele encontar ambos, Ricardo e Fernando, é igual a 0,05. Assim qual é a probabilidade de
Paulo encontrar Ricardo ou Fernando?

````
Chamaremos o evento de Paulo de A, e Fernando de B.

````

R= AUB = (A + B) - A∩B

R= AUB = (0,4 + 0,1) - 0,05

R= 0,45 ou 45%

---

#### Exemplo 2 ####

Quando Lígia para em um posto de gasolina, a probabilidade de ela pedir para verificar o óleo é de 0,28; a probabilidade de 
ela verificar a pressão dos pneus é de 0,11 e a probabilidade de ela verificar ambos, óleo e pneus é de 0, 04.Portanto a probabilidade 
de que Lígia pare num posto de gasolina e não peça para verificar nem óleo e nem pressão dos pneus é igual a:


````
Nessa questão queremos a probabilidade de um evento não acontecer. Usaremos a ideia de COMPLEMENTAR 
para resolver esse problema. Calcularemos a probabilidade do evento acontecer e depois subtraímos por 1, 
o resultado é a probabilidade do evento não acontecer.

Chamaremos o evento verificar o óleo de A, e verificar os pneus de B.

````
R= AUB = (A + B) - A∩B

R= (0,28 + 0,11) - 0,04

R= 0,39 - 0,04

R= 0,35

````
Achamos a probabilidade do evento acontecer. Para acharmos a probabilidade do evento não acontecer
iremos subtrair o valor por 1. Pois a união do evento acontecer mais a probabilidade do evento não
acontecer é 1.

````
R= 0,35 - 1

R= 0,65 ou 65%

---

## Fração ##

Multiplicação e divisão de frações


#### Exemplo 3 ####

Carlos sabe que Ana e Beatriz estão viajando pela Europa. Com as informações que dispõe, ele estima corretamente que a probabilidade de Ana estar hoje em Paris é 3/7, que a probabilidade de Beatriz estar hoje em Paris é 2/7, e que a probabilidade de ambas, Ana e Beatriz, estarem hoje em Paris é 1/7. Carlos então recebe um telefonema de Ana, informando que ela está hoje em Paris. Com a informação recebida pelo telefonema de Ana, Carlos agora estima corretamente que a probabilidade de Beatriz também estar hoje em Paris é igual a:

````
Quando trabalhamos com frações existe a possibilidade de fazer uma multiplicação ou divisão de frações.

Sabemos que A∩B: 1/7
            Ana: 3/7
        Beatriz: 2/7

````

R= A∩B = (Prob_Ana) * (Prob_Beatriz)

R= 1/7 = 3/7 * (Prob_Beatriz)

R= (Prob_Beatriz) = (3/7)/(1/7)

R= (Prob_Beatiz) = 1/3

````
Para realizarmos essa divisão de fração iremos multiplicar o NUMERADOR com o DENOMINADOR da outra.

Original:

1    3
- *  -
7    7 

multiplicando NUMERADOR com o DENOMINADOR da outra:

7    3     21 :3        1
- *  - =   -      ->    -
1    7     7 :3         3

````
---

#### Exemplo 4 ####

Considerando que Ana e Carlos candidataram-se a empregos em uma empresa e sabendo que a probabilidade de Ana
ser contratada é igual a 2/3 e que a probabilidade de ambos serem contratados é 1/6, julgue os itens subsequentes:

1) A probabilidade de Ana ser contratada e de Carlos não ser contratado é igual a 1/2.
2) Se um dos dois for contratado, a probabilidade de que seja Carlos será igual a 1/2.

````
Sabemos que A∩C: 1/6
            Ana: 2/3
           Carlos: ?
````
* Respondendo.. 

A∩C = (Prob_Ana) * (Prob_Carlos)

1/6 = 2/3 * (Prob_Carlos)

(Prob_Carlos) = (1/6)/(2/3)

(Prob_Carlos) = 1/4

````
Para realizarmos essa divisão de fração iremos multiplicar o NUMERADOR com o DENOMINADOR da outra.

Original:

1    2
- *  -
6    3 

multiplicando NUMERADOR com o DENOMINADOR da outra:

1    3     3 :3          1
- *  - =   -        ->   -
6    2     12 :3         4

1                                                                                        3
- é a probabilidade de Carlos ser contratado. A probabilidade dele não ser contratado é  -
4                                                                                        4

````
---

## Tabela ##

Analisando dados a partir de uma tabela

#### Exemplo 5 ####

A tabela ao lado apresenta as frequências acumuladas das idadades de 20 jovens entre 14 e 20 anos. Um desses jovens será
escolhido ao acaso. Qual a probabilidade de que o jovem escolhido tenha __menos de 18 anos__, sabendo que esse jovem terá
__16 anos__ ou mais?

Idade (anos) | Frequência acumulada
-------------|----------------------
14           |          2
15           |          4
16           |          9
17           |          12
18           |          15
19           |          18
20           |          20

````
Para entendermos melhor iremos descobrir quem é a frequência RELATIVA
````

* Tabela com a frequência relativa:

Idade (anos) | Frequência acumulada | Frequencia relativa
-------------|----------------------|---------------------
14           |          2           |           2
15           |          4           |           2
__16 <-__    |          9           |         __5 <-__
__17 <-__    |          12          |         __3 <-__
18           |          15          |           3
19           |          18          |           3
20           |          20          |           2

````
Perceba que já identificamos quem são os dados que nos interessam para resolver a questão, indicado com o "<-" 
do lado.

Ao todo temos:

5 pessoas com 16 anos
3 pessoas com 17 anos

Ou seja, total de 8 pessoas, isso será nossos casos favoráveis.
A questão nos pede que sejam pessoas com 16 anos ou mais, então nossos casos possíveis será 16

````
* Respondendo...

R= 8/16

R= 0,5 ou 50%
