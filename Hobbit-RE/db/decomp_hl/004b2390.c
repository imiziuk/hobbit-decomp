
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004b2390(int *param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  float10 fVar5;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int iStack_1c;
  int iStack_18;
  float local_10;
  float fStack_4;
  
  if ((*(byte *)((int)param_1 + 0x16e) & 0xc) == 0) {
    pfVar1 = (float *)param_1[0x58];
    param_2 = param_2 + pfVar1[8];
    pfVar1[8] = param_2;
    if (param_2 < pfVar1[6] == (NAN(param_2) || NAN(pfVar1[6]))) {
      param_2 = pfVar1[6];
    }
    pfVar1[8] = param_2;
    param_2 = param_2 / pfVar1[6];
    local_10 = pfVar1[5] - pfVar1[2];
    local_24 = (pfVar1[3] - *pfVar1) * param_2;
    local_20 = (pfVar1[4] - pfVar1[1]) * param_2;
    local_28 = local_10 * param_2 + pfVar1[2];
    local_2c = local_20 + pfVar1[1];
    local_30 = local_24 + *pfVar1;
    fVar5 = (float10)FUN_0064c800(param_2 * _DAT_006e9368);
    local_2c = (float)(fVar5 * (float10)pfVar1[7] + (float10)local_2c);
    (**(code **)(*param_1 + 0x110))(&local_30,param_1 + 0x1a);
    iVar2 = *(int *)(param_1[0x58] + 0x48);
    if (iVar2 != 0) {
      if ((((iVar2 == -1) || (piVar4 = *(int **)(DAT_0076f648 + iVar2 * 0x14), piVar4 == (int *)0x0)
           ) || ((*(byte *)((int)piVar4 + 0x7f) & 0x10) == 0)) || (piVar4 == (int *)0x0)) {
        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
        local_20 = (float)param_1[0x11];
        iStack_1c = param_1[0x12];
        iStack_18 = param_1[0x13];
        FUN_004357e0(param_1 + 0x14);
        *(undefined2 *)(param_1 + 0x5a) = 0;
        FUN_004b0900(&local_20);
        if ((short)param_1[0x5a] == -1) {
          piVar4 = (int *)0x0;
        }
        else {
          uVar3 = *(uint *)(DAT_0076f648 + (short)param_1[0x5a] * 0x14);
          if (uVar3 == 0) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = (int *)(-(uint)((*(byte *)(uVar3 + 0x7f) & 0x10) != 0) & uVar3);
          }
        }
      }
      (**(code **)(*piVar4 + 0x14))(&stack0xffffffc8,0);
    }
    if ((NAN(fStack_4) || NAN(DAT_006e92e8)) != (fStack_4 == DAT_006e92e8)) {
      FUN_00659600(s_CPPickup01_00724448,1);
      *(undefined2 *)((int)param_1 + 0x176) = 0;
      *(ushort *)((int)param_1 + 0x16e) = *(ushort *)((int)param_1 + 0x16e) | 0x40;
      FUN_004b3730();
      if ((*(ushort *)((int)param_1 + 0x16e) & 0x1800) != 0) {
        *(ushort *)((int)param_1 + 0x16e) = *(ushort *)((int)param_1 + 0x16e) & 0xfeff;
        FUN_004b3400();
      }
      local_2c = 1.0;
      local_28 = 1.0;
      local_24 = 1.0;
      local_20 = 0.0;
      iStack_1c = 0;
      iStack_18 = 0;
      FUN_00488d30(s_Letter_0071e784,param_1 + 5,&local_20,&local_2c);
      return;
    }
  }
  else {
    FUN_004b3730();
    param_1[5] = param_1[8];
    param_1[6] = param_1[9];
    param_1[7] = param_1[10];
  }
  return;
}

