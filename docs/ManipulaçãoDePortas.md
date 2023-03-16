# Introdução:
Nesse arquivo, vou documentar a manipulação de portas para o Arduino Mega 2560 (ou clones/genéricos, como o *hardware* que tenho).
# Lista das portas:
[Aqui está a fonte das seguintes informações.](https://docs.arduino.cc/hacking/hardware/PinMapping2560) ([Havendo porém uma versão ilustrada aqui.](https://web.archive.org/web/20171005020517/http://www.pighixxx.com/test/portfolio-items/mega/))
## Pinos Digítais:
0. PE0
1. PE1
2. PE4
3. PE5
4. PG5
5. PE3
6. PH3
7. PH4
8. PH5
9. PH6
10. PB4
11. PB5
12. PB6
13. PB7
14. PJ1
15. PJ0
16. PH1
17. PH0
18. PD3
19. PD2
20. PD1
21. PD0
22. PA0
23. PA1
24. PA2
25. PA3
26. PA4
27. PA5
28. PA6
29. PA7
30. PC7
31. PC6
32. PC5
33. PC4
34. PC3
35. PC2
36. PC1
37. PC0
38. PD7
39. PG2
40. PG1
41. PG0
42. PL7
43. PL6
44. PL5
45. PL4
46. PL3
47. PL2
48. PL1
49. PL0
50. PB3
51. PB2
52. PB1
53. PB0
## Pinos Analógicos:
0. PF0
1. PF1
2. PF0
3. PF3
4. PF4
5. PF5
6. PF6
7. PF7
8. PK0
9. PK1
10. PK2
11. PK3
12. PK4
13. PK5
14. PK6
15. PK7
## Pinos escolhidos:
Escolhi os pinos 22 ao 29, ou PA0 ao PA7, pois:
- Os registradores e os pinos tem uma sequência. (Diferente por exemplo com os registradores PH.)
- Esses pinos não são usados para mais nada. (Seriais, I²C, SPI, etc.)
- Esses pinos têm localização fácil. (Na maior faixa de conectores, são, indo dos seriais ao analógico, os pares segundo ao quinto.)
# Programação:
## Funções básicas:
### Modo de operação:
```cpp
//Sintaxe: "DDR" + nome do registrador (A, B, C, etc.)
DDRA = B00001111;
/*
B significa byte em binário.
Sendo os 4 primeiros 0, coloca os pinos 29-26 em modo entrada.
Sendo os 4 ultimos 1, coloca os pinos 25-22 em modo saída.
*/
```
### *Digital write*:
```cpp
//Sintaxe: "PORT" + nome do registrador.
PORTA = B00001010;
/*
Sendo os 4 primeiros entrada:
Coloca os pinos 25 e 23 em HIGH;
Coloca os pinos 24 e 22 em LOW;
*/
```
### *Digital read*:
```cpp
//Sintaxe "PIN" + nome do registrador.
byte valores = 0;
valores = PINA;
/*
Cria uma variável qualquer, no caso um byte;
E a coloca com os valores da leitura do mesmo modo que grava-se:
1 se +5v;
0 se 0v.
*/
```
## Usos melhorados:
### *Input pull up*:
Basta colocar a entrada desejada em sinal *HIGH*, após a declaração do modo de operação, não colocar em modo saída.
### Leitura do *PORT*:
É possível ler o valor de "PORT" para saber qual valor foi colocado nos registradores, sem ler as voltagens colocadas nas portas de entrada, tente esse [código](https://github.com/thiago1255/FDDA/blob/main/docs/teste_portas.ino), mas lembre-se de conectar os pinos 2 e 29.
# Coisas a testar antes de terminar:
~~- Leitura do "PORTA" para saber quais valores foram colocados antes.~~
- Velocidade do digitalWrite vs manipulação de porta.
- Velocidade do digitalRead vs manipulação de portas.
