
undefined4 __thiscall
FUN_006764c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(param_6 * 0x50 + 0x30 + *(int *)(param_1 + 0xc)) + 0x10);
  iVar3 = param_7 + 1;
LAB_006764e5:
  if (param_7 < 0) {
    if (iVar1 <= iVar3) {
      *(undefined4 *)(param_1 + 0x13fc) = 0;
      return 0;
    }
    goto LAB_0067652c;
  }
  iVar2 = FUN_006763a0(param_2,param_3,param_4,param_5,param_6,param_7);
  if (iVar2 == 0) goto code_r0x00676523;
  goto LAB_00676550;
code_r0x00676523:
  param_7 = param_7 + -1;
  if (iVar3 < iVar1) {
LAB_0067652c:
    iVar2 = FUN_006763a0(param_2,param_3,param_4,param_5,param_6,iVar3);
    if (iVar2 != 0) {
LAB_00676550:
      *(int *)(param_1 + 0x13fc) = param_7;
      return 1;
    }
    iVar3 = iVar3 + 1;
  }
  goto LAB_006764e5;
}

