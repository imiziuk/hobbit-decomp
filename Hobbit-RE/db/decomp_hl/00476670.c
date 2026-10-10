
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00476670(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined4 uStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  FUN_0064e870(6,s_CINEMA__Starting_dialog__s_00727d5c,*(undefined4 *)(param_1 + 0x28));
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  piVar1 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  iVar2 = FUN_00472e20();
  if (((iVar2 == 0) && (piVar1 != (int *)0x0)) && (*(int *)(param_1 + 0x5c) != 0)) {
    puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x28))();
    uStack_4 = puVar3[2];
    fStack_8 = (float)puVar3[1] + _DAT_006ec0e4;
    uStack_c = *puVar3;
    uVar4 = FUN_00659630(*(undefined4 *)(param_1 + 0x28),&uStack_c,1);
  }
  else {
    uVar4 = FUN_00659600(*(undefined4 *)(param_1 + 0x28),1);
  }
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  fVar5 = (float10)FUN_00658020(uVar4);
  FUN_0054e780(*(undefined4 *)(param_1 + 0x28),(float)fVar5,0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xfc))(*(undefined4 *)(param_1 + 0x54));
  }
  return;
}

