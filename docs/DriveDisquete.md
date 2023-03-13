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
 1. Selecionar Densidade. (Não usado aparentemente, [leia esse parágrafo](https://github.com/thiago1255/FDDA/edit/main/docs/DriveDisquete.md#densidade).)
 2. Uso customizado pelo drive. (Reservado, não usar ou ligar no GND).
 3. Uso customizado pelo drive. (Reservado, não usar ou ligar no GND).
 4. Inicio da faixa, manda um pulso 0 volts a cada vez queuma rotação é iniciada.
 5. Usado pela placa mãe, não pelo drive. (GND ?)
 6. Ativa o drive quando em 0 volts.
 7. Usado pela placa mãe, não pelo drive. (GND ?)
 8. Liga o motor de rotação do disco quando em 0 volts.
 9. Direção do motor da cabeça de leitura: 0v para dentro do disco, 5v para fora do disco.
 10. Muda de faixa a cada pulso de 0v, direção baseada no pino 9.
 11. Grava dados. (MAIS INFORMAÇÕES SÃO NECESSÁRIAS)
 12. Ativar gravação ou apagar dados? (MAIS INFORMAÇÕES SÃO NECESSÁRIAS)
 13. Manda sinal de 0v quando na faixa mais externa do disco.
 14. Indica que o disco tem [proteção contra gravação](https://github.com/thiago1255/FDDA/edit/main/docs/DriveDisquete.md#anti-grava%C3%A7%C3%A3o). (MAIS INFORMAÇÕES SÃO NECESSÁRIAS)
 15. Leitura dos dados do disco. (MAIS INFORMAÇÕES SÃO NECESSÁRIAS)
 16. Seleciona o lado do disco para gravar/ler. (MAIS INFORMAÇÕES SÃO NECESSÁRIAS)
 17. Indica que um disco foi colocado. (MAIS INFORMAÇÕES SÃO NECESSÁRIAS)
# Estrutura do disco:
## Furos:
### Anti-gravação:
### Densidade:
