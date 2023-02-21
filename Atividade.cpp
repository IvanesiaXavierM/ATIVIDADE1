
#include<stdio.h>
#include<time.h>



struct DataCompleta {


    int dia, mes,ano, diaAtual, mesAtual, anoAtual;

    void recebeData(){
    int controllerSaveDate;
    printf("\nSalvar Data Manualmente  1-SIM  2-NAO.\n");
    scanf("%d", &controllerSaveDate);
    switch (controllerSaveDate){


case 1 :

    printf("\nDia: ");
    scanf("%d", &diaAtual);
    printf("Mes: ");
    scanf("%d",&mesAtual);
    printf("Ano: ");
    scanf("%d", &anoAtual);
    printf("%d/%d/%d", diaAtual, mesAtual, anoAtual);
    break;
    }
      }

   int calculaIdade(){
   if(dia<=diaAtual && mes<=mesAtual && ano<anoAtual){
     }else{
   return (anoAtual- 2023);
    }
      }
        };


struct Cliente {
    char nome[30];
    char sexo = '\0' ;
    DataCompleta data;
    int idade = 0;


void registrarInformaçoes(){
    printf("\nNome: ");
    scanf("%s", nome);
    do{
    printf("Sexo(M ou F): ");
    scanf("%s", &sexo);
    if(sexo != 'M' && sexo != 'F'){
    printf("Digite uma opcao valida.\n");
     }
    }while(sexo != 'M' && sexo != 'F');
    data.recebeData();
    idade = data.calculaIdade();
    }



void mostrarInformaçoes(){
    printf("\nNome: %s\n", nome);
    printf("Sexo: %c\n", sexo);
    printf("Idade: %d\n\n", idade);
    }

    bool verificacao(){
    if (idade == 0){
    return true;
    }else{
    return false;
    }
     }
   };




int main(){


    Cliente clientes[50];
    int controller, QuantidadeArmazenada = 50;
    while(controller != 3){
    printf("\n\n[1] - Cadastra.\n[2] - Exibir.\n[3] - Finalizar.\n");
    scanf("%d", &controller);
    switch(controller){



case 1 :
    for(int i = 0; i<50; i++){
    if(clientes[i].verificacao()){
    clientes[i].registrarInformaçoes();
    break;
    }
     }
    break;


case 2:
    for(int j = 0; j<50; j++){
    if(clientes[j].verificacao()){
    break;
    }else{
    clientes[j].mostrarInformaçoes();
    QuantidadeArmazenada = j+1;
    }
     }
    printf("\nQuantidadeArmazenada: %d\n", QuantidadeArmazenada);
    break;
    default:
    break;
    }
     }



    return 0;

}

