
/* WARNING: Type propagation algorithm not settling */

float10 FUN_0042aa30(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  float10 fVar4;
  float local_30;
  int local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf628;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (((DAT_00813038 != 0) &&
      (ExceptionList = &local_c, iVar1 = FUN_006a0390(DAT_00813038), iVar1 != 0)) &&
     (iVar1 = FUN_006a17a0(DAT_00813038), iVar1 != 0)) {
    ExceptionList = local_c;
    return (float10)DAT_006e92e4;
  }
  local_30 = 0.0;
  local_2c[4] = 0;
  local_2c[3] = 0;
  local_2c[5] = 0;
  local_2c[7] = 0;
  local_2c[6] = 0;
  local_2c[1] = 0;
  local_2c[2] = 0;
  local_4 = 0;
  FUN_0042b9b0(param_1,local_2c + 1);
  if (0 < local_2c[3]) {
    iVar1 = 0;
    do {
      uVar2 = FUN_0042b100(*(undefined4 *)(local_2c[4] + iVar1 * 4));
      FUN_0042b820(uVar2,local_2c);
      if (((local_2c[0] == 2) || (local_2c[0] == 4)) &&
         (fVar3 = (float10)FUN_00671130(uVar2,0),
         (NAN(fVar3) || NAN((float10)DAT_006e92e4)) == (fVar3 == (float10)DAT_006e92e4))) {
        fVar4 = (float10)local_30;
        if (fVar3 < (float10)DAT_006e92e4 == (NAN(fVar3) || NAN((float10)DAT_006e92e4))) {
          if (fVar4 <= fVar3) {
            local_30 = (float)fVar3;
          }
        }
        else if (fVar4 < fVar3 == (NAN(fVar4) || NAN(fVar3))) {
          local_30 = (float)fVar3;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_2c[3]);
  }
  if (local_2c[6] != 2) {
    FUN_006bf840(local_2c[4]);
  }
  ExceptionList = local_c;
  return (float10)local_30;
}

