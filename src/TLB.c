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

  pid = 1;
  vpn = 1;



}

void write_TLB(proc_id_t pid, unsigned vpn, unsigned ppn) {

  pid = 1;
  vpn = 1;





}

void remove_TLB(proc_id_t pid, unsigned vpn) {


  pid = 1;
  vpn = 1;




}
