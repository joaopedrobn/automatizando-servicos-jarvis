#include <iostream>
#include <windows.h> //
#include <cstdlib> // Para a função exit
#include <stdexcept> // Para lidar com exceções
// Para a função exit
// Função para mover o mouse para as coordenadas especificadas
void moverMouse(int x, int y) { SetCursorPos(x, y);
}

// Função para realizar um clique na posição atual do mouse
void clicarMouse() {
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
}

// Função para aguardar até que a janela seja ativada
bool aguardarJanelaAtiva() {
    int timeout = 5000; // Tempo limite de espera em milissegundos (aqui é 5 segundos)
    DWORD startTime = GetTickCount();

    while (true) {
        HWND hwndAtiva = GetForegroundWindow();
        if (hwndAtiva != NULL) {
            // Janela ativada, sair do loop
            return true;
        }
        // Verificar se o tempo limite foi atingido
        if (GetTickCount() - startTime > timeout) {
            // Tempo limite atingido, sair do loop
            return false;
        }
        // Aguardar um pequeno intervalo de tempo e verificar novamente
        Sleep(100); // 100 milissegundos (pode ser necessário ajustar esse valor)
    }
}

int main() {
    try {
     // Defina as coordenadas para cada passo
    POINT coordenadasPararIniciar = { 1282, 289 };
    POINT coordenadasServices = { 360, 744 };
    POINT coordenadasReboot = { 153, 151 };
    POINT coordenadasChrome = { 197, 748 };
    //POINT coordenadaexec = {574,745};
   // POINT coordesc = {454, 245};


    // Executar os cliques nos passos sequencialmente
    moverMouse(coordenadasPararIniciar.x, coordenadasPararIniciar.y);
    clicarMouse();
    Sleep(5000);

    moverMouse(coordenadasServices.x, coordenadasServices.y);
    clicarMouse();
    if (!aguardarJanelaAtiva()) {
        std::cout << "Falha ao abrir a janela após o clique em coordenadasServices!" << std::endl;
        return 1; // Encerrar o programa com falha
    }
    clicarMouse();

    Sleep(3000);
    moverMouse(coordenadasReboot.x, coordenadasReboot.y);
    clicarMouse();


    Sleep(5000);
    moverMouse(coordenadasChrome.x, coordenadasChrome.y);
    clicarMouse();
    if (!aguardarJanelaAtiva()) {
        std::cout << "Falha ao abrir a janela após o clique em coordenadasChrome!" << std::endl;
        return 1; // Encerrar o programa com falha
    }
    clicarMouse();

    Sleep(10000);
    moverMouse(coordenadasPararIniciar.x, coordenadasPararIniciar.y);
    clicarMouse();


    /**
     *
    Sleep(3000);
    moverMouse(coordenadaexec.x, coordenadaexec.y);
    clicarMouse();

    Sleep(3000);
    moverMouse(coordesc.x, coordesc.y);
    clicarMouse();
     *
     */
    Sleep(3000);

      //  std::cout << "Automação concluída!" << std::endl;
    exit(0);
    } catch (const std::exception &e) {
        std::cerr << "Ocorreu uma exceção: " << e.what() << std::endl;
        return 1; // Encerrar o programa com falha
    }

    return 0;
}



