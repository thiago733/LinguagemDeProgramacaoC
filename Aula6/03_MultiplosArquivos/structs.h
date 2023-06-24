struct data {
	  int dia, mes, ano;
}; 

struct hora {
	  int hora, minuto;
}; 
 
struct endereco {
	  char rua[40];
	  int numero;
	  char bairro[20];
	  char complemento[30];
	  int cep;
	  char cidade[30];
	  char uf[3];
}; 
 
struct cliente {
	  int codigo;
	  char nome[50]; 
	  char telefone[12];
	  char genero;
	  char email[50];
	  struct data nasc;  //data de nascimento
	  struct endereco end; 
} c[2];   //vetor
 
struct passagem {
	  char numpass [12];//11 caracteres e +1 para o ‘\0’ (fim).	  char voo[7];
	  char voo[7];
      char classe;
	  char assento[4];
	  char destino[50];
	  char origem[50];
	  struct data dt;  //data de embarque
	  struct hora hh;  //hora de embarque
	  char portao[4];
} p[2];  
