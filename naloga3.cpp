#include <iostream>
#ifdef _OPENMP
#  include <omp.h>
#endif

int main()
{

#ifdef _OPENMP
    int thr_num;
    // dolocite stevilo vseh threadov na 4

    // definirajte seznam z velikostjo 4 z imenom list_of_threads,
    // Inicializirajte vse elemente na 0

    // definirajte parallel pragma s privatnimi spremenljivkami
    // thr_num in list_of_thread_ids

    
    #pragma omp parallel 
    {
      // dobite ID stevilko niti in jo vstavite spremenljivko thr_num
      list_of_thread_ids[thr_num] = thr_num;
    };
    int i;
    printf("Elements inside list_of_thread_ids:\n");
    for (i=0; i<4; i++)
      {
        printf("%d\n", list_of_thread_ids[i]);
      };
#else
    printf("The program is not compiled with OpenMP\n");
#endif

  return 0;
}
