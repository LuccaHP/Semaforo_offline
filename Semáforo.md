# PonderadaFarolOffline

# PonderadaArduino-Semana3
*Ponderada Arduino - Semana 2 (Projeto Farol)*

*Nome:* Andre Dleizer
*Turma:* 12 
*Módulo:* 4 - Engenharia de Computação 

Este exercício consistia em montar e programar um semáforo que garanta a segurança de pedestres e veículos, seguindo a lógica de tempo de cada fase das luzes, desde a montagem dos LEDs até a programação da sequência correta.

#

# Parte 1 - Montagem Física do Semáforo
Nesta etapa, vou deixar uma imagem abaixo representando a construção física do projeto do farol

[Imagem](./imagem.jpg)

[Vídeo do funcionamento](./semaforo.mp4)

Eu utilizei a seguinte lógica na construção:
- Led Verde: 
- Led Amarelo:
- Led Vermelho:
  
Coloquei os resistores para não queimar os leds e utilizei cabos macho-fêmea para conectar os leds dentro do semáforo.

## Especificações dos Componentes Utilizados
Para complementar o entendimento do projeto, abaixo segue a lista dos componentes utilizados e a explicação de cada um deles


| Componente    | Especificação                             | Quantidade | Função                                                       |
|---------------|------------------------------------------|------------|--------------------------------------------------------------|
| Arduino Uno   | Microcontrolador ATmega328P              | 1          | Controla o funcionamento e a lógica do semáforo              |
| Protoboard    | Protoboard padrão                        | 1          | Base para a conexão e organização dos componentes            |
| LED Vermelho  | Tensão: 2V, Corrente: 20mA              | 1          | Representa a fase de "parar" no semáforo                     |
| LED Amarelo   | Tensão: 2V, Corrente: 20mA              | 1          | Representa a fase de "atenção" no semáforo                   |
| LED Verde     | Tensão: 2V, Corrente: 20mA              | 1          | Representa a fase de "seguir" no semáforo                    |
| Resistores    | Ω                                     | 3          | Limitam a corrente para proteger os LEDs                     |
| Cabos Jumper  | Cabos macho-macho                        | 4    | Conectam os componentes ao Arduino e à protoboard            |
| Cabos Jumper  | Cabos macho-femea                        | 6    | Conectam os componentes ao Arduino            |



# Parte 2: Programação e Lógica do Semáforo
Nesta etapa eu realizei o código para o projeto. O código fonte está no repositório e ele segue a seguinte regra para a sequência dos faróis.

[codigo](./semaforo.ino)

- 6 segundos no vermelho
- 2 segundos no amarelo
- 2 segundos no verde
- 2 segundos de pausa para separação de tempo do led verde
- 2 segundos no amarelo

# Parte 3: Avaliação de Pares 

### Tabela de Avaliação entre Pares

#### Avaliador: Lucca Henrique Pereira

|Critério|	Contempla (Pontos)|	Contempla Parcialmente (Pontos)	|Não Contempla (Pontos)	|Observações do Avaliador|
|-|-|-|-|-|
|Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores	|Até 3	|Até 1,5	|0 | Contempla (3 pontos)|	
|Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo	|Até 3	|Até 1,5	|0 | Contempla (3 pontos)|	
|Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) |	Até 3|	Até 1,5 |	0 | Contempla (3 pontos) |	
|Ir além: Implementou um componente de extra, fez com millis() ao invés do delay() e/ou usou ponteiros no código |	Até 1 |	Até 0,5 |	0 | Contempla (1 ponto)|	

### Tabela de Avaliação entre Pares

##### Avaliador: Raul Rezende Szpak

|Critério|	Contempla (Pontos)|	Contempla Parcialmente (Pontos)	|Não Contempla (Pontos)	|Observações do Avaliador|
|-|-|-|-|-|
|Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores	|Até 3	|Até 1,5	|0 | Contempla (3 pontos)|	
|Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo	|Até 3	|Até 1,5	|0 | Contempla (3 pontos)|	
|Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) |	Até 3|	Até 1,5 |	0 | Contempla (3 pontos) |	
|Ir além: Implementou um componente de extra, fez com millis() ao invés do delay() e/ou usou ponteiros no código |	Até 1 |	Até 0,5 |	0 | Contempla (1 ponto)|