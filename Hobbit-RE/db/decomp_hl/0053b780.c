
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0053b780(int *param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1[2] != -1) {
    param_1[7] = param_1[5];
    param_1[6] = param_1[4];
    param_1[0x1a] = 0;
    uVar2 = param_1[1];
    uVar4 = uVar2 * 2;
    if (((uVar4 ^ uVar2) & 0x7fffffff ^ uVar4) == 0xffffffff) {
      iVar5 = *param_1;
    }
    else {
      iVar5 = FUN_00549470(param_1 + 1);
    }
    fVar3 = (float)*(byte *)(param_1[2] * 0x50 + *(int *)(iVar5 + 0x58) + 0x2f);
    param_2 = param_2 * fVar3;
    fVar3 = fVar3 * (float)param_1[0x1f] + (float)param_1[3];
    if (param_1[0x19] != 0) {
      fVar1 = fVar3 - _DAT_006e999c;
      if (fVar1 < param_2 + (float)param_1[4]) {
        param_1[4] = (int)fVar1;
        param_1[0x1a] = 1;
        return;
      }
      if ((param_1[0x19] != 0) &&
         (param_2 + (float)param_1[4] < DAT_006e92e4 !=
          (NAN(param_2 + (float)param_1[4]) || NAN(DAT_006e92e4)))) {
        param_1[4] = 0;
        param_1[0x1a] = 1;
        return;
      }
    }
    param_2 = param_2 + (float)param_1[4];
    param_1[4] = (int)param_2;
    fVar3 = fVar3 - DAT_006e92e8;
    if (fVar3 < param_2) {
      do {
        if (param_1[0x18] == 0) {
          param_1[5] = 0;
          param_2 = fVar3;
        }
        else {
          param_2 = param_2 - fVar3;
          param_1[5] = param_1[5] + 1;
        }
      } while (fVar3 < param_2);
      param_1[4] = (int)param_2;
    }
    fVar1 = (float)param_1[4];
    if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
      do {
        if (param_1[0x18] == 0) {
          param_1[5] = 0;
          param_1[4] = (int)DAT_006e92e4;
          return;
        }
        fVar1 = fVar1 + fVar3;
        param_1[5] = param_1[5] + -1;
      } while (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4)));
      param_1[4] = (int)fVar1;
      return;
    }
  }
  return;
}

