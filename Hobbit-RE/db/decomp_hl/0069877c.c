
int FUN_0069877c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int local_8;
  
  if (param_3 < param_4) {
    local_8 = param_3 * 2;
    piVar5 = (int *)(param_3 * 0x20 + 0xc + param_2);
    do {
      if (param_4 < local_8) {
        piVar1 = (int *)FUN_00698421();
      }
      else {
        piVar1 = (int *)FUN_006983f8();
      }
      if (piVar1 == (int *)0x0) {
        return param_3;
      }
      piVar5[-2] = piVar1[1];
      *piVar5 = piVar1[3];
      piVar5[2] = piVar1[5];
      piVar5[-3] = *piVar1;
      piVar5[-1] = piVar1[2];
      piVar5[1] = piVar1[4];
      iVar3 = (piVar1[1] - *piVar1) * 0x10;
      iVar2 = (piVar1[3] - piVar1[2]) * 0xc;
      cVar4 = iVar3 <= iVar2;
      if (!(bool)cVar4) {
        iVar2 = iVar3;
      }
      if (iVar2 < (piVar1[5] - piVar1[4]) * 8) {
        cVar4 = '\x02';
      }
      if (cVar4 == '\0') {
        iVar2 = (piVar1[1] + *piVar1) / 2;
        piVar1[1] = iVar2;
        piVar5[-3] = iVar2 + 1;
      }
      else if (cVar4 == '\x01') {
        iVar2 = (piVar1[3] + piVar1[2]) / 2;
        piVar1[3] = iVar2;
        piVar5[-1] = iVar2 + 1;
      }
      else if (cVar4 == '\x02') {
        iVar2 = (piVar1[5] + piVar1[4]) / 2;
        piVar1[5] = iVar2;
        piVar5[1] = iVar2 + 1;
      }
      FUN_00698444();
      FUN_00698444();
      local_8 = local_8 + 2;
      param_3 = param_3 + 1;
      piVar5 = piVar5 + 8;
    } while (param_3 < param_4);
  }
  return param_3;
}

