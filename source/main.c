#include <switch.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    consoleInit(NULL);

    printf("SwitchCraft NX 0.1.0\n");
    printf("Prototipo nativo para Nintendo Switch\n\n");
    printf("Homebrew iniciado com sucesso.\n");
    printf("Minecraft Java ainda nao implementado.\n\n");
    printf("Pressione + para sair.\n");

    PadState pad;
    padConfigureInput(1, HidNpadStyleSet_NpadStandard);
    padInitializeDefault(&pad);

    while (appletMainLoop()) {
        padUpdate(&pad);
        if (padGetButtonsDown(&pad) & HidNpadButton_Plus)
            break;
        consoleUpdate(NULL);
    }

    consoleExit(NULL);
    return 0;
}
