/* Universidad de La Frontera
* Departamento de Ingeniería Eléctrica
*
* ICC-202 PROGRAMACION DE COMPUTADORES
*
* Tarea 2
*
* Autores: Felipe Alvarado. (f.alvarado05@ufromail.cl)
* Carlos Pacheco. (mail 2)
* Francisca Valencia. (mail 3)
* Fernando Villalobos. (mail 4)
*
* Fecha: 20-06-2021
*
* el programa busca ayudar al usuario para que tenga una forma intuitiva y sencilla de ingresar a las diferentes aplicaciones que son mas utilizadas hoy en día, para empezar se pide el rut del usuario para que se logre una contraseña que le permita ingresar al programa, el programa determinara la contraseña y se la entregara al usuario, el cual tendra un numero finito de posibilidades para intentarlo, tomando en cuenta que lo hace correctamente se le llevara a 5 opciones distintas en la cual debera elegir que aplicacion quiere utilizar, luego de elegirla se le pedira al usuario determinar lo que quiera hacer, que variara entre enviar mensajes o audios, hasta ver videos en youtube. Una vez logrado el objetivo del programa, se llevara a la pregunta de si quiere seguir utilizandolo para cerrar el programa o "apagar" el telefono, si la respuesta es no, se volveran a las 5 opciones originales de aplicaciones y se dejará interactuar al usuario con cualquiera de estas.
*/
#include <stdio.h>

int rut1, rut2, rut3, rut4, rut5, rut6, rut7, rut8;
int res1, res2, res3, res4;
int cod;
int multiplicacion;
char mensaje[250];
int intentos=0;
int correcto[4];
int decision = 0;
char texto1;
char texto2;
char texto3;

int main(){

  int indice;
  const char *contactos[3] = { "Blue", "Red",
                             "Orange"};

  bool seleccionando_numero = true;
  bool ha_seleccionado = false;
  const char *numero_seleccionado;



  printf("�Bienvenido/a usuario/a!\n");
  printf("Ya sea el rut de 8 digitos forma ab.cde.fgh-x\n");
  printf("Por favor, ingrese su rut de manera h,g,f,e,d,c,b,a para conocer su clave:\n");
  scanf("%d, %d, %d, %d, %d, %d, %d, %d", &rut1, &rut2, &rut3, &rut4, &rut5, &rut6, &rut7, &rut8);
  //generaci�n de la clave
  res1 = rut1*2 + rut2*3 + rut3*4 + rut4*5 + rut5*6 + rut6*7 + rut7*2 + rut8*2;
  res2 = res1 / 11;
  res3 = res2 * 11;
  res4 = res1 - res3;
  cod = 11 - res4;
  int clave[3];
  clave[0]=rut8;
  clave[1]=rut7;
  clave[2]=cod;
  printf("Su clave de acceso es %d,%d,%d\n", clave[0], clave[1], clave[2]);
  printf("----------------------------\n");
  //Ingreso de la clave y posible bloqueo de usuario


  for(int i = 0; i < 5; i++){
    printf("Ingrese su clave de la misma forma que se entreg�:\n");
    scanf("%d,%d,%d", &correcto[0], &correcto[1], &correcto[2]);

    if((clave[0] == correcto[0]) && (clave[1] == correcto[1]) && (clave[2] == correcto[2])){
      printf("Bienvenido\n");
      i= 5;

    } else if(i==4){
      printf("Usuario bloqueado\n");
      printf("Espere 5 minutos para volver a intentarlo\n");
      i= 0;
    }
      else {
      printf("Contrase�a Incorrecta\n");
   }
  }


  for(int j=0; j<1; j++){
    for(int l=0; l<1; l++){
  int op;
  printf("Elija una opci�n\n");
  printf("1) Entrar a Whatsapp\n");
  printf("2) Entrar a Instagram\n");
  printf("3) Entrar a Youtube\n");
  printf("4) Entrar a Facebook\n");
  printf("5) Entrar a Twitter\n");

  scanf("%d", &op);


  switch(op){
    case 1:
     printf("Seleccione contacto\n");
        for(int i=0; i < 3;i++){
             printf("%d) Seleccionar: %s\n",i,contactos[i]);
    }
     while(seleccionando_numero){
        if (ha_seleccionado == false){
            printf("Seleccione indice de contacto : \n");
            scanf("%d",&indice);
            ha_seleccionado = true;
        }
        if( indice < 0 || indice >= 3){
            printf("Contacto no existe, vuelva a seleccionar contacto\n");
            ha_seleccionado = false;
        }
        else{
            seleccionando_numero = false;
        }
    }

     printf("Usted ha seleccionado : %s \n\n",contactos[indice]);
     numero_seleccionado = contactos[indice];

     printf("�Qu� desea hacer?\n Enviar audio(0)\n Enviar un mensaje de texto(1)\n");
            scanf("%d", &decision);
            if(decision == 1){
              printf("Escriba su mensaje pero en vez de espacios por favor usar guiones:\n");
              scanf("%s", mensaje);
              //aqui va la funcion para seleccionar persona a enviar mensaje
              printf("El mensaje (%s) ha sido enviado a %s \n\n", mensaje, numero_seleccionado);
              break;
            }
            if(decision == 0){
              printf("Seleccione el contacto para enviar audio\n");
              scanf("%s", mensaje);
              printf("el audio (%s) se ha enviado\n", mensaje);
              break;
            }
    case 2:
        printf("Seleccione contacto\n");
        for(int i=0; i < 3;i++){
             printf("%d) Seleccionar: %s\n",i,contactos[i]);
    }
        while(seleccionando_numero){
            if (ha_seleccionado == false){
                printf("Seleccione indice de contacto : \n");
                scanf("%d",&indice);
                ha_seleccionado = true;
        }
            if( indice < 0 || indice >= 3){
                printf("Contacto no existe, vuelva a seleccionar contacto\n");
                ha_seleccionado = false;
        }
            else{
                seleccionando_numero = false;
        }
    }

        printf("Usted ha seleccionado : %s \n\n",contactos[indice]);
        numero_seleccionado = contactos[indice];

        printf("�Qu� desea hacer?\n Enviar mensaje(0)\n Publicar foto(1)\n");
            scanf("%d", &decision);
            if(decision == 0){
              printf("Escriba su mensaje pero en vez de espacios por favor usar guiones:\n");
              scanf("%s", mensaje);
              //aqui va la funcion para seleccionar persona a enviar mensaje
              printf("El mensaje (%s) ha sido enviado a %s \n\n", mensaje, numero_seleccionado);
              break;
            }
            if(decision == 1){
              printf("Escriba el mensaje que desea publicar\n");
              printf("%c\n", texto3);
              break;
            }
    case 3:

        printf("�Qu� desea hacer?\n Buscar un video(0)\n");
            if(decision == 0){
            scanf("%d", &decision);
            break;
            }
    case 4:
        printf("Seleccione contacto\n");
        for(int i=0; i < 3;i++){
             printf("%d) Seleccionar: %s\n",i,contactos[i]);
    }
        while(seleccionando_numero){
            if (ha_seleccionado == false){
                printf("Seleccione indice de contacto : \n");
                scanf("%d",&indice);
                ha_seleccionado = true;
        }
            if( indice < 0 || indice >= 3){
                printf("Contacto no existe, vuelva a seleccionar contacto\n");
                ha_seleccionado = false;
        }
            else{
                seleccionando_numero = false;
        }
    }

        printf("Usted ha seleccionado : %s \n\n",contactos[indice]);
        numero_seleccionado = contactos[indice];

        printf("�Qu� desea hacer?\n Publicar en mi muro(0)\n Enviar mensaje(1)\n");
            scanf("%d", &decision);
            if(decision == 1){
              printf("Escriba su mensaje pero en vez de espacios por favor usar guiones:\n");
              scanf("%s", mensaje);
              //aqui va la funcion para seleccionar persona a enviar mensaje
              printf("El mensaje (%s) ha sido enviado a %s \n\n", mensaje, numero_seleccionado);
              break;
            }
            if(decision == 0){
              printf("Escriba el mensaje que desea publicar\n");
              scanf("%c", &texto1);
              printf("%c\n", texto1);
              break;
            }
    case 5:

        printf("Seleccione contacto\n");
        for(int i=0; i < 3;i++){
             printf("%d) Seleccionar: %s\n",i,contactos[i]);
    }
        while(seleccionando_numero){
            if (ha_seleccionado == false){
                printf("Seleccione indice de contacto : \n");
                scanf("%d",&indice);
                ha_seleccionado = true;
        }
            if( indice < 0 || indice >= 3){
                printf("Contacto no existe, vuelva a seleccionar contacto\n");
                ha_seleccionado = false;
        }
            else{
                seleccionando_numero = false;
        }
    }

        printf("Usted ha seleccionado : %s \n\n",contactos[indice]);
        numero_seleccionado = contactos[indice];


        printf("�Qu� desea hacer?\n Escribir un twitt(publicar en mi muro)(0)\n Enviar un mensaje(1)\n");
            scanf("%d", &decision);
            if(decision == 1){
              printf("Escriba su mensaje pero en vez de espacios por favor usar guiones:\n");
              scanf("%s", mensaje);
              //aqui va la funcion para seleccionar persona a enviar mensaje
              printf("El mensaje (%s) ha sido enviado a %s \n\n", mensaje, numero_seleccionado);
              break;
            }
            if(decision == 0){
              printf("Escriba el mensaje que desea publicar\n");
              printf("%c\n", texto2);
              break;
            }
    default: printf("La opcion ingresada no es valida\n");
    printf("Desea intentarlo nuevamente?\n Si(0)\n No(1)\n");
    scanf("%d", &decision);

        if(decision == 0){
          l= -1;
        }
    }
  } printf("�Quiere salir del programa?\n si(1) no(0)\n");
  scanf("%d", &decision);

  if(decision == 0){

    j=-1;
  }
  if(decision == 1){
    printf("�Hasta pronto!\n");
  }
}
return 0;
}
