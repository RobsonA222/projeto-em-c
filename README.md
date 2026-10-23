#  Projeto em C — Estudos e Exercícios de Programação

Repositório com os programas desenvolvidos durante meu aprendizado de programação, organizados por aula: da **linguagem C** (do clássico *Hello World* até vetores, matrizes e pequenos projetos aplicados) ao meu **primeiro contato com desenvolvimento web** (HTML, CSS e JavaScript).

![Linguagem](https://img.shields.io/badge/linguagem-C-00599C?logo=c&logoColor=white)
![Web](https://img.shields.io/badge/web-HTML%20%7C%20CSS%20%7C%20JS-E34F26?logo=html5&logoColor=white)
![Status](https://img.shields.io/badge/status-em%20estudo-yellow)
![Licença](https://img.shields.io/badge/licença-MIT-green)

---

##  Sumário

- [Sobre o projeto](#-sobre-o-projeto)
- [Estrutura do repositório](#-estrutura-do-repositório)
- [Conteúdo por aula](#-conteúdo-por-aula)
- [Projetos de destaque](#-projetos-de-destaque)
- [Como compilar e executar](#-como-compilar-e-executar)
- [Conceitos praticados](#-conceitos-praticados)
- [Autor](#-autor)

---

##  Sobre o projeto

Este repositório reúne os exercícios e projetos feitos em aula e por conta própria, com o objetivo de praticar a lógica de programação e os fundamentos da linguagem C. Os programas em C rodam no terminal e interagem com o usuário via `printf` e `scanf`. A partir da Aula 9, o repositório também inclui exemplos de páginas web que rodam direto no navegador.

##  Estrutura do repositório

```
PROJETO_EM_C/
├── AULA_1_C/               # Primeiro contato com C
├── AULA_2_C/               # Variáveis e cálculos básicos
├── AULA_3_C/               # Entrada de dados e condicionais simples
├── AULA_4_C/               # Exercícios de aplicação
├── AULA_5_C/               # if / else if e equação do 2º grau
├── AULA_6_C/               # Laços de repetição
├── AULA_7_C/               # Laços com validação de dados
├── AULA_8_C/               # Vetores (arrays) e matrizes
├── AULA_9/                 # Introdução a HTML, CSS e JavaScript
├── PROJETO_HOSPEDAGEM/     # Projeto: cálculo de hospedagem (switch)
├── PROJETO_ARENA TECH/     # Projeto: custos de um evento gamer
└── projeto_missao_orbital/ # Projeto: classificação de cadetes
```

## Conteúdo por aula

| Aula | Tema | Programas |
|------|------|-----------|
| **1** | Introdução | `projeto_hello_world_c.c` — primeiro programa em C |
| **2** | Variáveis e operações | `projeto_cafe_c.c` (total da compra de café), `projeto_raio_area_c.c` (área do círculo), `projeto_rgm_c.c` (dados e média do aluno) |
| **3** | Entrada de dados e `if` | `projeto_2_ola_mundo_c.c`, `projeto_idade_c.c` (verifica se a idade é permitida), `projeto_raio_perimetro_c.c` (perímetro da circunferência) |
| **4** | Exercícios de aplicação | Controle de estoque, conversão de horas em minutos, consumo de potência de equipamentos, cálculo de IMC e cálculo de caixas de piso para uma loja |
| **5** | Estruturas condicionais | `aula_dia_14_media_else_if_c.c` (média e aprovação), `aula_dia_14_eq2grau_c.c` (equação do 2º grau) |
| **6** | Laços de repetição | Frequência e notas, soma de pontos por rodada (`while`), cadastro de equipe com validação, tabuada |
| **7** | Laços com validação | Compra com CPF e preços até digitar `0` (`exemplo_de_aula01.c`), cadastro de notas de alunos com validação (`exemplo_de_aula02.c`) |
| **8** | Vetores e matrizes | `array.c`, salários de funcionários, valores acima da média, matriz de vendas |
| **9** | Introdução à web (HTML, CSS e JS) | `exemplo-de-aula01-alerta.html` (JavaScript incorporado na página), `exemplo-de-aula02-calc.html` + `estilo.css` + `script.js` (calculadora de operações) |

##  Projetos de destaque

###  Projeto Hospedagem
Calcula o valor total de uma hospedagem a partir do tipo de quarto e da quantidade de diárias, usando `switch/case`.

| Tipo | Código | Diária |
|------|--------|--------|
| Solteiro | `S` | R$ 300,00 |
| Duplo | `D` | R$ 450,00 |
| Triplo | `T` | R$ 500,00 |

Aceita letras maiúsculas e minúsculas e encerra com erro caso o tipo seja inválido.

###  Projeto Arena Tech
Gera um relatório de custos para um evento de games. A partir de participantes, jogadores por time, computadores, potência, duração e preços, o programa calcula:

- Quantidade de times (arredondada para cima com `ceil()`)
- Consumo de energia (kWh) e seu custo
- Custo de alimentação
- Custo total do evento e custo médio por participante

### 🛰️ Missão Orbital
Sistema de avaliação de cadetes. Para cada cadete, são lidas 3 pontuações (0 a 100, com validação), e o programa calcula total e média, classificando o resultado:

| Média | Classificação |
|-------|---------------|
| ≥ 85 | Comandante da Missão |
| ≥ 70 | Piloto Aprovado |
| ≥ 50 | Cadete em Recuperação |
| < 50 | Treinamento Reiniciado |

O programa usa `do-while` para permitir avaliar vários cadetes em sequência.

###  Calculadora de Operações (Web)
Primeiro projeto fora do terminal: uma página web com formulário que realiza as quatro operações básicas. O usuário informa dois valores, escolhe a operação (soma, subtração, multiplicação ou divisão) e clica em **Calcular** para ver o resultado.

- **HTML** — estrutura do formulário com campos numéricos (`input type="number"`), botões de rádio e campo de resultado somente leitura
- **CSS** — layout com `grid` e `flexbox`, borda dupla, cores em tons de verde e efeito `hover` no botão
- **JavaScript** — captura do clique com `addEventListener`, validação (exige os dois valores e uma operação selecionada, com `alert` em caso de erro) e cálculo com `switch/case`

O arquivo `exemplo-de-aula01-alerta.html` complementa a aula mostrando como incorporar JavaScript direto no HTML, com `alert()` no cabeçalho e `document.write()` no corpo da página.

## ⚙️ Como compilar e executar

### Programas em C

#### Pré-requisitos
- Um compilador C, como o [GCC](https://gcc.gnu.org/)
  - **Windows:** instale o [MinGW](https://www.mingw-w64.org/) ou use o [Code::Blocks](https://www.codeblocks.org/)
  - **Linux:** `sudo apt install build-essential`
  - **macOS:** `xcode-select --install`

#### Passo a passo

```bash
# 1. Clone o repositório
git clone https://github.com/SEU-USUARIO/NOME-DO-REPOSITORIO.git
cd NOME-DO-REPOSITORIO

# 2. Compile um programa (exemplo: Missão Orbital)
gcc projeto_missao_orbital/projeto2_missao_orbital.c -o missao_orbital

# 3. Execute
./missao_orbital          # Linux / macOS
missao_orbital.exe        # Windows
```

>  O projeto **Arena Tech** usa a biblioteca `math.h`. Em alguns sistemas Linux, compile com a flag `-lm`:
>
> ```bash
> gcc "PROJETO_ARENA TECH/projeto_arenatech_c.c" -o arena_tech -lm
> ```

### Páginas web (Aula 9)

Não é preciso instalar nada: basta abrir o arquivo HTML no navegador (duplo clique ou *Abrir com…*). Mantenha `estilo.css` e `script.js` na mesma pasta do `exemplo-de-aula02-calc.html`.

```
AULA_9/exemplo-de-aula02-calc.html
```

##  Conceitos praticados

**Linguagem C**
- Estrutura básica de um programa em C (`main`, `#include`)
- Tipos de dados: `int`, `float`, `double`, `char` e strings
- Entrada e saída: `printf` e `scanf`
- Operadores aritméticos, relacionais e lógicos
- Estruturas condicionais: `if`, `else if`, `else` e `switch/case`
- Laços de repetição: `for`, `while` e `do-while`
- Validação de entrada de dados
- Vetores (arrays) e matrizes
- Biblioteca `math.h`

**Web (HTML, CSS e JavaScript)**
- Estrutura de uma página HTML e formulários
- Estilização com CSS (`grid`, `flexbox`, seletores de classe e de id)
- JavaScript no HTML e em arquivo externo (`<script src>`)
- Manipulação do DOM (`getElementById`, `querySelector`)
- Eventos (`addEventListener`) e validação de campos

##  Autor

Feito por **Robson de Araújo Andrade** — [GitHub](https://github.com/SEU-USUARIO) · [LinkedIn](https://linkedin.com/in/SEU-PERFIL)

---

⭐ Se este repositório te ajudou de alguma forma, deixe uma estrela!
