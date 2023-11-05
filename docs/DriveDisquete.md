# Introdução
 - Neste arquivo, encontra-se as informações do funcionamento para drives de disquete, tais como: Função de cada pino, Codificação dos dados, etc.
 - Também informações dos disquetes MF2-HD (Micro Floppy Double High Density), que é o modelo que eu usarei.
# Função dos pinos (Esq. para Dir.)
## Pinos de energia
 1. +5 Volts.
 2. GND.
 3. GND.
 4. +12 Volts. (Aparentemente desnecessário.)
## Pinos de dados
### Pinos de baixo
 1. GND.
 2. Sem pinos.
 3. (até 17) Gnd.
### Pinos de cima
 1. Selecionar Densidade. (Deixar desconectado, aparentemente não necessário, [leia esse parágrafo](https://github.com/thiago1255/FDDA/blob/main/docs/DriveDisquete.md#densidade).)
 2. Uso customizado pelo drive. (Reservado, não usar ou ligar no GND).
 3. Uso customizado pelo drive. (Reservado, não usar ou ligar no GND).
 4. Inicio da faixa, manda um pulso 0 volts a cada vez queuma rotação é iniciada.
 5. Usado pela placa mãe, não pelo drive. (GND ?)
 6. Ativa o drive quando em 0 volts.
 7. Usado pela placa mãe, não pelo drive. (GND ?)
 8. Liga o motor de rotação do disco quando em 0 volts.
 9. Direção do motor da cabeça de leitura: 0v para dentro do disco, 5v para fora do disco.
 10. Muda de faixa a cada pulso de 0v, direção baseada no pino 9.
 11. [Grava dados.](https://github.com/thiago1255/FDDA/blob/main/docs/DriveDisquete.md#sinais-de-grava%C3%A7%C3%A3o)
 12. Ativar gravação quando em 0v.
 13. Manda sinal de 0v quando na faixa mais externa do disco.
 14. Indica que o disco está [em proteção contra gravação](https://github.com/thiago1255/FDDA/blob/main/docs/DriveDisquete.md#anti-grava%C3%A7%C3%A3o) quando em 0v.
 15. [Leitura dos dados do disco.](https://github.com/thiago1255/FDDA/blob/main/docs/DriveDisquete.md#sinais-de-grava%C3%A7%C3%A3o)
 16. Seleciona o lado do disco para gravar/ler: 5v parte de baixo (lado 0).
 17. Indica que o aparelho está pronto quando em 0v. (Aparentemente é para detectar o disco também.)
# Disquete
## Furos
### Anti-gravação
 - Furo do lado esquerdo.
 - Aberto impossibilita gravação.
 - Tem uma aba para abrir/fechar.
### Densidade
 - Furo do lado direito.
 - Aberto se o disco é de alta densidade.
 - Não mudar.
## Partes metálicas
### Circulo central
 - Usado para o motor girar o disco.
### Retângulo superior:
 - Protege o disco.
 - Não abrir, muito menos tocar no disco.
# Sinais de gravação
  Não vou considerar outros modos de gravação, senão o HD (alta densidade) dos discos 3,5":
  Os discos que tenho tem "80 tracks" o que significa que, há 80 faixas por lado (ou seja, 160 faixas);
  Em muitos lugares é possivel encontrar que eles tem 1.44MB sem formatação e 2MB sem formatação (pois o sistema de arquivos exige espaço para tabelas e etc.), para ter a quantidade correta de bytes (já que há a confusão de 1000 x 1024, entre outras coisas) é melhor calcular:
  - 1 Faixa contém 18 setores;
  - 1 setor contém 512 bytes;
  - Logo **1 faixa contém 9216 bytes**;
  - E multiplicando esse valor por 160 obtemos 1474560 bytes;
  - O que são na verdade 1,4062 MiB ou 1,4746 MB decimais;
  Por enquanto, para calcular os sinais, vamos ignorar a formatação;
  Sendo que em um byte há 8 bits, em uma faixa há 73728 bits; Sabendo isso, vamos para a parte de codificação dos dados, **o MFM***:
   - A transição de nivel (0v para 5v e vice versa) ocorre:
     - No meio para bits 1 (nunca no começo ou fim);
     - Para bits 0, pode não ocorrer (se 1-zero-1), no fim (se 1-zero-0), no começo (se 0-zero-1) ou ambos (se 0-zero-0).
   - O tamanho da faixa é:
     - 0,5 espaço quando um 1 está no meio de dois zeros (ocorre duas vezes no mesmo 1), ou quando um um está começando ou terminando a gravação; 
     - 1 espaço quando um 0 está cercado de outros zeros, ou entre um 1 e outro;
     - 1,5 espaços quando no meio de um 1, um 0 inteiro, e o terceiro digito é um 0 (100); Ou no final de um 0, um 0 inteiro, e o meio de um 1 (001)
     - 2 espaços, entre o meio de um 1, um 0 inteiro e o meio do terceiro 1 (101);
