
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e20e0(void)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_1c [12];
  float local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0x4e20e8;
  pfVar1 = (float *)FUN_005c0150();
  uStack_8 = 0;
  uStack_c = 0xffffffff;
  puVar4 = auStack_1c;
  local_10 = SQRT((pfVar1[4] - pfVar1[1]) * (pfVar1[4] - pfVar1[1]) +
                  (pfVar1[3] - *pfVar1) * (pfVar1[3] - *pfVar1) +
                  (pfVar1[5] - pfVar1[2]) * (pfVar1[5] - pfVar1[2])) * _DAT_006e936c;
  FUN_005c0150(auStack_1c);
  FUN_0045bbd0(puVar4);
  uVar3 = FUN_00425510();
  uVar2 = FUN_00508170(uVar3);
  FUN_00572ce0(uVar2,uVar3);
  return;
}

