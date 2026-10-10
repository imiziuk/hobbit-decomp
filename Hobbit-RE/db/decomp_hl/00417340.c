
void __fastcall FUN_00417340(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_34;
  int local_28;
  int local_24;
  int local_20 [4];
  float fStack_10;
  undefined4 uStack_c;
  
  iVar3 = FUN_0041bcc0();
  if (*(int *)(iVar3 + 0xa5c) == 0) {
    iVar4 = 0;
    iVar3 = 0;
  }
  else {
    iVar4 = *(int *)(iVar3 + 0xa50);
    iVar3 = *(int *)(iVar3 + 0xa54);
  }
  if ((iVar4 == *(int *)(param_1 + 0x2c8)) && (iVar3 == *(int *)(param_1 + 0x2cc))) {
    local_20[0] = 0;
  }
  else {
    local_20[0] = FUN_004021c0(*(int *)(param_1 + 0x2c8),*(int *)(param_1 + 0x2cc));
  }
  if ((iVar4 == *(int *)(param_1 + 0x2d0)) && (iVar3 == *(int *)(param_1 + 0x2d4))) {
    local_20[1] = 0;
  }
  else {
    local_20[1] = FUN_004021c0(*(int *)(param_1 + 0x2d0),*(int *)(param_1 + 0x2d4));
  }
  if ((iVar4 == *(int *)(param_1 + 0x2d8)) && (iVar3 == *(int *)(param_1 + 0x2dc))) {
    local_20[2] = 0;
  }
  else {
    local_20[2] = FUN_004021c0(*(int *)(param_1 + 0x2d8),*(int *)(param_1 + 0x2dc));
  }
  puVar6 = (undefined4 *)(param_1 + 0x370);
  local_34 = 6;
  do {
    iVar3 = FUN_004021c0(puVar6[-0x18],puVar6[-0x17]);
    iVar4 = FUN_004021c0(*puVar6,puVar6[1]);
    if ((iVar4 != 0) && (iVar3 != 0)) {
      iVar4 = 0;
      fVar2 = *(float *)(iVar3 + 0x54) + DAT_006e92e8;
      do {
        piVar1 = (int *)local_20[iVar4];
        if (piVar1 != (int *)0x0) {
          local_28 = piVar1[2];
          local_24 = piVar1[3];
          iVar3 = FUN_004e19b0(&local_28);
          if (iVar3 != 0) {
            puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x28))();
            local_20[3] = *puVar5;
            uStack_c = puVar5[2];
            fStack_10 = fVar2;
            (**(code **)(*piVar1 + 0x14))(local_20 + 3,0);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
    }
    puVar6 = puVar6 + 2;
    local_34 = local_34 + -1;
  } while (local_34 != 0);
  return;
}

