Nombre: gabriel jesus suero
Matricula: 20261107
Correo: 20261107@itla.edu.doc
archivo: 20261107.c
compilacion: gcc-std= c11-Wall-wextra 20261107.c-o reto
1) Codigo completo en c

#include <studio.h>

#define MAX_DIM 30

int main(void) {
  int N,M;
  long L,U;
// 1. Lectura y validacion de dimensiones y limites
if(scanf(%d,%d,%ld,%ld´´,&N,&M,&L,&U)!=4{printf(¨ERROR n¨); return 0;
  }                                      

if(N<1 || N> MAX_DIM || M> MAX_DIM || L<0 || L>U || U> 1000){ Prinft(¨ERROR n¨); return 0;
                                                          
// 2.Lectura y validacion de la matriz
int mat¨[MAX_DIM][MAX_DIM];
for(int i=0; i<N; i++){
 for(int j=0;j< M; j++){
   if(scanf(¨%d¨,&mat[i][j] !=1 || mat[i][j] <0|| mat[i][j]> 1000){ prinft(¨ERROR n¨);return 0;
}
}
}
// Arreglos para metricas por fila y columna
int fila_eventos[MAX_DIM]={0};
long fila_impacto[MAX_DIM]={0};
int fila_racha[MAX_DIM]={0};
int fila_inicio[MAX_DIM]={0};
int col_eventos[MAX_DIM]={0};

int total_eventos_matriz={0};

// 3.Procesamiento de la matriz for (int i=0; i< N; i++) {
long AC=0;
int racha_actual=0;
int inicio_actual=0;
int max_racha=0;
int inicio_max_racha=0;

for(int j=0; j< M; j++) {
  int k=j+1;//columna contada desde 1 AC += mat[i][j];

  long min_req=(long)k *L;
  long max_req=(long)*U;

  //Evaluacion de la regla particular
  if(AC>=min_req && AC<=max_req) {
     long impacto=AC-min_req+1;

     fila_eventos[i]++;
     fila_impacto[i]+=impacto;
     col_eventos[j]++;
     total_eventos_matriz++;

     if(racha_actual==0) {
        inicio_actual=k;//indice 1-bassed }
     racha_actual++;

     if(racha_actual>max_racha) {
        max_racha= racha_actual;
        inicio_max_racha=inicio_actual;
       } 
     } else{
         racha_actual=0;
         inicio_actual=0;
        }
      }
      fila_racha[i]=max_racha
      fila_inicio[i]=(max_racha>0) ? i inicio_max_racha:0;
    }

// 4.Seleccion de fila prioritaria y columna destacada con desempates
int fila_prioritaria=0;
int columna_destacada=0;

if(total_eventos_matriz>0) {
   int mejor_fila=0;
   for(int i=1; i< N; i++) {
     if(fila_racha[i]> fila_racha[mejor_fila]) { mejor fila= i
       }  else if(fila_racha[i]==fila_racha[mejor_fila]){
       if(fila_impacto[i]>fila_impacto[mejor_fila]{ mejor_fila=i
         }else IF(fila_impacto[i]==fila_impacto[mejor_fila]){
           if(fila_eventos[i]>fila_eventos[mejor_fila]){ mejor_fila=i;
            }                                                                                        
          // si coinciden en todos los criterios, prevalece la menor fila( menor i)
       }
     }
    }  
    fila_prioritaria=mejor_fila + 1;

    int mejor_col= 0;
    for(int j= 1; j< M; j++) {
       if(col_eventos[j]>col_eventos[mejor_col]){ mejor_col=j;
      } 
       // si hay empate, prevalece la menor columna( menor j)
    } 
    columna_destacada= mejor_col + 1;
   } 

// 5.Impresion exacta de resultados
for(int i=0; i< N;i++) {
  printf("FILA %d EVENTOS %d IMPACTO %ld RACHA %d INICIO %d\n", i+ 1, fila_eventos[i], fila_impacto[i], fila_racha[i], fila_inicio[i]);}

printf("COLUMNAS")
for(int j= 0; j< M;j++) {
  prinft(" %d", col_eventos[j]);
}
printf("\n");

prinft("PRIORIDAD %d\n", fila_prioritaria);
prinft("COLUMNA %d\n", columna_destacada);

return 0;
}



2) Analisis del problema y pseudocodigo





         
        





