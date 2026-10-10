
void __fastcall FUN_00622190(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int local_8;
  
  FUN_005af120();
  FUN_004a4130();
  FUN_005af120();
  FUN_004a4140();
  iVar1 = __ftol();
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    do {
      if (iVar1 <= local_8) {
        return;
      }
      puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x54) + local_8 * 4);
      if (((puVar5 != (undefined4 *)0x0) &&
          (piVar2 = (int *)FUN_00406bf0(*puVar5,puVar5[1]), piVar2 != (int *)0x0)) &&
         ((iVar3 = (**(code **)(*piVar2 + 0x108))(0), iVar3 == 0 ||
          (iVar3 = FUN_004a1090(), iVar3 == 0)))) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x54) + local_8 * 4);
        piVar4 = (int *)FUN_00406bf0(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc));
        if (piVar4 != (int *)0x0) {
          puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x28))();
          (**(code **)(*piVar2 + 300))(*puVar5,puVar5[1],puVar5[2]);
        }
        iVar3 = *(int *)(*(int *)(param_1 + 0x54) + local_8 * 4);
        piVar2 = (int *)FUN_00406bf0(*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 0x14));
        if (piVar2 != (int *)0x0) {
          puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x28))();
          uVar6 = (**(code **)(*piVar2 + 0x28))(*puVar5,puVar5[1],puVar5[2]);
          FUN_004357e0(uVar6);
          FUN_004aa030();
          FUN_00599b10();
        }
        FUN_004a57e0();
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 0x50));
  }
  return;
}

