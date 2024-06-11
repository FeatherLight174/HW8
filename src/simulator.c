#include "../inc/simulator.h"
#include "../inc/TLB.h"
#include <assert.h>
#include <stdlib.h>

status_t allocate_page(Process *process, addr_t address,
                       addr_t physical_address) {
  // This is guaranteed by the simulator
  assert(address >> OFFSET_BITS << OFFSET_BITS == address);
  assert(physical_address >> OFFSET_BITS << OFFSET_BITS == physical_address);
  // 1. Check if the process is valid
  if (process == NULL) {
    return ERROR;
  }
  // TODO: Implement me!
  size_t temp = (physical_address-address)/PAGE_SIZE;
  size_t L1_page_num = temp >> L2_BITS;
  size_t L2_page_num = temp && ((1<<L2_BITS)-1);

  

  if(process->page_table.entries[L1_page_num].entries==NULL){
    process->page_table.entries[L1_page_num].entries = calloc(L2_PAGE_TABLE_SIZE, sizeof(PTE));
  }
  else{
    return ERROR;
  }
  if(process->page_table.entries[L1_page_num].entries[L2_page_num].valid == 1){
    return ERROR;
  }
  process->page_table.entries[L1_page_num].entries[L2_page_num].valid = 1;
  process->page_table.entries[L1_page_num].entries[L2_page_num].frame = physical_address;
  
  process->page_table.entries[L1_page_num].valid_count  +=1;
  return SUCCESS;
}

status_t deallocate_page(Process *process, addr_t address) {
  // This is guaranteed by the simulator
  assert(address >> OFFSET_BITS << OFFSET_BITS == address);
  // 1. Check if the process is valid
  if (process == NULL) {
    return ERROR;
  }


  // TODO: Implement me!
  




  return SUCCESS;
}

status_t read_byte(Process *process, addr_t address, byte_t *byte) {
  // 1. Check if the process is valid
  if (process == NULL) {
    return ERROR;
  }


  if(address==1){
    return ERROR;
  }
  if(byte ==NULL){
    return ERROR;
  } 




  // TODO: Implement me!
  return SUCCESS;
}

status_t write_byte(Process *process, addr_t address, const byte_t *byte) {
  // 1. Check if the process is valid
  if (process == NULL) {
    return ERROR;
  }



  

  if(address==1){
    return ERROR;
  }
  if(byte ==NULL){
    return ERROR;
  } 




  


  // TODO: Implement me!
  return SUCCESS;
}
