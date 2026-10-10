
undefined4 FUN_00652650(int *param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  local_20 = param_1[2];
  local_1c = param_1[3];
  cVar1 = (char)param_1[7];
  if (cVar1 == '\0') {
    sVar2 = (short)param_1[5];
  }
  else {
    sVar2 = *(short *)(*param_1 + 4);
  }
  local_18 = (int)sVar2;
  if (cVar1 == '\0') {
    sVar2 = *(short *)((int)param_1 + 0x16);
  }
  else {
    sVar2 = *(short *)(*param_1 + 6);
  }
  local_14 = (int)sVar2;
  if (cVar1 == '\0') {
    sVar2 = (short)param_1[6];
  }
  else {
    sVar2 = *(short *)(*param_1 + 4);
  }
  local_10 = (int)sVar2;
  local_c = (uint)*(ushort *)((int)param_1 + 0x1a);
  local_8 = (int)cVar1;
  local_4 = (int)*(char *)((int)param_1 + 0x1d);
  iVar3 = FUN_0064f420(&local_20,1,0x20,param_2);
  if (iVar3 != 0x20) {
    return 0;
  }
  iVar3 = param_1[2];
  iVar4 = FUN_0064f420(*param_1,1,iVar3,param_2);
  if (iVar4 != iVar3) {
    return 0;
  }
  iVar3 = param_1[3];
  if (iVar3 != 0) {
    iVar4 = FUN_0064f420(param_1[1],1,iVar3,param_2);
    if (iVar4 != iVar3) {
      return 0;
    }
  }
  return 1;
}

