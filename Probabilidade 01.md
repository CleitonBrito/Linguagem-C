# PROBABILIDADE #

Probabilidade é o estudo das chances de obtenção de cada resultado de um experimento aleatório. A chance de um evento ocorrer ou dele não
ocorrer varia ente um intervalo _real_ 0 e 1.

Ou seja: 0 <= P(n) <= 1

P(n) = Probabilidade de um evento

A fórmula da probabilidade consiste nos ___Número de amostras___ e ___Número de casos possíveis___.

![picture alt](http://www.estudokids.com.br/wp-content/uploads/2014/06/f%C3%B3rmula-de-probabilidade-matem%C3%A1tica.jpg "Title is optional")

 Operadores:

* e
* ou

Quando o conectivo for  ___e___ iremos ___Multiplicar___

Quando o conectivo for  ___ou___ iremos ___Somar___

----

## Exemplo 1 ##

Em uma urna existem 4 Bolas __BRANCAS__, e 5 bolas __PRETAS.__ Retira-se 3 bolas com reposição, qual a probabilidade delas serem:

a) Duas brancas e uma preta

b) Duas pretas e uma branca

c) Da mesma cor

```` INTERPRETANDO A QUESTÃO ````

```` 
1 -  Perceba que a questão anuncia que as bolas serão repostas na urna após uma sair. Isso significa que devemos 
manter o Denominador com a mesma quantidade total.

2 - Na questão da letra a e b temos uma condição, mas não exige uma ordem. Perceba que a ordem que as bolas devem 
serem analisadas a questão não exige.

````
* Respondendo...

a) 

```` 
Queremos 2 Brancas e 1 Preta

A ordem em que as bolas podem variar é:

1ª combinação : 	B B P
2ª combinação : 	B P B
3ª combinação : 	P B B

Por isso iremos multiplicar tudo por 3, ou seja, temos três combinações diferentes.

````

Total de bolas: 9

Total de bolas brancas: 4 ou seja 4/9

Total de boas pretas: 5 ou seja 5/9


R = (4/9) * (4/9) * (5/9) * 3

R= 240/729

R= 0,32 ou 32%

b) 

```` 
Queremos 1 Branca e 2 Pretas

A ordem em que as bolas podem variar é:

1ª combinação : 	P P B
2ª combinação : 	P B P
3ª combinação : 	B P P

Por isso iremos multiplicar tudo por 3, ou seja, temos três combinações diferentes.

````

Total de bolas: 9

Total de bolas brancas: 4 ou seja 4/9

Total de boas pretas: 5 ou seja 5/9

R = (5/9) * (5/9) * (4/9) * 3

R= 300/729

R= 0,41 ou 41%

c) 

```` 
Nesse caso queremos todas as bolas da mesma cor.

B B B
P P P

Dessa vez não iremos multiplicar pelo total de combinações, pois queremos a probabilidade de sair todas brancas 
ou todas pretas. Nesse caso faremos uma adição das probabilidades encontradas de cada combinação

````

Probabilidade de todas Brancas

R = (4/9) * (4/9) * (4/9)

R= 64/729

Probabilidade de todas Pretas

R = (5/9) * (5/9) * (5/9)

R= 125/729

Probabilidade das duas da mesma cor

R= (64+125)/729

R= 189/729

R= 0,25 ou 25%

---

## Exemplo 2 ##

Usaremos o mesmo exemplo com a questão 1, letra "a", mas dessa vez sem reposição.

```` 
As combinações são as mesmas. Continuamos com três 3 combinações.

Porém do total de 9 bolas, a cada evento iremos diminuir no denominador a quantidade de bolas que retirarmos, 
dimunuir em seu respectivo numerador.

Se temos 4 bolas brancas (4/9), quando retirarmos uma bola branca a probabilidade será de (3/8).
4 bolas brancas, menos 1.
9 bolas totais menos 1.

````


R = (4/9) * (4/8) * (5/7) * 3

R= 180/504

R= 0,35 ou 35%

