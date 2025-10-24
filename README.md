# ⏰ Relógio Digital ASCII em C++

Este é um projeto acadêmico para a disciplina de [Nome da Disciplina], do curso Técnico em Telecomunicações do IFCE. O objetivo é criar um relógio digital funcional em C++, que roda no terminal e simula um display de 7 segmentos usando arte ASCII.

## 🚀 Demonstração

(Aqui você pode adicionar um GIF ou um *screenshot* do relógio funcionando!)

`[Insira um GIF ou Screenshot do seu relógio em execução aqui]`

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

## ✨ Funcionalidades Principais

* **Relógio Automático:** Busca a hora atual do sistema operacional e a exibe.
* **Display ASCII:** Utiliza uma matriz de strings para "desenhar" os números de 0 a 9, simulando um display de 7 segmentos.
* **Atualização Real-Time:** O relógio atualiza a cada segundo (usando `Sleep()` no Windows ou `sleep_for()` no C++11).
* **Código Modular:** O projeto utiliza funções (`mostrar_display_ascii`) e estruturas (`struct Tempo`) para organizar o código, conforme solicitado nos requisitos.

## 🛠️ Tecnologias Utilizadas

* **C++**
* **Biblioteca Padrão:**
    * `<iostream>` e `<string>` (para E/S e texto)
    * `<ctime>` (para buscar a hora do sistema)
    * `<windows.h>` (para a função `Sleep` na versão Windows)
    * *(Alternativa C++11: `<chrono>` e `<thread>`)*

## 🏃‍♂️ Como Compilar e Rodar

Você precisará de um compilador C++ (como o `g++` do MinGW no Windows).

1.  **Clone este repositório:**
    ```bash
    git clone [https://github.com/seu-usuario/nome-do-repositorio.git](https://github.com/seu-usuario/nome-do-repositorio.git)
    cd nome-do-repositorio
    ```

2.  **Compile o arquivo:**

    *Se estiver usando a versão com `#include <windows.h>` (recomendado para MinGW):*
    ```bash
    g++ relogio_digital.cpp -o relogio.exe
    ```

    *Se estiver usando a versão C++11 (com `<thread>` e `<chrono>`):*
    ```bash
    g++ relogio_digital.cpp -o relogio.exe -std=c++11 -lpthread
    ```

3.  **Execute o programa:**
    ```bash
    .\relogio.exe
    ```

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

**Entregáveis:**
* [x] **Código-fonte:** `relogio_digital.cpp`
* [ ] **Diagrama de estados:** FSM com 3 estados e transições
* [x] **README.md:** Documentação com instruções de uso
* [ ] **Vídeo:** Demonstração (1 minuto)
* [ ] **Relatório:** Explicação do uso de `struct` e funções

## 👤 Autor

* **[SEU NOME AQUI]**
* **Email:** [seu-email@exemplo.com]
* **Curso:** Técnico em Telecomunicações - IFCE
