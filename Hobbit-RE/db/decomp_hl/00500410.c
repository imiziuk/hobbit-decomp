
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00500410(int param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int local_28 [10];
  
  local_28[0] = 5;
  local_28[1] = 6;
  local_28[2] = 7;
  local_28[3] = 0xe;
  local_28[4] = 0x13;
  local_28[5] = 0x15;
  local_28[6] = 0x16;
  local_28[7] = 0x17;
  local_28[8] = 0x1c;
  local_28[9] = 0x21;
  if ((param_2 < DAT_006e92e4) ||
     ((fVar1 = _DAT_006e999c, _DAT_006e999c < param_2 == (NAN(_DAT_006e999c) || NAN(param_2)) &&
      (fVar1 = param_2, param_2 < DAT_006e92e4)))) {
    fVar1 = DAT_006e92e4;
  }
  *(float *)(param_1 + 0x4ac) = fVar1;
  iVar4 = 0;
  do {
    bVar2 = false;
    iVar3 = 0;
    do {
      if (iVar4 == local_28[iVar3]) {
        bVar2 = true;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 10);
    if (bVar2) {
      FUN_0054c290(iVar4,*(undefined4 *)(param_1 + 0x4ac),0);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x46);
  return;
}

