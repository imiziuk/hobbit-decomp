
/* WARNING: Removing unreachable block (ram,0x00665140) */

void __thiscall FUN_006650d0(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uStack_4;
  
  iVar3 = *(int *)(param_1 + 0x40);
  uVar1 = *(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x14);
  uStack_4 = param_1 & 0xffffff;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0x44) - iVar3;
  }
  if (uVar2 < uVar1) {
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x44) - iVar3;
    }
    FUN_00667450(*(undefined4 *)(param_1 + 0x44),uVar1 - iVar3,(int)&uStack_4 + 3);
  }
  else if (iVar3 != 0) {
    if ((uint)(*(int *)(param_1 + 0x44) - iVar3) <= uVar1) {
      *param_2 = *(undefined4 *)(param_1 + 0x40);
      return;
    }
    *(uint *)(param_1 + 0x44) = iVar3 + uVar1;
    *param_2 = *(undefined4 *)(param_1 + 0x40);
    return;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  return;
}

