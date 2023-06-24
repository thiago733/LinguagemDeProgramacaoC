#include <stdio.h>
#include <time.h> //necessário para usar localtime() e struct tm

/*
    struct tm {
        int tm_sec; //representa os segundos de 0 a 59
        int tm_min; //representa os minutos de 0 a 59
        int tm_hour; //representa as horas de 0 a 24
        int tm_mday: //dia do mês de 1 a 31
        int tm_mon; //representa os meses do ano de 0 a 11
        int tm_year; //representa o ano a partir de 1900
        int tm_wday; //dia da semana de 0 (domingo) até 6 (sábado)
        int tm_yday; // dia do ano de 1 a 365
        int tm_isdst; //indica horário de verão se for diferente de zero
    };
*/
int main() {

    //ponteiro para struct que armazena data e hora  
    struct tm *dataHora;     
  
    //variável do tipo time_t para armazenar o tempo em segundos  
    time_t segundos;
  
    //obtendo o tempo em segundos  
    time(&segundos);   
  
    //Função localtime: converte a variável (dataHora) para o tempo local.
    dataHora = localtime(&segundos);  
  
    //Acessarndo os valores da data contidos na variavel dataHora
    printf("\nDia..........: %d", dataHora->tm_mday);  
    printf("\nMes..........: %d", dataHora->tm_mon+1);
    printf("\nAno..........: %d\n", dataHora->tm_year+1900);  
    printf("\nDia do ano...: %d", dataHora->tm_yday);  
    printf("\nDia da semana: %d\n", dataHora->tm_wday);
    
    //Acessarndo os valores da hora contidos na variavel dataHora
    printf("\nHora ........: %d:",dataHora->tm_hour);
    printf("%d:",dataHora->tm_min);
    printf("%d\n",dataHora->tm_sec);  
  
    printf("Data ........: %d/", dataHora->tm_mday);
    printf("%d/",dataHora->tm_mon+1); //mês
    printf("%d\n",dataHora->tm_year+1900); //ano
    return 0;
}
