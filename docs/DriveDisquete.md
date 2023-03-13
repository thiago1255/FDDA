# Introdução:
 - Neste arquivo, encontra-se as informações do funcionamento para drives de disquete, tais como: Função de cada pino, Codificação dos dados, etc.
# Função dos pinos (Esq. para Dir.):
## Pinos de energia:
 1. +5 Volts.
 2. GND.
 3. GND.
 4. +12 Volts. (Aparentemente desnecessário.)
## Pinos de dados:
### Pinos de baixo:
 1. GND.
 2. Sem pinos.
 3. (até 17) Gnd.
### Pinos de cima:
 1. Selecionar Densidade. (Não usado aparentemente, [leia esse parágrafo](https://github.com/thiago1255/FDDA/blob/main/docs/DriveDisquete.md#densidade).)
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
# Disquete:
## Furos:
### Anti-gravação:
 - Furo do lado esquerdo.
 - Aberto impossibilita gravação.
 - Tem uma aba para abrir/fechar.
### Densidade:
 - Furo do lado direito.
 - Aberto se o disco é de alta densidade.
 - Não mudar.
## Partes metálicas:
### Circulo central:
 - Usado para o motor girar o disco.
### Retângulo superior:
 - Protege o disco.
 - Não abrir, muito menos tocar no disco.
# Sinais de gravação:
