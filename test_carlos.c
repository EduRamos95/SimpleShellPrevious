#include <stdio.h>
#include <unistd.h>

int main()
{
    int pid;

    printf("Antes // PADRE: Soy el proceso padre y mi pid es: %d\n", getpid());

    pid = fork();
printf ("despues///\n");
    // En cuanto llamamos a fork se crea un nuevo proceso. En el proceso
    // padre 'pid' contendrá el pid del proceso hijo. En el proceso hijo
    // 'pid' valdrá 0. Eso es lo que usamos para distinguir si el código
    // que se está ejecutando pertenece al padre o al hijo.
printf("proceso padre -> hijo 1\n");
printf("proceso hijo -> padre 1\n");
    if (pid) // Este es el proceso padre
    {
        printf("PADRE: Soy el proceso padre y mi pid sigue siendo: %d\n", getpid());
        printf("PADRE: Mi hijo tiene el pid: %d\n", pid);
    }
    else // Proceso hijo
	{
        printf("HIJO: Soy el proceso hijo y mi pid es: %d\n", getpid());
        printf("HIJO: mi padre tiene el pid: %d\n", getppid());
	printf("extra\n");
    }
    printf("ambos ->1\n");
    return (0);
}
