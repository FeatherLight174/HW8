#include "../inc/TLB.h"

#include <stdlib.h>

unsigned global_TLB_init(void) {
  global_tlb = calloc(1, sizeof(TLB));
  return 0;
}

void global_TLB_free(void) {
  if (global_tlb == NULL) {
    return;
  }
  free(global_tlb);
  global_tlb = NULL;
}

unsigned read_TLB(proc_id_t pid, unsigned vpn) {


  if(pid==1){
    return ERROR;
  }
  if(vpn ==1){
    return ERROR;
  } 



}

void write_TLB(proc_id_t pid, unsigned vpn, unsigned ppn) {

  

  if(pid==1){
    return ERROR;
  }
  if(vpn ==1){
    return ERROR;
  } 







}

void remove_TLB(proc_id_t pid, unsigned vpn) {


  

  if(pid==1){
    return ERROR;
  }
  if(vpn ==1){
    return ERROR;
  } 






}
