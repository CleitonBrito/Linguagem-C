# PROBABILIDADE #

## Análise combinatória ##

Ela faz análise das possibilidades e das combinações possíveis entre um conjunto de elementos.

* Fórmula:
````
        n         n!
Prob:      = -----------
        p    (n-p)! * p!
        
````

* Fórmula - Questão de probabilidade
````
       n     k    n-k
Prob:     * p * q
       p
       
p -> Probabilidade do evento acontecer
q -> Probabilidade do evento NÃO acontecer
n -> Número de experiências
k -> Númeor de vezes que o evento ocorrer
````

Quando usar:

* Um elemnto aleatório é repetido (n) vezes
* Qual a probabilidade de um evento (a) acontecer exatamente (k) vezes e (k<=n)


---

#### Exemplo 1 ####

Um casal pretende ter 5 filhos. Qual a probabilidade de exatamente 2 homens?

````
A probabilidade do filho ser homem ou ser melhor é a mesma: 1/2.
````


````
Dica!

Podemos escrever de duas maneiras:

          2         3
5       1         1             5          2       3
   =    -    *    -       ou        =   0,5   * 0,5
2       2         2             2

Forma de fração, ou decimal...
````

* Respondendo...

````
       n     k    n-k
Prob:     * p * q
       p
      
                2         3
      5       1         1
Prob:    =    -    *    -
      2       2         2
      
          5 * 4 * 3!      1       1
Prob:   -------------- *  -   *   -
         (2 * 1) * 3!     4       8
   
        10 :2       5
Prob:   -        =  -
        32 :2       16
      
        5
Prob:   -  ou  0,3125 ou 31,25%
        16
       
````
