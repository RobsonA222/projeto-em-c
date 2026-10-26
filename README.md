#  Projeto em C — Estudos e Exercícios de Programação

Repositório com os programas desenvolvidos durante meu aprendizado da **linguagem C**, organizados por aula, do clássico *Hello World* até vetores, matrizes, manipulação de arquivos e pequenos projetos aplicados (hospedagem, evento gamer e missão orbital).

![Linguagem](https://img.shields.io/badge/linguagem-C-00599C?logo=c&logoColor=white)
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

Este repositório reúne os exercícios e projetos feitos em aula e por conta própria, com o objetivo de praticar a lógica de programação e os fundamentos da linguagem C. Todos os programas rodam no terminal e interagem com o usuário via `printf` e `scanf`. A partir da Aula 9, os programas também passam a ler e gravar dados em arquivos de texto.

##  Estrutura do repositório

```
PROJETO_EM_C/
├── AULA_1_C/
├── AULA_2_C/
├── AULA_3_C/
├── AULA_4_C/
├── AULA_5_C/
├── AULA_6_C/
├── AULA_7_C/
├── AULA_8_C/
├── AULA_9_C/
├── PROJETO_HOSPEDAGEM/
├── PROJETO_ARENA TECH/
├── projeto_missao_orbital/
├── PROJETO_ECOCAMPUS/
```

## 📚 Conteúdo por aula

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
| **9** | Arquivos de texto | `exemplo-de-aula01-tabuada.c` (grava a tabuada em `tabuada.txt`), `exemplo-de-aula02-consumo.c` (cadastra consumo diário em `consumo.txt`), `exemplo-de-aula03-consulta-tabuada.c` (lê e exibe o conteúdo de `tabuada.txt`) |

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

###  Arquivos de Texto (Aula 9)
Primeiro contato com persistência de dados: os programas deixam de apenas exibir resultados no terminal e passam a **gravar e ler arquivos `.txt`** com a biblioteca `stdio.h`.

| Programa | Modo | O que faz |
|----------|------|-----------|
| `exemplo-de-aula01-tabuada.c` | `"w"` (escrita) | Pede um número inteiro e grava a tabuada de 0 a 10 em `tabuada.txt` |
| `exemplo-de-aula02-consumo.c` | `"a"` (acrescentar) | Cadastra vários registros (dia e consumo) e os adiciona ao final de `consumo.txt` sem apagar o conteúdo anterior |
| `exemplo-de-aula03-consulta-tabuada.c` | `"r"` (leitura) | Lê `tabuada.txt` linha a linha com `fgets()` e exibe o conteúdo na tela |

Pontos trabalhados: ponteiro `FILE *`, `fopen()`, `fclose()`, `fprintf()`, `fgets()`, verificação de erro (`arquivo == NULL`) e os modos de abertura de arquivo. Execute primeiro o programa 1 para gerar o `tabuada.txt` antes de rodar o programa 3.

## ⚙️ Como compilar e executar

### Pré-requisitos
- Um compilador C, como o [GCC](https://gcc.gnu.org/)
  - **Windows:** instale o [MinGW](https://www.mingw-w64.org/) ou use o [Code::Blocks](https://www.codeblocks.org/)
  - **Linux:** `sudo apt install build-essential`
  - **macOS:** `xcode-select --install`

### Passo a passo

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

>  Os programas da **Aula 9** criam e leem arquivos `.txt` na pasta de onde são executados. Rode-os a partir da mesma pasta:
>
> ```bash
> cd AULA_9_C
> gcc exemplo-de-aula01-tabuada.c -o tabuada && ./tabuada
> gcc exemplo-de-aula03-consulta-tabuada.c -o consulta && ./consulta
> ```

>  O projeto **Arena Tech** usa a biblioteca `math.h`. Em alguns sistemas Linux, compile com a flag `-lm`:
>
> ```bash
> gcc "PROJETO_ARENA TECH/projeto_arenatech_c.c" -o arena_tech -lm
> ```

##  Conceitos praticados

- Estrutura básica de um programa em C (`main`, `#include`)
- Tipos de dados: `int`, `float`, `double`, `char` e strings
- Entrada e saída: `printf` e `scanf`
- Operadores aritméticos, relacionais e lógicos
- Estruturas condicionais: `if`, `else if`, `else` e `switch/case`
- Laços de repetição: `for`, `while` e `do-while`
- Validação de entrada de dados
- Vetores (arrays) e matrizes
- Biblioteca `math.h`
- Manipulação de arquivos de texto: `FILE *`, `fopen`, `fclose`, `fprintf` e `fgets`

##  Autor

Feito por **Robson de Araújo Andrade** — [GitHub](https://github.com/SEU-USUARIO) · [LinkedIn](https://linkedin.com/in/SEU-PERFIL)

---

⭐ Se este repositório te ajudou de alguma forma, deixe uma estrela!
