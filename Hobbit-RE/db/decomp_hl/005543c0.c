
void __thiscall FUN_005543c0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint local_a24;
  int local_a20;
  undefined1 local_a1c [12];
  undefined1 local_a10 [256];
  uint local_910;
  int local_38;
  int local_34;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9c36;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_material_mgr__RegisterMaterial_0073d47c);
  iVar5 = 0;
  uVar6 = 0;
  local_4 = 0;
  *param_1 = *param_1 + 1;
  if (param_1[0x13] < 1) {
LAB_005544f7:
    FUN_00557e00();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00557fe0(param_2);
    iVar5 = FUN_005c90f0(&local_a24,&local_a20);
    if (iVar5 == 0) {
      local_a24 = 0xffffffff;
    }
    else {
      local_a24 = (local_a24 << (*(byte *)((int)param_1 + 0x5e) & 0x1f)) + local_a20;
    }
    local_910 = local_a24;
    FUN_00557fe0(local_a10);
    FUN_005c90f0(local_a1c,&local_a20);
    *(undefined4 *)
     (*(int *)(param_1[0x28] + 8 +
              ((int)local_910 >> (*(byte *)((int)param_1 + 0x9a) & 0x1f)) * 0x18) +
     (param_1[0x25] & local_910) * 4) = 1;
    iVar5 = 0;
    param_1[1] = param_1[1] + 1;
    if (0 < local_34) {
      do {
        puVar4 = (undefined1 *)FUN_005493e0(local_38 + iVar5 * 4);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0075b6e0;
        }
        FUN_00548de0(puVar4);
        iVar2 = FUN_00549470(local_38 + iVar5 * 4);
        if (iVar2 != 0) {
          FUN_00549580(local_38 + iVar5 * 4);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_34);
    }
    local_4 = local_4 & 0xffffff00;
    FUN_00557f20();
LAB_00554638:
    *(uint *)(param_2 + 0x100) = local_a24;
    param_1[0x2f] = 1;
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return;
  }
LAB_00554411:
  iVar2 = FUN_00558820(param_2,(param_1[0x16] & uVar6) * 0xa04 +
                               *(int *)(param_1[0x19] + 8 +
                                       ((int)uVar6 >> (*(byte *)((int)param_1 + 0x5e) & 0x1f)) *
                                       0x18));
  if (iVar2 != 0) goto code_r0x0055443b;
  param_1[2] = param_1[2] + 1;
  local_a24 = uVar6;
  if (0 < *(int *)(param_2 + 0x9dc)) {
    do {
      iVar2 = iVar5 * 4;
      puVar4 = (undefined1 *)FUN_005493e0(*(int *)(param_2 + 0x9d8) + iVar2);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0075b6e0;
      }
      FUN_00548de0(puVar4);
      iVar3 = FUN_00549470(*(int *)(param_2 + 0x9d8) + iVar2);
      if (iVar3 != 0) {
        FUN_00549580(*(int *)(param_2 + 0x9d8) + iVar2);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_2 + 0x9dc));
  }
  piVar1 = (int *)(*(int *)(param_1[0x28] + 8 +
                           ((int)local_a24 >> (*(byte *)((int)param_1 + 0x9a) & 0x1f)) * 0x18) +
                  (param_1[0x25] & local_a24) * 4);
  *piVar1 = *piVar1 + 1;
  if (local_a24 != 0xffffffff) goto LAB_00554638;
  goto LAB_005544f7;
code_r0x0055443b:
  uVar6 = uVar6 + 1;
  if (param_1[0x13] <= (int)uVar6) goto LAB_005544f7;
  goto LAB_00554411;
}

