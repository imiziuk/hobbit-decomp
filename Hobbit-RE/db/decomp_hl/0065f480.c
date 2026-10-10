
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0065f480(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 auStack_dc [4];
  undefined4 uStack_cc;
  int *piStack_c8;
  undefined1 *puStack_c4;
  undefined4 uStack_c0;
  char *pcStack_bc;
  undefined4 local_b8;
  int *piVar6;
  undefined4 local_64 [25];
  
  if (DAT_007eff74 == 0) {
    _local_b8 = 3.30122559942798e-317;
    Sleep(0);
    return;
  }
  if (DAT_007f00a8 < 2) {
    _local_b8 = (double)CONCAT44(0x65f4c5,local_b8);
    FUN_0064cbe0();
    _local_b8 = (double)CONCAT44(0x65f4ce,local_b8);
    FUN_0064cc30();
    _local_b8 = (double)CONCAT44(0x65f4d8,local_b8);
    FUN_0064cc50();
    _local_b8 = (double)CONCAT44(0x65f4e2,local_b8);
    fVar5 = (float10)FUN_0064cd30();
    _DAT_007f0060 = (float)fVar5;
    _local_b8 = (double)CONCAT44(0x65f4f1,local_b8);
    FUN_0064cbe0();
    _local_b8 = (double)CONCAT44(0x65f4fa,local_b8);
    FUN_0064cc00();
    if (DAT_007edaf8 == 0) {
      _local_b8 = 1.8636460309616728e-306;
      iVar1 = FUN_0065f190();
      if (iVar1 != 0) {
        _local_b8 = (double)CONCAT44(0x65f518,local_b8);
        FUN_0065f430();
      }
      if (DAT_007edaf8 == 0) {
        return;
      }
    }
    _local_b8 = (double)CONCAT44(0x65f52e,local_b8);
    FUN_0064cc30();
    _DAT_007f0314 = 0;
    _local_b8 = (double)CONCAT44(0x65f53d,local_b8);
    FUN_0064cc00();
    _local_b8 = (double)CONCAT44(0x65f542,local_b8);
    FUN_0067d640();
    _local_b8 = (double)CONCAT44(0x65f54b,local_b8);
    FUN_0064cc50();
    _local_b8 = (double)CONCAT44(0x65f550,local_b8);
    FUN_0067d1e0();
    if (DAT_007f0ef8 != 0) {
      puVar3 = &DAT_007f0ed4;
      puVar4 = auStack_dc;
      for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_0064f0d0(0x28,1,&DAT_0074f07c);
      fVar5 = (float10)FUN_0065c190();
      _local_b8 = (double)fVar5;
      pcStack_bc = s_FPS___4_2f_0074f080;
      uStack_c0 = 2;
      puStack_c4 = (undefined1 *)0x28;
      piStack_c8 = (int *)0x65f590;
      FUN_0064f0d0();
      if (DAT_007edb24 != 0) {
        *(undefined1 *)((int)local_64 + DAT_007edb24) = 0;
        if (0 < (int)DAT_007edb24) {
          puVar3 = local_64;
          for (uVar2 = DAT_007edb24 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar3 = 0x2a2a2a2a;
            puVar3 = puVar3 + 1;
          }
          for (uVar2 = DAT_007edb24 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined1 *)puVar3 = 0x2a;
            puVar3 = (undefined4 *)((int)puVar3 + 1);
          }
        }
        _local_b8 = (double)CONCAT44(local_64,5);
        pcStack_bc = (char *)0x28;
        uStack_c0 = 0x65f5ce;
        FUN_0064f0d0();
      }
    }
    local_b8 = 0x65f5df;
    piVar6 = DAT_007f1000;
    (**(code **)(*DAT_007f1000 + 0x8c))();
    DAT_007edaf8 = 0;
    local_b8 = 0x65f5ea;
    iVar1 = FUN_0065b910();
    if (iVar1 != 0) {
      local_b8 = 0;
      pcStack_bc = (char *)0x0;
      uStack_c0 = 0;
      if (DAT_007f0464 == 0) {
        puStack_c4 = (undefined1 *)0x0;
      }
      else {
        puStack_c4 = &stack0xffffff58;
      }
      piStack_c8 = DAT_007f1000;
      uStack_cc = 0x65f627;
      (**(code **)(*DAT_007f1000 + 0x3c))();
    }
    local_b8 = 0x65f62c;
    FUN_00671320();
    local_b8 = 0x65f631;
    FUN_0065f670();
    local_b8 = 0x65f63a;
    FUN_0064cc50();
    local_b8 = 0x65f643;
    fVar5 = (float10)FUN_0064cd30();
    _DAT_007f0064 = (float)fVar5;
    local_b8 = 0x65f653;
    FUN_0064cc30();
    _local_b8 = (double)CONCAT44(piVar6,0x65f65d);
    FUN_0064cc00();
    return;
  }
  FUN_0065f730();
  return;
}

