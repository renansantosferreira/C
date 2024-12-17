#include <stdio.h>
#include <time.h>

int main() {
    time_t agora = time(NULL);
    struct tm *tempo = localtime(&agora);

    printf("Hora atual: %02d:%02d:%02d\n", tempo->tm_hour, tempo->tm_min, tempo->tm_sec);

    sleep(5); // pausa por 5 segundos

    return 0;
}
