#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "encabezados.h"


int getRandom(int max) {
	srand((unsigned) time(0));
	return rand() % max; 
}

int main()
{  
    Heap *heap;
    heap = creaHeap();
 	int op=0;
 	int elemento=0;
 	do{
 	 printf("\nEjercicio 1 ");
 	 printf("\nEjercicio 2 ");
 	 printf("\nEjercicio 3 ");
	 printf("\nIngrese opcion: \n"); 	
	 scanf("%i", &op);
	 if(op == 1){
	 	printf("\n1 - Insertar un elemento ");
	 	printf("\n2 - Eliminar el elemento superior");
	    scanf("%i", &op);
	    switch(op){
	    	case 1:
	    	// inserta 
	    	 printf("Ingrese un elemento ");
             scanf("%i", &elemento);
	    	 insertarEnHeap(heap,elemento);
	            printf("\nHeap:");
                int i;
                for(i = 0; i < heap->tamano; i++){
                    printf(" %i ", heap->arr[i].prioridad);
                }
                printf("\n\n");
	    	break;
	    	case 2:
	    	// elimina 
	    	eliminarEnHeap(heap);
	    	break;
	    	default:
	    	// error
	    	break;
	    }   
	 	op=0;
	 }else if(op == 2){
	  	insertarEnHeap(heap,getRandom(8000));
	 	op=0;
	 }else if(op == 3){
	 	op=0;
	 }else{
		printf("\nOpción incorrecta !! intente nuevamente \n"); 
	 }
	 
 	}while(op!=0);




//    insertarEnHeap(heap,100);
  //  insertarEnHeap(heap,80);
    //insertarEnHeap(heap,40);
    //insertarEnHeap(heap,30);
    //insertarEnHeap(heap,110);
    //eliminarEnHeap(heap);

    return 0;
}
