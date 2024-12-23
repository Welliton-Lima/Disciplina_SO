# Simulador de Particionamento de Memória RAM

Este projeto é um **simulador de particionamento de memória RAM** desenvolvido em **C++** utilizando a **IDE Qt Creator**. 
le permite simular e visualizar o gerenciamento de memória em diferentes estratégias de alocação, como particionamento fixo e dinâmico, 
com o objetivo de apoiar o aprendizado em **Sistemas Operacionais**.

---

## 🎯 Objetivo do Projeto

O simulador visa demonstrar conceitos fundamentais de gerenciamento de memória, incluindo:

- **Particionamento fixo**: Divisão da memória em blocos de tamanho fixo.
- **Particionamento dinâmico**: Alocação de blocos de tamanhos variáveis.
- **Melhor encaixe (Best Fit)** e **pior encaixe (Worst Fit)** como estratégias de alocação.
- Visualização gráfica do uso da memória e fragmentação interna/externa.

---

## 🛠️ Funcionalidades

- Simulação interativa com entrada de programas de diferentes tamanhos.
- Configuração de parâmetros, como tamanho total da memória e número de partições.
- Representação gráfica da memória RAM e estados de alocação.
- Exibição de fragmentação interna e externa em tempo real.
- Suporte a múltiplos algoritmos de alocação:
  - **First Fit**
  - **Best Fit**
  - **Worst Fit**
- Botões para adicionar/remover processos e reiniciar a simulação.

---

## 🚀 Como executar

### Pré-requisitos

1. **Qt Creator**:
   - Baixe e instale a IDE Qt Creator em [https://www.qt.io/download](https://www.qt.io/download).
   - Certifique-se de que o kit de desenvolvimento Qt está configurado.

2. **Código-fonte**:
   - Clone ou baixe este repositório:
     ```bash
     git clone https://github.com/Welliton-Lima/simulador-particionamento-memoria.git
     ```

---

### Passos para Configurar e Executar

1. Abra o **Qt Creator**.
2. No menu **File**, clique em **Open File or Project** e selecione o arquivo do projeto (`SimuladorParticaoMemoria.pro`).
3. Configure o kit de desenvolvimento (ex.: Desktop Qt x.y.z).
4. Compile e execute o projeto pressionando `Ctrl + R` ou clicando em **Run**.

---

## 📝 Funcionalidades Técnicas

1. **Entrada de Dados**:
   - Tamanho total da memória (ex.: 512MB, 1GB).
   - Número de partições (para particionamento fixo).
   - Tamanhos dos programas a serem alocados.

2. **Representação Gráfica**:
   - Uso de barras para exibir o estado da memória.
   - Fragmentação interna e externa destacada.

3. **Algoritmos de Alocação**:
   - **First Fit**: Aloca o primeiro bloco que for grande o suficiente.
   - **Best Fit**: Encontra o menor bloco suficiente para o programa.
   - **Worst Fit**: Encontra o maior bloco disponível para o programa.

4. **Estatísticas**:
   - Fragmentação interna e externa exibida em tempo real.

