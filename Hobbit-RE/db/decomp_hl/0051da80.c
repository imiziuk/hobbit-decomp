
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0051da80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(DAT_0081303c + 0x394) = 0;
  uVar1 = FUN_006a2400(param_1,param_2,param_3,param_4,param_5,param_6,0);
  iVar2 = FUN_0041bcc0();
  iVar2 = *(int *)(iVar2 + 0x4ec4);
  uVar3 = _DAT_0000016c;
  uVar4 = _DAT_00000170;
  uVar5 = _DAT_00000174;
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(iVar2 + 0x16c);
    uVar4 = *(undefined4 *)(iVar2 + 0x170);
    uVar5 = *(undefined4 *)(iVar2 + 0x174);
  }
  FUN_00529b10(uVar3,uVar4,uVar5);
  FUN_0065b0f0();
  _DAT_00763ed4 = 1;
  DAT_00734f1c = 1;
  return uVar1;
}

