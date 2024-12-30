# Informações Sobre o Funcionamento do Código

Este código implementa dois algoritmos de ordenação, **Insertion Sort** e **Selection Sort**, que ordenam os elementos de um arquivo de entrada especificado no código. O código mede o tempo de execução de cada método, salva os resultados ordenados em arquivos separados e exibe no terminal qual dos dois foi mais rápido.

### **Funcionamento do Código**
1. O arquivo de entrada é lido e convertido em um vetor de inteiros.
2. O vetor é ordenado usando os dois algoritmos de ordenação.
3. Os tempos de execução de cada algoritmo são calculados e exibidos no terminal.
4. O resultado de cada ordenação é salvo em arquivos separados:
   - **insertion_sorted.txt** para o resultado do Insertion Sort.
   - **selection_sorted.txt** para o resultado do Selection Sort.
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
   ./ordenacao
   ```
2. O programa irá processar o arquivo especificado no código, que é definido na função `main()` (exemplo: `/home/alysson/Documents/Caderias/Estrutura de dados/Algoritomos_de_ordenação/Insertion_Sort/instancias-num/num.1000.1.in`).
3. Os arquivos ordenados serão gerados no mesmo diretório do programa com os nomes:
   - `insertion_sorted.txt`
   - `selection_sorted.txt`

---

### **Observação**
- Caso deseje testar o programa com outro arquivo, basta alterar o nome do arquivo de entrada diretamente no código, na função `read_file()`.
- Os demais arquivos de teste estão localizados na pasta `instancias-num`. Certifique-se de apontar corretamente o caminho para o arquivo desejado.

