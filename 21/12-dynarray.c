#include <stdio.h>
#include <stdlib.h>



int ** dynamic_array_alloc(int N,int M){

    int ** A = (int **) malloc(N*sizeof(int*)); // Выделяем память под N указателей типа инт на адреса строк

    for(int i=0;i<N;i++){   // Выделяем память под М int - элементов каждой из N строк
        A[i]=(int*)malloc(M*sizeof(int));
   }

   return A;  
}

void dynamic_array_free(int ** A,int N){
    // Освобождаем память
   for(int i=0;i<N;i++){
        free(A[i]);
   }
   free(A);

}

ft_array_print(int **A,int N,int M){
      for(int i =0;i<N;i++){ 
         for(int k=0;k<M;k++){
            printf("%*d",5,A[i][k]);
         }
         printf("\n");
         printf("\n");
      }
}

int main(void){
   int N=4;
   int M=5; 
   int ** A = dynamic_array_alloc(N,M); // Создаем указатель на массив из указателей на адреса строк и выделяем для него память через функцию
    
   int x = 1;

   for(int i =0;i<N;i++){ // Заполняем массив 
         for(int k=0;k<M;k++){
            A[i][k] = x;
            x++;
        }
   } 

   ft_array_print(A,N,M);

   dynamic_array_free(A,N);
   
   

return 0;
}

