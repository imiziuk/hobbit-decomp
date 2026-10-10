
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c635e(void)

{
  void *pvVar1;
  char *pcVar2;
  int local_c;
  int local_8;
  
  if (DAT_008174ac == 0) {
    FUN_006cb0ec();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_00815e10,0x104);
  _DAT_00815d5c = &DAT_00815e10;
  pcVar2 = &DAT_00815e10;
  if (*DAT_008174a4 != '\0') {
    pcVar2 = DAT_008174a4;
  }
  FUN_006c63f7(pcVar2,0,0,&local_8,&local_c);
  pvVar1 = _malloc(local_c + local_8 * 4);
  if (pvVar1 == (void *)0x0) {
    __amsg_exit(8);
  }
  FUN_006c63f7(pcVar2,pvVar1,(void *)((int)pvVar1 + local_8 * 4),&local_8,&local_c);
  DAT_00815d44 = pvVar1;
  DAT_00815d40 = local_8 + -1;
  return;
}

