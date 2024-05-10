cmake_minimum_required(VERSION 3.23)
project(C_Lessons C)

set(CMAKE_C_STANDARD 11)

add_executable(C_Lessons
        ASCII/ascii.c
        cicli/conta_cifre.c
        cicli/conta_in_due_sensi.c
        cicli/conta_primi.c
        cicli/numeri_perfetti.c
        cicli/sommatoria.c
        cicli/triangolo-croce.c
        cicli/triangolo.c
        esercizi/es-2.c
        esercizi/primi.c
        esercizi/punti-segmento.c
        esercizi/sette-mezzo.c
        funzioni/coffee.c
        funzioni/euclide.c
        successioni/fibonacci.c
        funzioni/funz-cubo.c
        funzioni/funz-somma.c
        funzioni/funz-void.c
        funzioni/stampa-div.c
        funzioni/tabellina.c
        funzioni/var-globali.c
        serie/serie-a.c
        successioni/radice-quadrata-di-a.c
        successioni/radice-quadrata.c
        file/write.c)
