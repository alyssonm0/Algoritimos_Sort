# Informações Sobre o Funcionamento do Código

Este código implementa dois algoritmos de ordenação, **Insertion Sort** e **Selection Sort**, que ordenam os elementos de um arquivo de entrada especificado na linha de comando. O código mede o tempo de execução de cada método, salva os resultados ordenados em arquivos separados e exibe no terminal qual dos dois foi mais rápido.

### **Funcionamento do Código**
1. O arquivo de entrada é lido e convertido em um vetor de inteiros.
2. O vetor é ordenado usando os dois algoritmos de ordenação.
3. Os tempos de execução de cada algoritmo são calculados e exibidos no terminal.
4. O resultado de cada ordenação é salvo em arquivos separados:
   - **saida_insertion.txt** para o resultado do Insertion Sort.
   - **saida_selection.txt** para o resultado do Selection Sort.
5. O programa compara os tempos de execução e informa qual dos dois algoritmos foi mais rápido.

---

### **Como Compilar o Código**

1. Certifique-se de que você tem o compilador **g++** instalado em seu sistema.
2. Abra o terminal e navegue até o diretório onde o arquivo do código está salvo.
3. Execute o seguinte comando para compilar o código:
   ```bash
   g++ -std=c++11 -o ordenacao programa.cpp
   ```
   Aqui, `programa.cpp` deve ser substituído pelo nome do arquivo do código.

---

### **Como Rodar o Programa**

1. Após compilar, execute o programa com o comando:
   ```bash
   ./ordenacao <arquivo_de_entrada>
   ```
   Substitua `<arquivo_de_entrada>` pelo caminho para o arquivo que deseja ordenar. Por exemplo:
   ```bash
   ./ordenacao instancias-num/num.1000.1.in
   ```

2. Os arquivos ordenados serão gerados no mesmo diretório do programa com os nomes:
   - `saida_insertion.txt`
   - `saida_selection.txt`

---

### **Observação**
- Caso deseje testar o programa com outro arquivo, basta especificar o caminho do arquivo de entrada ao executar o programa.
- Os demais arquivos de teste estão localizados na pasta `instancias-num`. Certifique-se de apontar corretamente o caminho para o arquivo desejado.

