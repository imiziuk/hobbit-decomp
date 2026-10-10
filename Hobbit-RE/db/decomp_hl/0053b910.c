
void __thiscall FUN_0053b910(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float local_c;
  
  uVar1 = param_1[1] * 2;
  if (((uVar1 ^ param_1[1]) & 0x7fffffff ^ uVar1) == 0xffffffff) {
    iVar5 = *param_1;
  }
  else {
    iVar5 = FUN_00549470(param_1 + 1);
  }
  iVar4 = *(int *)(iVar5 + 0x4c);
  if (param_1[2] == -1) {
    if (0 < iVar4) {
      puVar2 = (undefined4 *)(param_2 + 0x14);
      do {
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0x3f800000;
        puVar2[-5] = 0x3f800000;
        puVar2[-4] = 0x3f800000;
        puVar2[-3] = 0x3f800000;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2 = puVar2 + 10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      return;
    }
  }
  else {
    iVar5 = param_1[2] * 0x50 + *(int *)(iVar5 + 0x58);
    local_c = (float)param_1[4];
    if (local_c < DAT_006e92e4 != (NAN(local_c) || NAN(DAT_006e92e4))) {
      local_c = 0.0;
    }
    iVar4 = (int)*(short *)(iVar5 + 0x24);
    if ((float)(iVar4 + -1) <= local_c) {
      local_c = (float)iVar4 - DAT_006e92e8;
    }
    if (param_1[0x1b] != 0) {
      fVar6 = (float10)FUN_0064c6b0(local_c,(float)(iVar4 + -1),param_2);
      FUN_0053fe50(*(undefined4 *)(iVar5 + 0x20),(float)fVar6,param_2);
      return;
    }
    iVar3 = __ftol(param_2);
    FUN_0053fb20(*(undefined4 *)(iVar5 + 0x20),iVar3 % iVar4,param_2);
  }
  return;
}

