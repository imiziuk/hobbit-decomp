
void __fastcall FUN_006092a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x94)) {
    do {
      puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x98) + iVar6 * 4);
      if (((puVar4 != (undefined4 *)0x0) &&
          (piVar1 = (int *)FUN_00406bf0(*puVar4,puVar4[1]), piVar1 != (int *)0x0)) &&
         ((iVar2 = (**(code **)(*piVar1 + 0x108))(0), iVar2 == 0 ||
          (iVar2 = FUN_004a1090(), iVar2 == 0)))) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x98) + iVar6 * 4);
        piVar3 = (int *)FUN_00406bf0(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
        if (piVar3 != (int *)0x0) {
          puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x28))();
          (**(code **)(*piVar1 + 300))(*puVar4,puVar4[1],puVar4[2]);
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0x98) + iVar6 * 4);
        piVar1 = (int *)FUN_00406bf0(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 0x14));
        if (piVar1 != (int *)0x0) {
          puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x28))();
          uVar5 = (**(code **)(*piVar1 + 0x28))(*puVar4,puVar4[1],puVar4[2]);
          FUN_004357e0(uVar5);
          FUN_004aa030();
          FUN_00599b10();
        }
        FUN_004a57e0();
        uVar5 = FUN_00593dd0(0x41,1,0xfffffffe);
        FUN_005925e0(uVar5);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x94));
  }
  return;
}

