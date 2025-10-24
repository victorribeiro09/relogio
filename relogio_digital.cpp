
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <chrono>
#include <thread>

using namespace std;

struct Tempo {
    int hora;
    int minuto;
    int segundo;
};

enum Estado {
    MOSTRAR_HORA,
    AJUSTAR_HORA,
    AJUSTAR_MINUTO
};

const string display_7seg[10][3] = {
    {" _ ", "| |", "|_|"}, // 0
    {"   ", "  |", "  |"}, // 1
    {" _ ", " _|", "|_ "}, // 2
    {" _ ", " _|", " _|"}, // 3
    {"   ", "|_|", "  |"}, // 4
    {" _ ", "|_ ", " _|"}, // 5
    {" _ ", "|_ ", "|_|"}, // 6
    {" _ ", "  |", "  |"}, // 7
    {" _ ", "|_|", "|_|"}, // 8
    {" _ ", "|_|", " _|"}  // 9
};

void mostrar_display_ascii(Tempo t) {
    int h1 = t.hora / 10;
    int h2 = t.hora % 10;
    int m1 = t.minuto / 10;
    int m2 = t.minuto % 10;
    int s1 = t.segundo / 10;
    int s2 = t.segundo % 10;

    int digitos[] = {h1, h2, m1, m2, s1, s2};

    for (int linha = 0; linha < 3; ++linha) {
        cout << display_7seg[digitos[0]][linha] << " " << display_7seg[digitos[1]][linha];
        cout << (linha == 1 ? " : " : "   ");
        cout << display_7seg[digitos[2]][linha] << " " << display_7seg[digitos[3]][linha];
        cout << (linha == 1 ? " : " : "   ");
        cout << display_7seg[digitos[4]][linha] << " " << display_7seg[digitos[5]][linha];
        cout << endl;
    }
}

int main() {
    
    Tempo tempo_atual; 

    while (true) {
        system("clear");

        time_t agora_sistema = time(0);
        tm *tempo_local = localtime(&agora_sistema);

        tempo_atual.hora = tempo_local->tm_hour;
        tempo_atual.minuto = tempo_local->tm_min;
        tempo_atual.segundo = tempo_local->tm_sec;

        cout << "--- Meu Relógio Automático ---" << endl;
        mostrar_display_ascii(tempo_atual);
        cout << "------------------------------" << endl;
        cout << "Rodando... (Pressione Ctrl+C para sair)" << endl;

        this_thread::sleep_for(chrono::seconds(1));
    }

    return 0;
}
