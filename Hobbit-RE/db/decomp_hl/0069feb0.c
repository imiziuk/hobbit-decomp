
undefined4 * FUN_0069feb0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e764b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)operator_new(0x5dc);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_006a0340();
    FUN_006a0340();
    FUN_006a0340();
    FUN_006c043b(puVar1 + 0x30,0x28,2,FUN_006a0340,FUN_00425890);
    local_4._0_1_ = 1;
    FUN_006c043b(puVar1 + 0x44,0x28,2,FUN_006a0340,FUN_00425890);
    local_4._0_1_ = 2;
    FUN_006c043b(puVar1 + 0x58,0x28,2,FUN_006a0340,FUN_00425890);
    local_4._0_1_ = 3;
    FUN_006c043b(puVar1 + 0x6c,0x28,2,FUN_006a0340,FUN_00425890);
    local_4._0_1_ = 4;
    FUN_006c043b(puVar1 + 0x80,0x28,2,FUN_006a0340,FUN_00425890);
    local_4._0_1_ = 5;
    FUN_006c043b(puVar1 + 0x94,0x28,2,FUN_006a0340,FUN_00425890);
    local_4._0_1_ = 6;
    FUN_006c043b(puVar1 + 0xa8,0x28,2,FUN_006a0340,FUN_00425890);
    local_4._0_1_ = 7;
    FUN_006c043b(puVar1 + 0xbc,0x28,2,FUN_006a0340,FUN_00425890);
    local_4._0_1_ = 8;
    FUN_006c043b(puVar1 + 0xd0,0x28,2,FUN_006a0340,FUN_00425890);
    local_4._0_1_ = 9;
    FUN_006c043b(puVar1 + 0xe4,0x28,2,FUN_006a0340,FUN_00425890);
    local_4._0_1_ = 10;
    FUN_006c043b(puVar1 + 0xf8,0x28,2,FUN_006a0340,FUN_00425890);
    local_4._0_1_ = 0xb;
    FUN_006c043b(puVar1 + 0x10c,0x28,2,FUN_006a0340,FUN_00425890);
    local_4._0_1_ = 0xc;
    FUN_006c043b(puVar1 + 0x120,0x28,2,FUN_006a0340,FUN_00425890);
    local_4._0_1_ = 0xd;
    FUN_006c043b(puVar1 + 0x134,0x28,2,FUN_006a0340,FUN_00425890);
    local_4._0_1_ = 0xe;
    FUN_006c043b(puVar1 + 0x148,0x28,2,FUN_006a0340,FUN_00425890);
    local_4._0_1_ = 0xf;
    FUN_006c043b(puVar1 + 0x15c,0x28,2,FUN_006a0340,FUN_00425890);
    local_4 = CONCAT31(local_4._1_3_,0x10);
    FUN_006a1cb0();
  }
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00648600(puVar1,0,0x5dc);
    puVar1[1] = param_1;
    *puVar1 = 1;
    puVar1[0xe] = (param_2[2] - *param_2) / 2 + *param_2;
    puVar1[0xf] = (param_2[3] - param_2[1]) / 2 + param_2[1];
    puVar1[0xc] = 1;
    puVar1[10] = 0xffffffff;
    puVar1[2] = *param_2;
    puVar1[3] = param_2[1];
    puVar1[4] = param_2[2];
    puVar1[5] = param_2[3];
    puVar1[6] = param_3;
    uVar2 = FUN_0069f520(s_highlight_00755a98);
    puVar1[0xb] = uVar2;
    puVar1[0x35] = 0x3d75c28f;
    puVar1[0x34] = 0x3e4ccccd;
    puVar1[0x49] = 0x3d75c28f;
    puVar1[0x48] = 0x3e4ccccd;
    puVar1[0x5d] = 0x3d75c28f;
    puVar1[0x5c] = 0x3e4ccccd;
    puVar1[0x71] = 0x3d75c28f;
    puVar1[0x70] = 0x3e4ccccd;
    puVar1[0x85] = 0x3d75c28f;
    puVar1[0x84] = 0x3e4ccccd;
    puVar1[0x99] = 0x3d75c28f;
    puVar1[0x98] = 0x3e4ccccd;
    puVar1[0xc1] = 0x3d75c28f;
    puVar1[0xc0] = 0x3e4ccccd;
    puVar1[0xd5] = 0x3d75c28f;
    puVar1[0xd4] = 0x3e4ccccd;
    puVar1[0xe9] = 0x3d75c28f;
    puVar1[0xe8] = 0x3e4ccccd;
    puVar1[0xfd] = 0x3d75c28f;
    puVar1[0xfc] = 0x3e4ccccd;
    puVar1[0x111] = 0x3d75c28f;
    puVar1[0x110] = 0x3e4ccccd;
    puVar1[0x125] = 0x4129999a;
    puVar1[0x124] = 0x42226666;
    puVar1[0x139] = 0x4129999a;
    puVar1[0x138] = 0x42226666;
    puVar1[0x14d] = 0x4129999a;
    puVar1[0x14c] = 0x42226666;
    puVar1[0x161] = 0x4129999a;
    puVar1[0x160] = 0x42226666;
    puVar1[0x121] = 0x3f800000;
    puVar1[0x122] = 0x3e19999a;
    puVar1[0x123] = 0x3e4ccccd;
    puVar1[0x136] = 0x3e19999a;
    puVar1[0x137] = 0x3e4ccccd;
    puVar1[0x135] = 0xbf800000;
    puVar1[0x149] = 0xbf800000;
    puVar1[0x14a] = 0x3e19999a;
    puVar1[0x14b] = 0x3e4ccccd;
    puVar1[0x15d] = 0x3f800000;
    puVar1[0x15e] = 0x3e19999a;
    puVar1[0x15f] = 0x3e4ccccd;
    if (puVar1[0x174] != 0x14) {
      pvVar3 = operator_new(0x50);
      iVar4 = 0;
      if (0 < (int)puVar1[0x172]) {
        do {
          *(undefined4 *)((int)pvVar3 + iVar4 * 4) = *(undefined4 *)(puVar1[0x173] + iVar4 * 4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)puVar1[0x172]);
      }
      FUN_006bf840(puVar1[0x173]);
      puVar1[0x173] = pvVar3;
      puVar1[0x174] = 0x14;
    }
    puVar5 = (undefined4 *)FUN_006a20c0();
    *puVar5 = puVar1;
  }
  ExceptionList = local_c;
  return puVar1;
}

