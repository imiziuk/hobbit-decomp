
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005ec540(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uStack_40;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_40 = *(undefined4 *)(param_1 + 0x24);
  piVar1 = (int *)FUN_00406bf0(*(undefined4 *)(param_1 + 0x20));
  uStack_40 = *(undefined4 *)(param_1 + 0x2c);
  piVar2 = (int *)FUN_00406bf0(*(undefined4 *)(param_1 + 0x28));
  if ((piVar1 != (int *)0x0) && (piVar2 != (int *)0x0)) {
    uStack_40 = 0x5ec587;
    puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x28))();
    uStack_c = *puVar3;
    uStack_8 = puVar3[1];
    uStack_4 = puVar3[2];
    uStack_40 = 0x5ec5a2;
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x28))();
    uStack_18 = *puVar3;
    uStack_14 = puVar3[1];
    uStack_10 = puVar3[2];
    uStack_40 = 0x5ec5bd;
    (**(code **)(*piVar1 + 0x30))();
    uStack_40 = 0x5ec5d8;
    (**(code **)(*piVar2 + 0x30))();
    uStack_40 = 0;
    (**(code **)(*piVar1 + 0x14))(&uStack_18);
    (**(code **)(*piVar2 + 0x14))(&uStack_14,0);
    (**(code **)(*piVar1 + 0x1c))(&uStack_40);
    (**(code **)(*piVar2 + 0x1c))(&stack0xffffffc8);
  }
  return;
}

