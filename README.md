# ⏰ Relógio Digital ASCII em C++


## 🚀 Demonstração

**Exemplo de Saída no Terminal:**
```text
--- Meu Relógio Automático ---
 _     _       _     _       _     _
| |   |_|     |_     _|     |_|   | |
|_|   |_|      _|   |_|     |_|   |_|
       :             :
------------------------------
Rodando... (Pressione Ctrl+C para sair)
```

## 🔧 Como o Código Funciona

O projeto é dividido em partes lógicas para atender aos requisitos de modularidade e boas práticas.

### 1. Estrutura `Tempo` (Uso de struct)

Para organizar os dados, foi usada uma `struct` chamada `Tempo`. Isso agrupa as três informações essenciais do relógio em uma única variável, facilitando o gerenciamento.

```cpp
struct Tempo {
    int hora;
    int minuto;
    int segundo;
};
```

### 2. O Display ASCII (Função Modular)

A parte visual do relógio é controlada pela função `mostrar_display_ascii()`. Para criar o efeito de "7 segmentos", foi utilizada uma matriz (`const string display_7seg[10][3]`) que armazena o "desenho" ASCII de cada dígito (0 a 9).

A função `mostrar_display_ascii()` recebe a `struct Tempo` e:
1.  Separa cada dígito (ex: `14` vira `1` e `4`).
2.  Consulta a matriz de desenhos.
3.  Imprime os desenhos linha por linha para formar o relógio completo.

### 3. O Loop Principal (`main`)

O `main` contém o "motor" do relógio. Ele funciona em um loop infinito (`while(true)`) que executa os seguintes passos repetidamente:

1.  **Limpa a Tela:** Usa `system("cls")` (Windows) ou `system("clear")` (Linux/Mac) para apagar o relógio anterior.
2.  **Pega a Hora:** Usa a biblioteca `<ctime>` para buscar a hora atual do sistema operacional.
3.  **Atualiza a Struct:** Os valores de hora, minuto e segundo do sistema são armazenados na variável `tempo_atual`.
4.  **Desenha o Relógio:** Chama a função `mostrar_display_ascii(tempo_atual)`.
5.  **Pausa (Sleep):** O programa pausa por 1 segundo (1000 milissegundos) usando `Sleep(1000)` (via `<windows.h>`) ou `this_thread::sleep_for(chrono::seconds(1))` (via C++11). Isso garante que o relógio só atualize uma vez por segundo.

### 4. Bibliotecas Utilizadas

* **`<iostream>` e `<string>`**: Para E/S (entrada/saída) no console e manipulação dos textos do display.
* **`<ctime>`**: Para buscar a hora local (`time(0)` e `localtime()`).
* **`<windows.h>`**: (Em uma das versões) Fornece a função `Sleep()` para pausar o programa no Windows.
* **`<chrono>` e `<thread>`**: (Na versão C++11) Fornecem uma maneira moderna e portável (`this_thread::sleep_for`) de pausar o programa.

---

## 📝 Contexto da Atividade (Semana 2)

Este projeto foi desenvolvido para atender aos seguintes critérios de avaliação (25 pontos):

| Critério | Pontos | Descrição |
| :--- | :---: | :--- |
| **Funcionalidade** | 10 | Todos os modos funcionam corretamente |
| **Uso de struct** | 4 | Estrutura `Tempo` bem definida e utilizada |
| **Uso de funções** | 4 | Funções modulares e bem organizadas |
| **Diagrama de Estados** | 3 | FSM claro com 3 estados |
| **Documentação** | 3 | Código comentado e README completo |
| **Qualidade** | 1 | Código limpo e profissional |

* **Curso:** Técnico em Telecomunicações - IFCE
